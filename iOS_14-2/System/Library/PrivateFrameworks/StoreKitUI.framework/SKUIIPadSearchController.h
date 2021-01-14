/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIViewController *)parentViewController;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)dealloc;
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

