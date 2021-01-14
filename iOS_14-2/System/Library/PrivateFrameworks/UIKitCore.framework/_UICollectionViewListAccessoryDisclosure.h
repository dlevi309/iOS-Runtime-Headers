/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>

@protocol UITableConstants;
@class UIImageView, UIColor, UIImage;

@interface _UICollectionViewListAccessoryDisclosure : UIControl {

	UIImageView* _imageView;
	BOOL _rotated;
	id<UITableConstants> _constants;
	UIColor* _accessoryTintColor;
	double _rotationAngle;

}

@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) id<UITableConstants> constants;              //@synthesize constants=_constants - In the implementation block
@property (nonatomic,retain) UIColor * accessoryTintColor;                //@synthesize accessoryTintColor=_accessoryTintColor - In the implementation block
@property (assign,nonatomic) BOOL rotated;                                //@synthesize rotated=_rotated - In the implementation block
@property (assign,nonatomic) double rotationAngle;                        //@synthesize rotationAngle=_rotationAngle - In the implementation block
-(double)rotationAngle;
-(unsigned long long)_controlEventsForActionTriggered;
-(void)setRotationAngle:(double)arg1 ;
-(void)setConstants:(id<UITableConstants>)arg1 ;
-(id)viewForLastBaselineLayout;
-(void)setImage:(UIImage *)arg1 ;
-(BOOL)rotated;
-(id)viewForFirstBaselineLayout;
-(id<UITableConstants>)constants;
-(void)setBounds:(CGRect)arg1 ;
-(UIImage *)image;
-(UIColor *)accessoryTintColor;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setRotated:(BOOL)arg1 ;
-(id)initWithConstants:(id)arg1 ;
-(void)setAccessoryTintColor:(UIColor *)arg1 ;
-(void)addActionHandler:(/*^block*/id)arg1 ;
-(void)_updateRotation;
-(CGSize)_minimumSizeForHitTesting;
-(double)_enforcedWidthForWidth:(double)arg1 ;
@end

