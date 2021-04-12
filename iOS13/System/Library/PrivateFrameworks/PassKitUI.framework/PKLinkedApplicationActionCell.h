/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKTableViewCell.h>
#import <libobjc.A.dylib/PKLinkedApplicationObserver.h>

@class UIActivityIndicatorView, UIColor, PKLinkedApplication, NSArray, NSURL, NSString;

@interface PKLinkedApplicationActionCell : PKTableViewCell <PKLinkedApplicationObserver> {

	UIActivityIndicatorView* _activityIndicator;
	UIColor* _textColor;
	UIColor* _disabledTextColor;
	PKLinkedApplication* _linkedApplication;

}

@property (nonatomic,copy) UIColor * textColor;                                      //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,copy) UIColor * disabledTextColor;                              //@synthesize disabledTextColor=_disabledTextColor - In the implementation block
@property (nonatomic,readonly) PKLinkedApplication * linkedApplication;              //@synthesize linkedApplication=_linkedApplication - In the implementation block
@property (nonatomic,copy) NSArray * storeIDs; 
@property (nonatomic,copy) NSURL * appLaunchURL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(UIColor *)textColor;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIColor *)disabledTextColor;
-(void)setDisabledTextColor:(UIColor *)arg1 ;
-(NSArray *)storeIDs;
-(void)setStoreIDs:(NSArray *)arg1 ;
-(NSURL *)appLaunchURL;
-(void)setAppLaunchURL:(NSURL *)arg1 ;
-(void)linkedApplicationDidChangeState:(id)arg1 ;
-(void)reloadApplicationStateIfNecessary;
-(id)initWithStoreIDs:(id)arg1 appLaunchURL:(id)arg2 reuseIdentifier:(id)arg3 ;
-(PKLinkedApplication *)linkedApplication;
-(id)initWithLinkedApplication:(id)arg1 reuseIdentifier:(id)arg2 ;
@end

