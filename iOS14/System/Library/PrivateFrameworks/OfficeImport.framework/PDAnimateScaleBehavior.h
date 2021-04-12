/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGPoint)to;
-(CGPoint)by;
-(CGPoint)from;
-(BOOL)hasTo;
-(id)init;
-(void)setTo:(CGPoint)arg1 ;
-(BOOL)hasBy;
-(BOOL)hasFrom;
-(void)setBy:(CGPoint)arg1 ;
-(void)setFrom:(CGPoint)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

