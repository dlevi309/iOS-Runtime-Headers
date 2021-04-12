/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
*/

#import <FlightUtilities/FlightUtilities-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>
#import <libobjc.A.dylib/FUFlightViewDelegate.h>

@protocol FUFlightViewControllerDelegate;
@class NSDate, FUFlightView, NSArray, NSNumber, NSString;

@interface FUFlightViewController : UIViewController <MKMapViewDelegate, FUFlightViewDelegate> {

	BOOL _loadingFlight;
	NSDate* _startLoadingDate;
	unsigned long long _displayStyle;
	id<FUFlightViewControllerDelegate> _delegate;
	BOOL _requiresDataLoad;
	BOOL _viewLoaded;
	FUFlightView* _regularFlightView;
	FUFlightView* _previewFlightView;
	BOOL _highlightCurrentFlightLeg;
	BOOL _showInfoPanel;
	NSArray* _flights;
	NSNumber* _flightCode;
	NSString* _airlineCode;

}

@property (retain) FUFlightView * regularFlightView;                      //@synthesize regularFlightView=_regularFlightView - In the implementation block
@property (retain) FUFlightView * previewFlightView;                      //@synthesize previewFlightView=_previewFlightView - In the implementation block
@property (retain) NSNumber * flightCode;                                 //@synthesize flightCode=_flightCode - In the implementation block
@property (retain) NSString * airlineCode;                                //@synthesize airlineCode=_airlineCode - In the implementation block
@property (nonatomic,readonly) FUFlightView * flightView; 
@property (nonatomic,retain) NSArray * flights;                           //@synthesize flights=_flights - In the implementation block
@property (assign,nonatomic) long long selectedFlight; 
@property (assign,nonatomic) long long selectedLeg; 
@property (assign,nonatomic) BOOL highlightCurrentFlightLeg;              //@synthesize highlightCurrentFlightLeg=_highlightCurrentFlightLeg - In the implementation block
@property (assign,nonatomic) BOOL showInfoPanel;                          //@synthesize showInfoPanel=_showInfoPanel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)commonInit;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)awakeFromNib;
-(void)setDisplayStyle:(unsigned long long)arg1 ;
-(NSArray *)flights;
-(void)setFlights:(NSArray *)arg1 ;
-(NSNumber *)flightCode;
-(NSString *)airlineCode;
-(void)setFlights:(id)arg1 selectedFlight:(long long)arg2 selectedLeg:(long long)arg3 ;
-(void)setFlightCode:(NSNumber *)arg1 ;
-(void)setAirlineCode:(NSString *)arg1 ;
-(void)loadFlightWithFlightCode:(id)arg1 airlineCode:(id)arg2 date:(id)arg3 ;
-(void)setHighlightCurrentFlightLeg:(BOOL)arg1 ;
-(void)setShowInfoPanel:(BOOL)arg1 ;
-(FUFlightView *)flightView;
-(void)showLoadingView;
-(void)showErrorView;
-(void)showFlightView;
-(void)setSelectedLeg:(long long)arg1 ;
-(void)setSelectedFlight:(long long)arg1 ;
-(long long)selectedLeg;
-(long long)selectedFlight;
-(BOOL)highlightCurrentFlightLeg;
-(BOOL)showInfoPanel;
-(void)showView:(id)arg1 ;
-(void)addFittingView:(id)arg1 ;
-(void)fadeLayer:(id)arg1 visible:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)flightView:(id)arg1 didSelectLeg:(long long)arg2 ofFlight:(long long)arg3 ;
-(id)initWithFlights:(id)arg1 ;
-(id)initWithSFFlights:(id)arg1 ;
-(id)initWithSFFlight:(id)arg1 leg:(long long)arg2 style:(unsigned long long)arg3 delegate:(id)arg4 ;
-(id)initWithFlightCode:(unsigned long long)arg1 airlineCode:(id)arg2 ;
-(void)setNoBackground;
-(void)hideView:(id)arg1 ;
-(FUFlightView *)regularFlightView;
-(void)setRegularFlightView:(FUFlightView *)arg1 ;
-(FUFlightView *)previewFlightView;
-(void)setPreviewFlightView:(FUFlightView *)arg1 ;
@end

