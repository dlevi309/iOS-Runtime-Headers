/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/PDBuild.h>

@class NSMutableArray;

@interface PDParagraphBuild : PDBuild {

	NSMutableArray* mTimeNodeDataList;
	double mAutoAdvanceTime;
	BOOL mIsReversedParagraphOrder;
	int mBuildLevel;
	int mType;

}
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)setAutoAdvanceTime:(double)arg1 ;
-(void)setIsReversedParagraphOrder:(BOOL)arg1 ;
-(void)setBuildLevel:(int)arg1 ;
-(double)autoAdvanceTime;
-(BOOL)isReversedParagraphOrder;
-(int)buildLevel;
-(id)timeNodeDataList;
-(unsigned long long)timeNodeDataListCount;
-(id)timeNodeDataAtIndex:(unsigned long long)arg1 ;
-(id)addTimeNodeData;
@end

