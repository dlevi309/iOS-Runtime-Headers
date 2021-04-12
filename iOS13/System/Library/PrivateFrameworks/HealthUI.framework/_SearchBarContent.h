/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIStackView.h>
#import <UIKit/UISearchBarDelegate.h>

@protocol HKIncrementalSearchBarDelegate;
@class HKIncrementalSearchBar, HKBarButtonItemControl, _SearchEntryWithMatchDisplay, NSString;

@interface _SearchBarContent : UIStackView <UISearchBarDelegate> {

	id<HKIncrementalSearchBarDelegate> _searchBarDelegate;
	HKIncrementalSearchBar* _searchBar;
	HKBarButtonItemControl* _upBarButton;
	HKBarButtonItemControl* _downBarButton;
	HKBarButtonItemControl* _doneBarButton;
	_SearchEntryWithMatchDisplay* _searchEntry;

}

@property (assign,nonatomic,__weak) id<HKIncrementalSearchBarDelegate> searchBarDelegate;              //@synthesize searchBarDelegate=_searchBarDelegate - In the implementation block
@property (nonatomic,__weak,readonly) HKIncrementalSearchBar * searchBar;                              //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,readonly) HKBarButtonItemControl * upBarButton;                                   //@synthesize upBarButton=_upBarButton - In the implementation block
@property (nonatomic,readonly) HKBarButtonItemControl * downBarButton;                                 //@synthesize downBarButton=_downBarButton - In the implementation block
@property (nonatomic,readonly) HKBarButtonItemControl * doneBarButton;                                 //@synthesize doneBarButton=_doneBarButton - In the implementation block
@property (nonatomic,readonly) _SearchEntryWithMatchDisplay * searchEntry;                             //@synthesize searchEntry=_searchEntry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HKIncrementalSearchBar *)searchBar;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(_SearchEntryWithMatchDisplay *)searchEntry;
-(id)inputField;
-(id)initWithSearchBar:(id)arg1 ;
-(void)setSearchBarDelegate:(id<HKIncrementalSearchBarDelegate>)arg1 ;
-(id<HKIncrementalSearchBarDelegate>)searchBarDelegate;
-(HKBarButtonItemControl *)upBarButton;
-(HKBarButtonItemControl *)downBarButton;
-(void)buildSearchBarContent;
-(void)upAction:(id)arg1 ;
-(void)downAction:(id)arg1 ;
-(HKBarButtonItemControl *)doneBarButton;
@end

