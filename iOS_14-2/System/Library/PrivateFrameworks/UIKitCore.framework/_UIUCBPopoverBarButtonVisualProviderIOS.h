/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIUCBBarButtonVisualProviderIOS.h>

@class UIView, UIColor;

@interface _UIUCBPopoverBarButtonVisualProviderIOS : _UIUCBBarButtonVisualProviderIOS {

	UIView* _selectionBackgroundView;
	UIColor* _selectionBackgroundTintColor;
	UIColor* _selectionTintColor;

}

@property (nonatomic,retain) UIColor * selectionBackgroundTintColor;              //@synthesize selectionBackgroundTintColor=_selectionBackgroundTintColor - In the implementation block
@property (nonatomic,retain) UIColor * selectionTintColor;                        //@synthesize selectionTintColor=_selectionTintColor - In the implementation block
-(void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3 ;
-(id)init;
-(void)setSelectionTintColor:(UIColor *)arg1 ;
-(void)setSelectionBackgroundTintColor:(UIColor *)arg1 ;
-(unsigned long long)hash;
-(UIColor *)selectionTintColor;
-(void)updateButton:(id)arg1 forSelectedState:(BOOL)arg2 ;
-(UIColor *)selectionBackgroundTintColor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

