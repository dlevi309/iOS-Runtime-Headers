/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSObject*<SLMicroBlogMentionsDelegate>)delegate;
-(void)setDelegate:(NSObject*<SLMicroBlogMentionsDelegate>)arg1 ;
-(void)loadView;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setSearchString:(id)arg1 ;
-(id)initWithSheetDelegate:(id)arg1 ;
-(void)updateMentions;
-(void)setMentions:(id)arg1 ;
-(id)mentions;
-(void)completeWithSelectedMention:(id)arg1 ;
-(void)chooseRow:(long long)arg1 ;
@end

