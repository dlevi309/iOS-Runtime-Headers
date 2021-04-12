/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OADOrientedBounds : NSObject {

	CGRect mBounds;
	float mRotation;
	unsigned mFlipX : 1;
	unsigned mFlipY : 1;
	int mModeX;
	int mModeY;

}
+(id)orientedBoundsWithBounds:(CGRect)arg1 ;
+(id)orientedBoundsWithBounds:(CGRect)arg1 rotation:(float)arg2 flipX:(BOOL)arg3 flipY:(BOOL)arg4 ;
+(BOOL)directionCloserToVerticalThanToHorizontal:(float)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(CGRect)boundingBox;
-(float)rotation;
-(void)setRotation:(float)arg1 ;
-(id)initWithBounds:(CGRect)arg1 ;
-(BOOL)flipX;
-(void)setFlipX:(BOOL)arg1 ;
-(BOOL)flipY;
-(void)setFlipY:(BOOL)arg1 ;
-(void)setOrientedBounds:(id)arg1 ;
-(id)initWithBounds:(CGRect)arg1 rotation:(float)arg2 flipX:(BOOL)arg3 flipY:(BOOL)arg4 ;
-(CGSize)boundingBoxSize;
-(int)xMode;
-(int)yMode;
-(void)setXMode:(int)arg1 ;
-(void)setYMode:(int)arg1 ;
-(BOOL)isEqualToOrientedBounds:(id)arg1 ;
@end

