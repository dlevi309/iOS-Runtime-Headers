/*
* Generated on Thursday, January 14, 2021 at 2:23:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFeed.framework/NewsFeed
*/

#import <NewsFeed/NewsFeed-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString;

@interface NewsFeed.CoverIssueView : UIView {

	 moreActionsButton;
	 followButton;
	 titleLabel;
	 issueCoverView;
	 accessoryLabel;
	 downloadProgressBar;
	 cloudIcon;
	 debugButton;
	 downloadButtonDataProvider;
	 downloadStateDisposable;
	 downloadProgressDisposable;

}

@property (copy,nonatomic) NSString * accessibilityValue; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAccessibilityValue:(NSString *)arg1 ;
-(NSString *)accessibilityValue;
-(id)initWithCoder:(id)arg1 ;
@end

