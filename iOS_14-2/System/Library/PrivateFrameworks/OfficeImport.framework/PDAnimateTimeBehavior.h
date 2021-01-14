/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)to;
-(int)valueType;
-(id)by;
-(id)from;
-(id)init;
-(void)setTo:(id)arg1 ;
-(void)setBy:(id)arg1 ;
-(void)setFrom:(id)arg1 ;
-(BOOL)hasValueType;
-(void)setValueType:(int)arg1 ;
-(BOOL)hasCalcMode;
-(int)calcMode;
-(void)setCalcMode:(int)arg1 ;
@end

