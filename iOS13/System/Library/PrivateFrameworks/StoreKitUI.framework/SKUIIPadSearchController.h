/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <libobjc.A.dylib/SKUISearchFieldDelegate.h>

@class SKUISearchFieldController, UIViewController, SKUIClientContext, NSString;

@interface SKUIIPadSearchController : NSObject <SKUISearchFieldDelegate> {

	SKUISearchFieldController* _searchFieldController;
	UIViewController* _parentViewController;
	SKUIClientContext* _clientContext;

}

@property (nonatomic,__weak,readonly) UIViewController * parentViewController;                 //@synthesize parentViewController=_parentViewController - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                                //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) SKUISearchFieldController * searchFieldController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)lastSearchTerm;
+(void)setLastSearchTerm:(id)arg1 ;
-(void)dealloc;
-(UIViewController *)parentViewController;
-(SKUIClientContext *)clientContext;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(id)initWithParentViewController:(id)arg1 ;
-(void)reloadSearchField;
-(id)newSearchFieldBarItem;
-(void)_termDidChangeNotification:(id)arg1 ;
-(id)_searchFieldController;
-(void)setSearchFieldText:(id)arg1 ;
-(void)setNumberOfSearchResults:(long long)arg1 ;
-(void)searchFieldController:(id)arg1 requestSearch:(id)arg2 ;
-(SKUISearchFieldController *)searchFieldController;
-(void)setSearchFieldPlaceholderText:(id)arg1 ;
@end

