/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/

#import <VideoSubscriberAccountUI/VideoSubscriberAccountUI-Structs.h>
#import <UIKit/UISearchBarDelegate.h>

@class UISearchBar, NSString;

@interface VSSearchBarDelegate : NSObject <UISearchBarDelegate> {

	UISearchBar* _searchBar;
	NSString* _text;

}

@property (nonatomic,copy) NSString * text;                         //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UISearchBar * searchBar;               //@synthesize searchBar=_searchBar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UISearchBar *)searchBar;
-(void)setSearchBar:(UISearchBar *)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
@end

