/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CALayer;

@interface AVTShadowView : UIView {

	CALayer* _separator;

}

@property (nonatomic,retain) CALayer * separator;              //@synthesize separator=_separator - In the implementation block
+(double)defaultHeightForSuperview:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CALayer *)separator;
-(void)layoutSubviews;
-(void)setSeparator:(CALayer *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

