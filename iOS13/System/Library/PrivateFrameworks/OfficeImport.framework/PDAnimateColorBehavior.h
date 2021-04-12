/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(int)colorSpace;
-(void)setColorSpace:(int)arg1 ;
-(id)to;
-(int)direction;
-(void)setDirection:(int)arg1 ;
-(id)from;
-(void)setFrom:(id)arg1 ;
-(void)setTo:(id)arg1 ;
-(BOOL)hasFrom;
-(BOOL)hasTo;
-(double*)by;
-(void)setBy:(double)arg1 ;
-(BOOL)hasBy;
-(BOOL)hasColorSpace;
-(BOOL)hasColorDirection;
@end

