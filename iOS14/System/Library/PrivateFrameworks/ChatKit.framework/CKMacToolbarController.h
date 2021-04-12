/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CKMacToolbarViewDelegate.h>

@protocol CKMacToolbarItemProvider;
@class NSString, UIWindowScene, NSMutableDictionary, UIVisualEffectView, UIView;

@interface CKMacToolbarController : UIViewController <CKMacToolbarViewDelegate> {

	BOOL _shouldDrawPrimaryBlur;
	BOOL _shouldDrawSecondaryBlur;
	BOOL _isInStandaloneWindow;
	NSString* _sceneSessionIdentifier;
	id<CKMacToolbarItemProvider> _primaryItemProvider;
	id<CKMacToolbarItemProvider> _secondaryItemProvider;
	double _splitViewDividerXPosition;
	UIWindowScene* _windowScene;
	NSMutableDictionary* _toolbarItemCache;
	UIVisualEffectView* _primaryVirtualBackgroundView;
	UIVisualEffectView* _secondaryVirtualBackgroundView;
	double _preferredPrimaryHeight;
	double _preferredSecondaryHeight;
	UIView* _primaryProvidedVirtualView;
	UIView* _secondaryProvidedVirtualView;

}

@property (nonatomic,__weak,readonly) UIWindowScene * windowScene;                               //@synthesize windowScene=_windowScene - In the implementation block
@property (assign,nonatomic) BOOL isInStandaloneWindow;                                          //@synthesize isInStandaloneWindow=_isInStandaloneWindow - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * toolbarItemCache;                             //@synthesize toolbarItemCache=_toolbarItemCache - In the implementation block
@property (nonatomic,readonly) UIVisualEffectView * primaryVirtualBackgroundView;                //@synthesize primaryVirtualBackgroundView=_primaryVirtualBackgroundView - In the implementation block
@property (nonatomic,readonly) UIVisualEffectView * secondaryVirtualBackgroundView;              //@synthesize secondaryVirtualBackgroundView=_secondaryVirtualBackgroundView - In the implementation block
@property (assign,nonatomic) double preferredPrimaryHeight;                                      //@synthesize preferredPrimaryHeight=_preferredPrimaryHeight - In the implementation block
@property (assign,nonatomic) double preferredSecondaryHeight;                                    //@synthesize preferredSecondaryHeight=_preferredSecondaryHeight - In the implementation block
@property (assign,nonatomic,__weak) UIView * primaryProvidedVirtualView;                         //@synthesize primaryProvidedVirtualView=_primaryProvidedVirtualView - In the implementation block
@property (assign,nonatomic,__weak) UIView * secondaryProvidedVirtualView;                       //@synthesize secondaryProvidedVirtualView=_secondaryProvidedVirtualView - In the implementation block
@property (nonatomic,__weak,readonly) NSString * sceneSessionIdentifier;                         //@synthesize sceneSessionIdentifier=_sceneSessionIdentifier - In the implementation block
@property (nonatomic,retain) id<CKMacToolbarItemProvider> primaryItemProvider;                   //@synthesize primaryItemProvider=_primaryItemProvider - In the implementation block
@property (nonatomic,retain) id<CKMacToolbarItemProvider> secondaryItemProvider;                 //@synthesize secondaryItemProvider=_secondaryItemProvider - In the implementation block
@property (assign,nonatomic) double splitViewDividerXPosition;                                   //@synthesize splitViewDividerXPosition=_splitViewDividerXPosition - In the implementation block
@property (assign,nonatomic) BOOL shouldDrawPrimaryBlur;                                         //@synthesize shouldDrawPrimaryBlur=_shouldDrawPrimaryBlur - In the implementation block
@property (assign,nonatomic) BOOL shouldDrawSecondaryBlur;                                       //@synthesize shouldDrawSecondaryBlur=_shouldDrawSecondaryBlur - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIWindowScene *)windowScene;
-(void)viewWillLayoutSubviews;
-(void)updateWithFrame:(CGRect)arg1 ;
-(void)updateVirtualViewForProvider:(id)arg1 ;
-(void)removeItemProviders;
-(void)reloadToolbarItems;
-(void)setShouldDrawSecondaryBlur:(BOOL)arg1 ;
-(void)removeItemProvider:(id)arg1 ;
-(void)setSecondaryItemProvider:(id<CKMacToolbarItemProvider>)arg1 ;
-(double)preferredPrimaryHeight;
-(void)_updateBackgroundViewsRefreshingViewHeights:(BOOL)arg1 ;
-(void)_updateVirtualViewForProviderType:(long long)arg1 ;
-(id)_providerForType:(long long)arg1 ;
-(BOOL)_updateFrameWithPreferredHeightsForFrame:(CGRect)arg1 ;
-(double)preferredSecondaryHeight;
-(double)splitViewDividerXPosition;
-(BOOL)shouldDrawPrimaryBlur;
-(BOOL)shouldDrawSecondaryBlur;
-(double)_getPreferredHeightForProviderType:(long long)arg1 withDefaultHeight:(double)arg2 ;
-(void)setPreferredPrimaryHeight:(double)arg1 ;
-(void)setPreferredSecondaryHeight:(double)arg1 ;
-(BOOL)reparentToolbarItemsForProvider:(id)arg1 ;
-(id<CKMacToolbarItemProvider>)primaryItemProvider;
-(UIView *)primaryProvidedVirtualView;
-(id<CKMacToolbarItemProvider>)secondaryItemProvider;
-(UIView *)secondaryProvidedVirtualView;
-(UIVisualEffectView *)primaryVirtualBackgroundView;
-(id)_cachedVirtualViewForProviderType:(long long)arg1 ;
-(void)_setVirtualView:(id)arg1 forProviderType:(long long)arg2 ;
-(id)_virtualBackgroundViewForProviderType:(long long)arg1 ;
-(UIVisualEffectView *)secondaryVirtualBackgroundView;
-(void)setPrimaryProvidedVirtualView:(UIView *)arg1 ;
-(void)setSecondaryProvidedVirtualView:(UIView *)arg1 ;
-(long long)_providerTypeForPointInsideVirtualView:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_shouldDisAllowTouchesToPassForProviderType:(long long)arg1 ;
-(BOOL)macToolbarView:(id)arg1 shouldAllowTouchesForPoint:(CGPoint)arg2 andEvent:(id)arg3 ;
-(void)setShouldDrawPrimaryBlur:(BOOL)arg1 ;
-(void)setSplitViewDividerXPosition:(double)arg1 ;
-(void)removeToolbarItems;
-(void)removeVirtualViewForProvider:(id)arg1 ;
-(long long)_providerTypeForItemIdentifier:(id)arg1 ;
-(NSString *)sceneSessionIdentifier;
-(BOOL)isInStandaloneWindow;
-(void)setIsInStandaloneWindow:(BOOL)arg1 ;
-(NSMutableDictionary *)toolbarItemCache;
-(void)setToolbarItemCache:(NSMutableDictionary *)arg1 ;
-(id)initWithScene:(id)arg1 connectingToSession:(id)arg2 inStandaloneWindow:(BOOL)arg3 ;
-(void)loadView;
-(void)setPrimaryItemProvider:(id<CKMacToolbarItemProvider>)arg1 ;
@end

