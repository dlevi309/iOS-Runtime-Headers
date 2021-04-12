/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/PDAnimateBehavior.h>

@class NSString;

@interface PDAnimateTimeBehavior : PDAnimateBehavior {

	NSString* mTo;
	NSString* mFrom;
	NSString* mBy;
	BOOL mHasCalcMode;
	int mCalcMode;
	BOOL mHasValueType;
	int mValueType;

}
-(id)init;
-(id)to;
-(id)from;
-(int)valueType;
-(void)setFrom:(id)arg1 ;
-(void)setTo:(id)arg1 ;
-(void)setValueType:(int)arg1 ;
-(BOOL)hasValueType;
-(id)by;
-(void)setBy:(id)arg1 ;
-(BOOL)hasCalcMode;
-(int)calcMode;
-(void)setCalcMode:(int)arg1 ;
@end

