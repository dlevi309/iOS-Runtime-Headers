/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/ICQPageDelegate.h>

@protocol ICQPageDelegate;
@class _ICQPageSpecification, UIColor, NSString;

@interface ICQViewController : UIViewController <ICQPageDelegate> {

	_ICQPageSpecification* _pageSpecification;
	UIColor* _buttonTintColor;
	id<ICQPageDelegate> _pageDelegate;

}

@property (nonatomic,readonly) _ICQPageSpecification * pageSpecification;              //@synthesize pageSpecification=_pageSpecification - In the implementation block
@property (nonatomic,copy) UIColor * buttonTintColor;                                  //@synthesize buttonTintColor=_buttonTintColor - In the implementation block
@property (assign,nonatomic,__weak) id<ICQPageDelegate> pageDelegate;                  //@synthesize pageDelegate=_pageDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)viewControllerClassForPageClassIdentifier:(id)arg1 ;
+(BOOL)supportsPageClassIdentifier:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setButtonTintColor:(UIColor *)arg1 ;
-(UIColor *)buttonTintColor;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithPageSpecification:(id)arg1 ;
-(void)sender:(id)arg1 action:(long long)arg2 parameters:(id)arg3 ;
-(void)setPageDelegate:(id<ICQPageDelegate>)arg1 ;
-(id<ICQPageDelegate>)pageDelegate;
-(_ICQPageSpecification *)pageSpecification;
@end
