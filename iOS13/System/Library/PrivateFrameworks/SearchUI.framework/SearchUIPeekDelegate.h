/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <UIKit/UIContextMenuInteractionDelegate.h>

@class SearchUITableViewController, NSString;

@interface SearchUIPeekDelegate : NSObject <UIContextMenuInteractionDelegate> {

	SearchUITableViewController* _viewController;

}

@property (assign,nonatomic,__weak) SearchUITableViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setViewController:(SearchUITableViewController *)arg1 ;
-(SearchUITableViewController *)viewController;
-(id)initWithViewController:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2 ;
-(id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2 ;
-(void)contextMenuInteractionWillPresent:(id)arg1 ;
-(void)contextMenuInteractionDidEnd:(id)arg1 ;
-(void)contextMenuInteraction:(id)arg1 willCommitWithAnimator:(id)arg2 ;
@end

