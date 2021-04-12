/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUILeadingViewController.h>
#import <SearchUI/SearchUIHomeScreenEngagementDelegate.h>

@class SearchUIHomeScreenAppIconView, NSString;

@interface SearchUILeadingHomeScreenViewController : SearchUILeadingViewController <SearchUIHomeScreenEngagementDelegate>

@property (nonatomic,retain) SearchUIHomeScreenAppIconView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsRowModel:(id)arg1 ;
-(unsigned long long)type;
-(void)didEngageResult:(id)arg1 ;
-(id)setupView;
-(void)updateWithRowModel:(id)arg1 ;
-(BOOL)shouldVerticallyCenter;
-(void)dismissIfNecessaryForIconDrag;
@end

