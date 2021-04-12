/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)category;
-(void)setCategory:(unsigned long long)arg1 ;
-(void)setSeason:(NSString *)arg1 ;
-(NSString *)season;
-(void)_generateTitleAndSubtitleWithResult:(/*^block*/id)arg1 ;
-(id)initWithMomentNodes:(id)arg1 seasonName:(id)arg2 category:(unsigned long long)arg3 ;
@end

