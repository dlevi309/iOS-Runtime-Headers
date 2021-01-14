/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADEffect.h>

@interface OADReflectionEffect : OADEffect {

	float mBlurRadius;
	float mStartOpacity;
	float mStartPosition;
	float mEndOpacity;
	float mEndPosition;
	float mDistance;
	float mDirection;
	float mFadeDirection;
	float mXScale;
	float mYScale;
	float mXSkew;
	float mYSkew;
	int mAlignment;
	BOOL mRotateWithShape;

}
-(void)setBlurRadius:(float)arg1 ;
-(float)direction;
-(void)setDistance:(float)arg1 ;
-(id)init;
-(void)setDirection:(float)arg1 ;
-(int)alignment;
-(float)distance;
-(float)blurRadius;
-(float)xSkew;
-(float)ySkew;
-(void)setAlignment:(int)arg1 ;
-(float)xScale;
-(float)yScale;
-(id)description;
-(float)endPosition;
-(float)startPosition;
-(unsigned long long)hash;
-(void)setStartPosition:(float)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setEndPosition:(float)arg1 ;
-(void)setXScale:(float)arg1 ;
-(void)setYScale:(float)arg1 ;
-(void)setRotateWithShape:(BOOL)arg1 ;
-(void)setStyleColor:(id)arg1 ;
-(BOOL)rotateWithShape;
-(void)setXSkew:(float)arg1 ;
-(void)setYSkew:(float)arg1 ;
-(float)startOpacity;
-(float)endOpacity;
-(float)fadeDirection;
-(void)setStartOpacity:(float)arg1 ;
-(void)setEndOpacity:(float)arg1 ;
-(void)setFadeDirection:(float)arg1 ;
@end

