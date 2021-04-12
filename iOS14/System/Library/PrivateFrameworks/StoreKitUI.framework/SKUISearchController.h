/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(SKUISearchBar *)searchBar;
-(void)setActive:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_setSuffix:(id)arg1 ;
@end

