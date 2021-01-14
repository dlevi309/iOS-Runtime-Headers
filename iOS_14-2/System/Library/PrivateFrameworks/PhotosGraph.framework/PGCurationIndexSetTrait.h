/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)thresholdForSceneIdentifier:(unsigned)arg1 ;
-(unsigned long long)targetNumberOfMatches;
-(void)setThresholdByIdentifier:(NSDictionary *)arg1 ;
-(id)niceDescription;
-(BOOL)isActive;
-(id)debugDescription;
-(void)setTargetNumberOfMatches:(unsigned long long)arg1 ;
-(NSDictionary *)thresholdByIdentifier;
-(id)initWithIndexSet:(id)arg1 ;
-(NSIndexSet *)indexSet;
@end

