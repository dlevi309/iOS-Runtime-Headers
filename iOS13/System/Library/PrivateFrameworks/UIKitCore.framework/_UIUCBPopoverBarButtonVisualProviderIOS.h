/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)updateButton:(id)arg1 forSelectedState:(BOOL)arg2 ;
-(void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3 ;
-(void)setSelectionBackgroundTintColor:(UIColor *)arg1 ;
-(void)setSelectionTintColor:(UIColor *)arg1 ;
-(UIColor *)selectionBackgroundTintColor;
-(UIColor *)selectionTintColor;
@end

