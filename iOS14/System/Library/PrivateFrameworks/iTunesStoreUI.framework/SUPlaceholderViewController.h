/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUViewController.h>

@class SUGradient, SULoadingView, SUGradientView;

@interface SUPlaceholderViewController : SUViewController {

	SUGradient* _backgroundGradient;
	SUGradient* _defaultBackgroundGradient;
	BOOL _hideLoadingView;
	SULoadingView* _loadingView;
	SUGradientView* _gradientView;

}

@property (nonatomic,copy) SUGradient * backgroundGradient;                     //@synthesize backgroundGradient=_backgroundGradient - In the implementation block
@property (nonatomic,copy) SUGradient * defaultBackgroundGradient;              //@synthesize defaultBackgroundGradient=_defaultBackgroundGradient - In the implementation block
@property (nonatomic,readonly) SULoadingView * loadingView; 
@property (assign,nonatomic) BOOL shouldShowLoadingView; 
-(id)init;
-(SULoadingView *)loadingView;
-(SUGradient *)backgroundGradient;
-(void)loadView;
-(void)setBackgroundGradient:(SUGradient *)arg1 ;
-(void)dealloc;
-(void)setScriptProperties:(id)arg1 ;
-(void)setSkLoading:(BOOL)arg1 ;
-(void)setDefaultBackgroundGradient:(SUGradient *)arg1 ;
-(id)copyArchivableContext;
-(id)copyDefaultScriptProperties;
-(void)parentViewControllerHierarchyDidChange;
-(void)_bagDidLoadNotification:(id)arg1 ;
-(void)_reloadBackgroundGradient;
-(void)_reloadLoadingView;
-(id)_newURLBagBackgroundGradient;
-(id)_copyActiveGradient;
-(void)setShouldShowLoadingView:(BOOL)arg1 ;
-(BOOL)shouldShowLoadingView;
-(SUGradient *)defaultBackgroundGradient;
@end

