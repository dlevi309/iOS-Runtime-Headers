/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@class PXExtendedTraitCollection, NSString;

@interface PXCuratedLibraryStyleGuide : PXObservable <PXChangeObserver> {

	double _lateralMargin;
	long long _secondaryToolbarPlacement;
	long long _toggleAspectFitButtonPlacement;
	long long _zoomButtonsButtonPlacement;
	PXExtendedTraitCollection* _extendedTraitCollection;
	long long _buttonStyle;
	CGSize _secondaryToolbarSize;
	UIEdgeInsets _secondaryToolbarPadding;
	UIEdgeInsets _secondaryToolbarContentInsets;

}

@property (nonatomic,readonly) PXExtendedTraitCollection * extendedTraitCollection;              //@synthesize extendedTraitCollection=_extendedTraitCollection - In the implementation block
@property (assign,nonatomic) double lateralMargin;                                               //@synthesize lateralMargin=_lateralMargin - In the implementation block
@property (assign,nonatomic) long long buttonStyle;                                              //@synthesize buttonStyle=_buttonStyle - In the implementation block
@property (assign,nonatomic) long long secondaryToolbarPlacement;                                //@synthesize secondaryToolbarPlacement=_secondaryToolbarPlacement - In the implementation block
@property (assign,nonatomic) CGSize secondaryToolbarSize;                                        //@synthesize secondaryToolbarSize=_secondaryToolbarSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets secondaryToolbarContentInsets;                         //@synthesize secondaryToolbarContentInsets=_secondaryToolbarContentInsets - In the implementation block
@property (assign,nonatomic) long long toggleAspectFitButtonPlacement;                           //@synthesize toggleAspectFitButtonPlacement=_toggleAspectFitButtonPlacement - In the implementation block
@property (assign,nonatomic) long long zoomButtonsButtonPlacement;                               //@synthesize zoomButtonsButtonPlacement=_zoomButtonsButtonPlacement - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets secondaryToolbarPadding;                             //@synthesize secondaryToolbarPadding=_secondaryToolbarPadding - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)lateralMargin;
-(void)setLateralMargin:(double)arg1 ;
-(id)initWithExtendedTraitCollection:(id)arg1 ;
-(void)_invalidate;
-(id)init;
-(void)setSecondaryToolbarPlacement:(long long)arg1 ;
-(void)setButtonStyle:(long long)arg1 ;
-(void)setSecondaryToolbarSize:(CGSize)arg1 ;
-(long long)secondaryToolbarPlacement;
-(CGSize)secondaryToolbarSize;
-(long long)toggleAspectFitButtonPlacement;
-(UIEdgeInsets)secondaryToolbarContentInsets;
-(long long)buttonStyle;
-(UIEdgeInsets)secondaryToolbarPadding;
-(void)_update;
-(long long)zoomButtonsButtonPlacement;
-(void)setSecondaryToolbarContentInsets:(UIEdgeInsets)arg1 ;
-(PXExtendedTraitCollection *)extendedTraitCollection;
-(void)setToggleAspectFitButtonPlacement:(long long)arg1 ;
-(void)setZoomButtonsButtonPlacement:(long long)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

