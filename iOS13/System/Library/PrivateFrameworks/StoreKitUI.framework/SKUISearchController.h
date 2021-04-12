/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UISearchController.h>

@class UILabel, NSMutableString, SKUISearchBar;

@interface SKUISearchController : UISearchController {

	UILabel* _suffixLabel;
	NSMutableString* _paddingString;
	SKUISearchBar* _searchBar;

}

@property (nonatomic,readonly) SKUISearchBar * searchBar; 
@property (assign,nonatomic,__weak) id<SKUISearchControllerDelegate> delegate; 
-(void)setActive:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(SKUISearchBar *)searchBar;
-(void)_setSuffix:(id)arg1 ;
@end

