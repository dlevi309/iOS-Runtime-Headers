/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/PDAnimateBehavior.h>

@interface PDAnimateScaleBehavior : PDAnimateBehavior {

	CGPoint mTo;
	CGPoint mFrom;
	CGPoint mBy;
	BOOL mHasTo;
	BOOL mHasFrom;
	BOOL mHasBy;

}
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(CGPoint)to;
-(CGPoint)from;
-(void)setFrom:(CGPoint)arg1 ;
-(void)setTo:(CGPoint)arg1 ;
-(BOOL)hasFrom;
-(BOOL)hasTo;
-(CGPoint)by;
-(void)setBy:(CGPoint)arg1 ;
-(BOOL)hasBy;
@end

