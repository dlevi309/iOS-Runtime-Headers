/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)updateWithRowModel:(id)arg1 ;
-(id)setupView;
-(void)didEngageResult:(id)arg1 ;
-(unsigned long long)type;
-(BOOL)shouldVerticallyCenter;
-(void)didEngageResult:(id)arg1 withTriggerEvent:(unsigned long long)arg2 destination:(unsigned long long)arg3 ;
@end

