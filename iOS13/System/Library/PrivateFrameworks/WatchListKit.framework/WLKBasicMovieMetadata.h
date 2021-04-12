/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <WatchListKit/WLKBasicContentMetadata.h>

@class NSString, WLKRottenTomatoesRating, NSDate;

@interface WLKBasicMovieMetadata : WLKBasicContentMetadata {

	NSString* _studio;
	WLKRottenTomatoesRating* _rottenTomatoesRating;
	double _duration;
	NSDate* _releaseDate;

}

@property (nonatomic,copy,readonly) NSString * studio;                                      //@synthesize studio=_studio - In the implementation block
@property (nonatomic,readonly) WLKRottenTomatoesRating * rottenTomatoesRating;              //@synthesize rottenTomatoesRating=_rottenTomatoesRating - In the implementation block
@property (nonatomic,readonly) double duration;                                             //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) NSDate * releaseDate;                                        //@synthesize releaseDate=_releaseDate - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(double)duration;
-(NSDate *)releaseDate;
-(NSString *)studio;
-(WLKRottenTomatoesRating *)rottenTomatoesRating;
@end

