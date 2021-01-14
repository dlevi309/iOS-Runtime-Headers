/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class PDBuild, PDSequentialTimeNode, OADDrawable;

@interface PDAnimationInfoData : NSObject {

	unsigned mOrder;
	PDBuild* mBuild;
	PDSequentialTimeNode* mSequentialTimeNodeData;
	OADDrawable* mDrawable;

}
-(id)build;
-(id)data;
-(id)drawable;
-(unsigned)order;
-(id)initWithTarget:(id)arg1 presetClass:(int)arg2 presetId:(int)arg3 triggerType:(int)arg4 iterateType:(int)arg5 delay:(double)arg6 direction:(double)arg7 order:(unsigned)arg8 groupId:(id)arg9 build:(id)arg10 ;
@end

