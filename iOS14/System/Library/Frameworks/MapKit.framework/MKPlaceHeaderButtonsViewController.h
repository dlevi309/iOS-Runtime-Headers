/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceSectionViewController.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>
#import <libobjc.A.dylib/MKStackingViewControllerFixedHeightAware.h>
#import <libobjc.A.dylib/MKETAProviderObserver.h>

@protocol _MKPlaceActionControlledButton, _MKPlaceItem, GEOTransitLineItem, MKPlaceHeaderButtonsViewControllerDelegate;
@class MKPlaceSectionRowView, NSArray, UIButton, NSMutableAttributedString, _MKPlaceActionButtonController, NSString;

@interface MKPlaceHeaderButtonsViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol, MKStackingViewControllerFixedHeightAware, MKETAProviderObserver> {

	MKPlaceSectionRowView* _buttonsContainerView;
	NSArray* _constraints;
	UIButton*<_MKPlaceActionControlledButton> _primaryButton;
	UIButton*<_MKPlaceActionControlledButton> _alternatePrimaryButton;
	UIButton*<_MKPlaceActionControlledButton> _secondaryButton;
	NSMutableAttributedString* _currentETAString;
	BOOL _resizableViewsDisabled;
	id<_MKPlaceItem> _placeItem;
	id<GEOTransitLineItem> _lineItem;
	id<MKPlaceHeaderButtonsViewControllerDelegate> _delegate;
	unsigned long long _primaryButtonType;
	_MKPlaceActionButtonController* _alternatePrimaryButtonController;
	_MKPlaceActionButtonController* _secondaryButtonController;

}

@property (nonatomic,retain) id<_MKPlaceItem> placeItem;                                                     //@synthesize placeItem=_placeItem - In the implementation block
@property (nonatomic,retain) id<GEOTransitLineItem> lineItem;                                                //@synthesize lineItem=_lineItem - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlaceHeaderButtonsViewControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long primaryButtonType;                                           //@synthesize primaryButtonType=_primaryButtonType - In the implementation block
@property (nonatomic,retain) _MKPlaceActionButtonController * alternatePrimaryButtonController;              //@synthesize alternatePrimaryButtonController=_alternatePrimaryButtonController - In the implementation block
@property (nonatomic,retain) _MKPlaceActionButtonController * secondaryButtonController;                     //@synthesize secondaryButtonController=_secondaryButtonController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL resizableViewsDisabled;                                                    //@synthesize resizableViewsDisabled=_resizableViewsDisabled - In the implementation block
-(void)setSecondaryButtonController:(_MKPlaceActionButtonController *)arg1 ;
-(void)setPrimaryButtonType:(unsigned long long)arg1 ;
-(id)init;
-(id<MKPlaceHeaderButtonsViewControllerDelegate>)delegate;
-(BOOL)resizableViewsDisabled;
-(void)setResizableViewsDisabled:(BOOL)arg1 ;
-(void)setupPrimaryButton;
-(id)updateButton:(id)arg1 withController:(id)arg2 ;
-(id)directionAttributedStringWithETAString;
-(id)rerouteAttributedString;
-(id)attributedStringWith:(id)arg1 ;
-(id)etaStringFor:(unsigned long long)arg1 travelTime:(double)arg2 ;
-(BOOL)shouldStackForButtons:(id)arg1 ;
-(void)primaryButtonSelected:(id)arg1 ;
-(id)primaryAttributedString;
-(_MKPlaceActionButtonController *)secondaryButtonController;
-(_MKPlaceActionButtonController *)alternatePrimaryButtonController;
-(void)setAlternatePrimaryButtonController:(_MKPlaceActionButtonController *)arg1 ;
-(void)setDelegate:(id<MKPlaceHeaderButtonsViewControllerDelegate>)arg1 ;
-(unsigned long long)primaryButtonType;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)ETAProviderUpdated:(id)arg1 ;
-(id<GEOTransitLineItem>)lineItem;
-(void)_commonInit;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_contentSizeDidChange;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(void)setLineItem:(id<GEOTransitLineItem>)arg1 ;
-(void)setConstraints;
-(id<_MKPlaceItem>)placeItem;
-(void)setPlaceItem:(id<_MKPlaceItem>)arg1 ;
@end

