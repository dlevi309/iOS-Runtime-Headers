/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@class UIView, PXCuratedLibraryViewModel, PXUpdater, PXCuratedLibraryStyleGuide, NSString;

@interface PXCuratedLibrarySecondaryToolbarController : NSObject <PXChangeObserver> {

	BOOL _willUpdate;
	BOOL _isAtTop;
	BOOL _stretched;
	UIView* _containerView;
	PXCuratedLibraryViewModel* _viewModel;
	UIView* _contentView;
	PXUpdater* _updater;
	PXCuratedLibraryStyleGuide* _styleGuide;
	UIView* _secondaryToolbar;
	double _height;
	UIEdgeInsets _padding;

}

@property (nonatomic,readonly) PXUpdater * updater;                                         //@synthesize updater=_updater - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryStyleGuide * styleGuide;                     //@synthesize styleGuide=_styleGuide - In the implementation block
@property (nonatomic,readonly) UIView * secondaryToolbar;                                   //@synthesize secondaryToolbar=_secondaryToolbar - In the implementation block
@property (assign,nonatomic) BOOL isAtTop;                                                  //@synthesize isAtTop=_isAtTop - In the implementation block
@property (assign,nonatomic) BOOL stretched;                                                //@synthesize stretched=_stretched - In the implementation block
@property (assign,nonatomic) double height;                                                 //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                                          //@synthesize padding=_padding - In the implementation block
@property (nonatomic,readonly) UIView * containerView;                                      //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryViewModel * viewModel;                       //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                          //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets containerViewAdditionalEdgeInsets; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setHeight:(double)arg1 ;
-(id)init;
-(void)_updatePositioning;
-(void)_invalidatePositioning;
-(UIEdgeInsets)containerViewAdditionalEdgeInsets;
-(void)_updateSecondaryToolbarLayout;
-(PXCuratedLibraryViewModel *)viewModel;
-(double)height;
-(PXCuratedLibraryStyleGuide *)styleGuide;
-(BOOL)isAtTop;
-(void)updateIfNeeded;
-(PXUpdater *)updater;
-(UIView *)containerView;
-(UIView *)secondaryToolbar;
-(BOOL)stretched;
-(void)_invalidateContentLayout;
-(void)setContentView:(UIView *)arg1 ;
-(id)initWithContainerView:(id)arg1 viewModel:(id)arg2 ;
-(void)setStretched:(BOOL)arg1 ;
-(void)_invalidateSecondaryToolbarLayout;
-(UIEdgeInsets)padding;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(void)_updateContentLayout;
-(void)_setNeedsUpdate;
-(UIView *)contentView;
-(void)setIsAtTop:(BOOL)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

