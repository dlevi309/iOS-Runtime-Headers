/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGTitleGenerator.h>

@class NSSet;

@interface PGPeopleMemoryTitleGenerator : PGTitleGenerator {

	unsigned long long _type;
	NSSet* _personNodes;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSSet * personNodes;                  //@synthesize personNodes=_personNodes - In the implementation block
-(unsigned long long)type;
-(void)_generateTitleAndSubtitleWithResult:(/*^block*/id)arg1 ;
-(id)initWithMomentNodes:(id)arg1 personNodes:(id)arg2 type:(unsigned long long)arg3 ;
-(id)_titleForPeople;
-(id)_titleForSocialGroup;
-(id)_titleForEarlyMoments;
-(id)_timeTitleForEarlyMoments;
-(BOOL)_person:(id)arg1 isPresentInAnyMomentOfMoments:(id)arg2 ;
-(id)_birthdayTitleForPeople;
-(id)_timeTitleForPeople;
-(BOOL)_useSplitTimeTitlesIfNeeded;
-(NSSet *)personNodes;
@end

