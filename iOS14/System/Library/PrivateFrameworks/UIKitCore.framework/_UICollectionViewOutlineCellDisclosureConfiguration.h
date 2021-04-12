/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage, UIColor;

@interface _UICollectionViewOutlineCellDisclosureConfiguration : NSObject <NSCopying> {

	/*^block*/id _disclosureWasTappedHandler;
	UIImage* _image;
	long long _alignment;
	double _animationRotationAngle;
	UIColor* _disclosureColor;

}

@property (nonatomic,retain) UIImage * image;                            //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) long long alignment;                        //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) double animationRotationAngle;              //@synthesize animationRotationAngle=_animationRotationAngle - In the implementation block
@property (nonatomic,retain) UIColor * disclosureColor;                  //@synthesize disclosureColor=_disclosureColor - In the implementation block
-(id)initWithImage:(id)arg1 alignment:(long long)arg2 animationRotationAngle:(double)arg3 disclosureColor:(id)arg4 disclosureWasTappedHandler:(/*^block*/id)arg5 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)init;
-(long long)alignment;
-(UIImage *)image;
-(void)setAlignment:(long long)arg1 ;
-(UIColor *)disclosureColor;
-(id)initWithImage:(id)arg1 alignment:(long long)arg2 ;
-(double)animationRotationAngle;
-(void)setAnimationRotationAngle:(double)arg1 ;
-(void)setDisclosureColor:(UIColor *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

