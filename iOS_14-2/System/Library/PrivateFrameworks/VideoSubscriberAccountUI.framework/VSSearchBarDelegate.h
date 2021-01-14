/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UISearchBar *)searchBar;
-(void)setSearchBar:(UISearchBar *)arg1 ;
-(id)init;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
@end

