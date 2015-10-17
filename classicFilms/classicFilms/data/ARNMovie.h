//
//  ARNMovie.h
//  classicFilms
//
//  Created by Stefan Arn on 12/10/15.
//  Copyright © 2015 Stefan Arn. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ARNDataObject.h"

@interface ARNMovie : ARNDataObject

@property (nonatomic, copy) NSString * archive_id;
@property (nonatomic, copy) NSString * tmdb_id;
@property (nonatomic, copy) NSString * title;
@property (nonatomic, strong) NSNumber * year;
@property (nonatomic, copy) NSString * movie_description;
@property (nonatomic, copy) NSString * posterURL;
@property (nonatomic, copy) NSString * backdropURL;
@property (nonatomic, copy) NSString * source;

@end
