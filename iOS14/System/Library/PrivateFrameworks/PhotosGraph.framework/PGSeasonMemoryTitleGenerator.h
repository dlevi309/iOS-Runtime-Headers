/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGTitleGenerator.h>

@class NSString;

@interface PGSeasonMemoryTitleGenerator : PGTitleGenerator {

	NSString* _season;
	unsigned long long _category;

}

@property (nonatomic,retain) NSString * season;                        //@synthesize season=_season - In the implementation block
@property (assign,nonatomic) unsigned long long category;              //@synthesize category=_category - In the implementation block
-(void)setCategory:(unsigned long long)arg1 ;
-(NSString *)season;
-(unsigned long long)category;
-(void)setSeason:(NSString *)arg1 ;
-(void)_generateTitleAndSubtitleWithResult:(/*^block*/id)arg1 ;
-(id)initWithMomentNodes:(id)arg1 seasonName:(id)arg2 category:(unsigned long long)arg3 ;
@end

