/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIButton.h>
#import <libobjc.A.dylib/CAMAccessibilityHUDImageProvider.h>

@class NSString;

@interface CAMMessagesPhotosButton : UIButton <CAMAccessibilityHUDImageProvider> {

	long long _orientation;
	UIEdgeInsets _tappableEdgeInsets;

}

@property (assign,nonatomic) UIEdgeInsets tappableEdgeInsets;              //@synthesize tappableEdgeInsets=_tappableEdgeInsets - In the implementation block
@property (assign,nonatomic) long long orientation;                        //@synthesize orientation=_orientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)photosButton;
-(id)imageForAccessibilityHUD;
-(void)setTappableEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)tappableEdgeInsets;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)layoutSubviews;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
@end

