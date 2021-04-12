/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/PDAnimateBehavior.h>

@interface PDAnimateRotateBehavior : PDAnimateBehavior {

	double mTo;
	double mFrom;
	double mBy;
	BOOL mHasTo;
	BOOL mHasFrom;
	BOOL mHasBy;

}
-(double)to;
-(double)by;
-(double)from;
-(BOOL)hasTo;
-(id)init;
-(void)setTo:(double)arg1 ;
-(BOOL)hasBy;
-(BOOL)hasFrom;
-(void)setBy:(double)arg1 ;
-(void)setFrom:(double)arg1 ;
@end

