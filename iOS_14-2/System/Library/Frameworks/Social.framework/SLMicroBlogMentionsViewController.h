/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol SLMicroBlogSheetDelegate, SLMicroBlogMentionsDelegate;
@class NSObject, NSArray, NSString, UITableView;

@interface SLMicroBlogMentionsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	NSObject*<SLMicroBlogSheetDelegate> _sheetDelegate;
	NSArray* _mentions;
	NSString* _searchString;
	UITableView* _tableView;
	NSObject*<SLMicroBlogMentionsDelegate> _delegate;

}

@property (assign,nonatomic,__weak) NSObject*<SLMicroBlogMentionsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_blankSurrogateProfileImage;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(NSObject*<SLMicroBlogMentionsDelegate>)delegate;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDelegate:(NSObject*<SLMicroBlogMentionsDelegate>)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(void)setSearchString:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithSheetDelegate:(id)arg1 ;
-(void)updateMentions;
-(void)setMentions:(id)arg1 ;
-(id)mentions;
-(void)completeWithSelectedMention:(id)arg1 ;
-(void)chooseRow:(long long)arg1 ;
@end

