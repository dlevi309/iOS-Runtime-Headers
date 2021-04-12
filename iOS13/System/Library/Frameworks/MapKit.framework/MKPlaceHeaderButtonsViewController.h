/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceSectionViewController.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>
#import <libobjc.A.dylib/MKStackingViewControllerFixedHeightAware.h>
#import <libobjc.A.dylib/MKETAProviderObserver.h>

@protocol _MKPlaceItem, GEOTransitLineItem, MKPlaceHeaderButtonsViewControllerDelegate;
@class MKPlaceSectionRowView, NSArray, MKPlaceHeaderButton, NSAttributedString, NSString, _MKPlaceActionButtonController;

@interface MKPlaceHeaderButtonsViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol, MKStackingViewControllerFixedHeightAware, MKETAProviderObserver> {

	MKPlaceSectionRowView* _buttonsContainerView;
	NSArray* _constraints;
	MKPlaceHeaderButton* _primaryButton;
	MKPlaceHeaderButton* _secondaryButton;
	NSAttributedString* _primaryAttributedString;
	NSString* _currentETAString;
	BOOL _resizableViewsDisabled;
	id<_MKPlaceItem> _placeItem;
	id<GEOTransitLineItem> _lineItem;
	id<MKPlaceHeaderButtonsViewControllerDelegate> _delegate;
	unsigned long long _primaryButtonType;
	_MKPlaceActionButtonController* _secondaryButtonController;

}

@property (nonatomic,retain) id<_MKPlaceItem> placeItem;                                                  //@synthesize placeItem=_placeItem - In the implementation block
@property (nonatomic,retain) id<GEOTransitLineItem> lineItem;                                             //@synthesize lineItem=_lineItem - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlaceHeaderButtonsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long primaryButtonType;                                        //@synthesize primaryButtonType=_primaryButtonType - In the implementation block
@property (nonatomic,retain) _MKPlaceActionButtonController * secondaryButtonController;                  //@synthesize secondaryButtonController=_secondaryButtonController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL resizableViewsDisabled;                                                 //@synthesize resizableViewsDisabled=_resizableViewsDisabled - In the implementation block
-(id)init;
-(id<MKPlaceHeaderButtonsViewControllerDelegate>)delegate;
-(void)setDelegate:(id<MKPlaceHeaderButtonsViewControllerDelegate>)arg1 ;
-(void)_commonInit;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_contentSizeDidChange;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(void)setLineItem:(id<GEOTransitLineItem>)arg1 ;
-(id<GEOTransitLineItem>)lineItem;
-(BOOL)resizableViewsDisabled;
-(void)setResizableViewsDisabled:(BOOL)arg1 ;
-(void)setPlaceItem:(id<_MKPlaceItem>)arg1 ;
-(id<_MKPlaceItem>)placeItem;
-(void)setSecondaryButtonController:(_MKPlaceActionButtonController *)arg1 ;
-(void)setPrimaryButtonType:(unsigned long long)arg1 ;
-(unsigned long long)primaryButtonType;
-(void)ETAProviderUpdated:(id)arg1 ;
-(void)setConstraints;
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
@end

