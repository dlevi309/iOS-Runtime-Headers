/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)layoutSubviews;
-(long long)positionForBar:(id)arg1 ;
-(void)updateBarTintColor:(id)arg1 ;
-(void)setTopLayoutGuideInset:(double)arg1 ;
-(double)topLayoutGuideInset;
@end

