/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setType:(int)arg1 ;
-(int)type;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
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

