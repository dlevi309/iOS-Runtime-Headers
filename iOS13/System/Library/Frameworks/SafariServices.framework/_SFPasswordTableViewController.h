/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <libobjc.A.dylib/_SFPasswordIconControllerDelegate.h>

@class _SFPasswordIconController, NSCountedSet, UISearchController, _SFPasswordTableConfiguration, NSString;

@interface _SFPasswordTableViewController : UITableViewController <UISearchBarDelegate, UISearchResultsUpdating, _SFPasswordIconControllerDelegate> {

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
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)positionForBar:(id)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(CGPoint)arg3 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(NSString *)searchQuery;
-(void)setSearchQuery:(NSString *)arg1 ;
-(void)_updateIconForDomain:(id)arg1 forCell:(id)arg2 ;
-(void)shareSavedPassword:(id)arg1 modalPresentationSourceView:(id)arg2 ;
-(void)handleContextMenuDeleteForIndexPath:(id)arg1 ;
-(void)searchPatternDidUpdate;
-(void)iconDidUpdateForDomain:(id)arg1 iconController:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 siteMetadataManager:(id)arg2 configuration:(id)arg3 ;
-(NSString *)searchPattern;
@end

