/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGSize)intrinsicContentSize;
-(void)tapped:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)linkedApplicationDidChangeState:(id)arg1 ;
-(void)_updateWithIconImage:(id)arg1 animated:(BOOL)arg2 ;
-(PKLinkedApplication *)linkedApplication;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithLinkedApplication:(id)arg1 ;
-(void)dealloc;
@end

