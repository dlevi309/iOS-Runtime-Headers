/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGCurationTrait.h>

@class NSIndexSet, NSDictionary;

@interface PGCurationIndexSetTrait : PGCurationTrait {

	NSIndexSet* _indexSet;
	NSDictionary* _thresholdByIdentifier;
	unsigned long long _targetNumberOfMatches;

}

@property (nonatomic,retain) NSDictionary * thresholdByIdentifier;                  //@synthesize thresholdByIdentifier=_thresholdByIdentifier - In the implementation block
@property (nonatomic,readonly) NSIndexSet * indexSet;                               //@synthesize indexSet=_indexSet - In the implementation block
@property (assign,nonatomic) unsigned long long targetNumberOfMatches;              //@synthesize targetNumberOfMatches=_targetNumberOfMatches - In the implementation block
-(id)debugDescription;
-(BOOL)isActive;
-(id)initWithIndexSet:(id)arg1 ;
-(NSIndexSet *)indexSet;
-(id)niceDescription;
-(double)thresholdForSceneIdentifier:(unsigned)arg1 ;
-(NSDictionary *)thresholdByIdentifier;
-(void)setThresholdByIdentifier:(NSDictionary *)arg1 ;
-(unsigned long long)targetNumberOfMatches;
-(void)setTargetNumberOfMatches:(unsigned long long)arg1 ;
@end

