/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/PDAnimateBehavior.h>

@class OADColor;

@interface PDAnimateColorBehavior : PDAnimateBehavior {

	BOOL mHasBy;
	double mBy[3];
	BOOL mHasFrom;
	OADColor* mFrom;
	BOOL mHasTo;
	OADColor* mTo;
	BOOL mHasColorSpace;
	int mColorSpace;
	BOOL mHasColorDirection;
	int mDirection;

}
-(id)to;
-(int)direction;
-(void)setColorSpace:(int)arg1 ;
-(double*)by;
-(id)from;
-(int)colorSpace;
-(BOOL)hasTo;
-(void)setDirection:(int)arg1 ;
-(void)setTo:(id)arg1 ;
-(BOOL)hasBy;
-(BOOL)hasFrom;
-(void)setBy:(double)arg1 ;
-(void)setFrom:(id)arg1 ;
-(BOOL)hasColorSpace;
-(BOOL)hasColorDirection;
@end

