/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
*/

#import <SpotlightUIInternal/SpotlightUIInternal-Structs.h>
#import <UIKitCore/UINavigationController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/SPUISearchViewControllerSizingDelegate.h>
#import <libobjc.A.dylib/SearchUICardViewDelegate.h>

@protocol SPUINavigationControllerDelegate;
@class SPUISearchViewController, SPUINavigationBar, NSString;

@interface SPUINavigationController : UINavigationController <UINavigationControllerDelegate, SPUISearchViewControllerSizingDelegate, SearchUICardViewDelegate> {

	double _contentHeight;
	long long _navigationMode;
	id<SPUINavigationControllerDelegate> _sizingDelegate;
	SPUISearchViewController* _searchViewController;

}

@property (retain) SPUISearchViewController * searchViewController;                                   //@synthesize searchViewController=_searchViewController - In the implementation block
@property (nonatomic,readonly) SPUINavigationBar * navigationBar; 
@property (readonly) double contentHeight;                                                            //@synthesize contentHeight=_contentHeight - In the implementation block
@property (assign,nonatomic) long long navigationMode;                                                //@synthesize navigationMode=_navigationMode - In the implementation block
@property (assign,nonatomic) BOOL shouldShowKeyboardInputBars; 
@property (assign,nonatomic,__weak) id<SPUINavigationControllerDelegate> sizingDelegate;              //@synthesize sizingDelegate=_sizingDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SPUISearchViewController *)searchViewController;
-(void)setSearchViewController:(SPUISearchViewController *)arg1 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id<SPUINavigationControllerDelegate>)sizingDelegate;
-(id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2 ;
-(id)init;
-(void)setNavigationMode:(long long)arg1 ;
-(void)setContentHeight:(double)arg1 animated:(BOOL)arg2 ;
-(long long)navigationMode;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(double)heightOfNavigationBar;
-(id)initWithSearchViewController:(id)arg1 ;
-(id)initWithRootViewController:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)shouldShowKeyboardInputBars;
-(void)setSizingDelegate:(id<SPUINavigationControllerDelegate>)arg1 ;
-(long long)preferredUserInterfaceStyle;
-(void)cardViewController:(id)arg1 preferredContentSizeDidChange:(CGSize)arg2 animated:(BOOL)arg3 ;
-(double)contentHeightIncludingSearchView;
-(void)didInvalidateSizeAnimated:(BOOL)arg1 ;
-(void)setShouldShowKeyboardInputBars:(BOOL)arg1 ;
-(double)contentHeightIncludingCardViewController;
-(void)applyCardHeightAnimated:(BOOL)arg1 ;
-(double)contentHeight;
@end

