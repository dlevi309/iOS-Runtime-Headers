/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIColor *)disabledTextColor;
-(UIColor *)textColor;
-(void)reloadApplicationStateIfNecessary;
-(void)linkedApplicationDidChangeState:(id)arg1 ;
-(NSArray *)storeIDs;
-(id)initWithStoreIDs:(id)arg1 appLaunchURL:(id)arg2 reuseIdentifier:(id)arg3 ;
-(PKLinkedApplication *)linkedApplication;
-(void)setStoreIDs:(NSArray *)arg1 ;
-(void)setDisabledTextColor:(UIColor *)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(id)initWithLinkedApplication:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)setAppLaunchURL:(NSURL *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)appLaunchURL;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)dealloc;
@end

