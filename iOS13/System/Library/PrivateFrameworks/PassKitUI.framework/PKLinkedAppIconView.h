/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKLinkedApplicationObserver.h>

@class WLEasyToHitCustomButton, UIImage, PKLinkedApplication, NSString;

@interface PKLinkedAppIconView : UIView <PKLinkedApplicationObserver> {

	WLEasyToHitCustomButton* _iconButton;
	UIImage* _iconImage;
	PKLinkedApplication* _linkedApplication;

}

@property (nonatomic,readonly) PKLinkedApplication * linkedApplication;              //@synthesize linkedApplication=_linkedApplication - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didMoveToWindow;
-(void)tapped:(id)arg1 ;
-(id)initWithLinkedApplication:(id)arg1 ;
-(void)linkedApplicationDidChangeState:(id)arg1 ;
-(PKLinkedApplication *)linkedApplication;
-(void)_updateWithIconImage:(id)arg1 animated:(BOOL)arg2 ;
@end

