/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UINavigationBar.h>

@class UILabel;

@interface PKPaymentAuthorizationNavigationBar : UINavigationBar {

	UILabel* _environmentLabel;

}
+(id)applePayBarButtonItem;
+(id)cardOnFileBarButtonItemForRequestor:(unsigned long long)arg1 ;
+(id)_leftBarButtonItemWithImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)didUpdateInterfaceStyle;
@end

