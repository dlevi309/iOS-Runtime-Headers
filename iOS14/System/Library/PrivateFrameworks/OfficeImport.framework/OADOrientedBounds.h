/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGRect)bounds;
-(void)setRotation:(float)arg1 ;
-(id)init;
-(float)rotation;
-(id)initWithBounds:(CGRect)arg1 ;
-(int)xMode;
-(int)yMode;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFlipX:(BOOL)arg1 ;
-(void)setFlipY:(BOOL)arg1 ;
-(BOOL)flipX;
-(id)description;
-(CGRect)boundingBox;
-(BOOL)flipY;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)setOrientedBounds:(id)arg1 ;
-(id)initWithBounds:(CGRect)arg1 rotation:(float)arg2 flipX:(BOOL)arg3 flipY:(BOOL)arg4 ;
-(CGSize)boundingBoxSize;
-(void)setXMode:(int)arg1 ;
-(void)setYMode:(int)arg1 ;
-(BOOL)isEqualToOrientedBounds:(id)arg1 ;
@end

