/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UISearchControllerDelegate.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <libobjc.A.dylib/_SFPasswordIconControllerDelegate.h>

@class _SFPasswordIconController, NSCountedSet, UISearchController, _SFPasswordTableConfiguration, NSString;

@interface _SFPasswordTableViewController : UITableViewController <UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating, _SFPasswordIconControllerDelegate> {

	_SFPasswordIconController* _iconController;
	NSCountedSet* _visibleDomains;
	UISearchController* _searchController;
	_SFPasswordTableConfiguration* _configuration;
	NSString* _searchPattern;

}

@property (nonatomic,retain) NSString * searchQuery; 
@property (nonatomic,readonly) NSString * searchPattern;              //@synthesize searchPattern=_searchPattern - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(void)tableView:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)tableView:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2 ;
-(id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(CGPoint)arg3 ;
-(BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(long long)positionForBar:(id)arg1 ;
-(void)_updateIconForDomain:(id)arg1 forCell:(id)arg2 ;
-(void)shareSavedPassword:(id)arg1 modalPresentationSourceView:(id)arg2 ;
-(void)handleContextMenuDeleteForIndexPath:(id)arg1 ;
-(id)_tableView:(id)arg1 previewForIndexPath:(id)arg2 ;
-(void)searchPatternDidUpdate;
-(void)iconDidUpdateForDomain:(id)arg1 iconController:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 siteMetadataManager:(id)arg2 configuration:(id)arg3 ;
-(NSString *)searchPattern;
-(void)willPresentSearchController:(id)arg1 ;
-(void)_sceneDidEnterBackground:(id)arg1 ;
-(NSString *)searchQuery;
-(void)viewDidLoad;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSearchQuery:(NSString *)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willDismissSearchController:(id)arg1 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2 ;
@end

