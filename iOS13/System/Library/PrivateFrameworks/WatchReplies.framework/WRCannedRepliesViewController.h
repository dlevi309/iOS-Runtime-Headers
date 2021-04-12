/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchReplies.framework/WatchReplies
*/

#import <Preferences/PSListController.h>

@class WRCannedRepliesStore, PSSpecifier, UIImage;

@interface WRCannedRepliesViewController : PSListController {

	WRCannedRepliesStore* _repliesStore;
	PSSpecifier* _addNewSpecifier;
	PSSpecifier* _smartRepliesSpecifier;
	UIImage* _accessoryImage;
	UIImage* _highlightedAccessoryImage;
	BOOL _supportedEnhancedEditing;
	unsigned long long _category;

}

@property (nonatomic,readonly) unsigned long long category;              //@synthesize category=_category - In the implementation block
-(unsigned long long)category;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
-(void)_returnKeyPressed:(id)arg1 ;
-(void)returnPressedAtEnd;
-(id)cannedReplies;
-(void)updateEditDoneButton;
-(void)saveReplies;
-(void)setIncludeSmartReplies:(id)arg1 specifier:(id)arg2 ;
-(id)includeSmartReplies;
-(id)newCannedReplySpecifier;
-(void)addNewReply:(id)arg1 ;
-(void)configureCellAccessoryImage:(id)arg1 ;
-(void)setCustomReply:(id)arg1 specifier:(id)arg2 ;
-(id)customReply:(id)arg1 ;
-(void)loadRepliesStoreIfNeeded;
-(id)cannedRepliesFromSpecifiers;
-(unsigned long long)numberOfDefaultReplySpecifiers;
@end

