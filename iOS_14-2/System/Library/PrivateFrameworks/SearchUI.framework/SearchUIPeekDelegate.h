/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <UIKit/UIContextMenuInteractionDelegate.h>

@class SearchUITableViewController, SearchUIPeekCommand, NSString;

@interface SearchUIPeekDelegate : NSObject <UIContextMenuInteractionDelegate> {

	SearchUITableViewController* _viewController;
	SearchUIPeekCommand* _peekCommand;

}

@property (assign,nonatomic,__weak) SearchUITableViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) SearchUIPeekCommand * peekCommand;                                //@synthesize peekCommand=_peekCommand - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(void)setViewController:(SearchUITableViewController *)arg1 ;
-(id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3 ;
-(void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3 ;
-(id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2 ;
-(id)initWithViewController:(id)arg1 ;
-(void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3 ;
-(SearchUITableViewController *)viewController;
-(SearchUIPeekCommand *)peekCommand;
-(void)setPeekCommand:(SearchUIPeekCommand *)arg1 ;
@end

