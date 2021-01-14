/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>

@protocol UITableConstants;
@class UIImageView, UIColor;

@interface _UICollectionViewListAccessoryControl : UIControl {

	UIImageView* _imageView;
	BOOL _needsImageViewUpdate;
	long long _type;
	id<UITableConstants> _constants;
	UIColor* _accessoryTintColor;
	UIColor* _accessoryBackgroundColor;

}

@property (assign,nonatomic) long long type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) id<UITableConstants> constants;                  //@synthesize constants=_constants - In the implementation block
@property (nonatomic,retain) UIColor * accessoryTintColor;                    //@synthesize accessoryTintColor=_accessoryTintColor - In the implementation block
@property (nonatomic,retain) UIColor * accessoryBackgroundColor;              //@synthesize accessoryBackgroundColor=_accessoryBackgroundColor - In the implementation block
-(void)_updateImageViewIfNeeded;
-(unsigned long long)_controlEventsForActionTriggered;
-(void)setConstants:(id<UITableConstants>)arg1 ;
-(id)viewForLastBaselineLayout;
-(id)viewForFirstBaselineLayout;
-(void)setType:(long long)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(id<UITableConstants>)constants;
-(UIColor *)accessoryTintColor;
-(void)_setNeedsImageViewUpdate;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)type;
-(id)initWithType:(long long)arg1 constants:(id)arg2 ;
-(void)setAccessoryTintColor:(UIColor *)arg1 ;
-(void)setAccessoryBackgroundColor:(UIColor *)arg1 ;
-(void)addActionHandler:(/*^block*/id)arg1 ;
-(id)_renderedImage;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIColor *)accessoryBackgroundColor;
-(void)setHighlighted:(BOOL)arg1 ;
@end

