/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UINavigationBarDelegate.h>

@class UINavigationBar, UIToolbar, NSString;

@interface SFSafariLaunchPlaceholderView : UIView <UINavigationBarDelegate> {

	UINavigationBar* _topNavigationBar;
	UIToolbar* _bottomToolbar;
	double _topLayoutGuideInset;

}

@property (assign,nonatomic) double topLayoutGuideInset;              //@synthesize topLayoutGuideInset=_topLayoutGuideInset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)positionForBar:(id)arg1 ;
-(double)topLayoutGuideInset;
-(void)layoutSubviews;
-(void)updateBarTintColor:(id)arg1 ;
-(void)setTopLayoutGuideInset:(double)arg1 ;
@end

