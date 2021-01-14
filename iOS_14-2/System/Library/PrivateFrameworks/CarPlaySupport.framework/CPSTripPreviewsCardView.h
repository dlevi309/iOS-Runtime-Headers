/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CPSLinearFocusProviding.h>

@protocol CPSTripInitiating;
@class NSArray, CPTripPreviewTextConfiguration, CPTrip, CPRouteChoice, CPSCardPlatterView, UIButton, NSString;

@interface CPSTripPreviewsCardView : UIView <CPSLinearFocusProviding> {

	NSArray* _trips;
	CPTripPreviewTextConfiguration* _textConfiguration;
	CPTrip* _selectedTrip;
	CPRouteChoice* _selectedRouteChoice;
	CPSCardPlatterView* _platterView;
	id<CPSTripInitiating> _tripDelegate;
	UIButton* _goButton;

}

@property (nonatomic,retain) CPTripPreviewTextConfiguration * textConfiguration;              //@synthesize textConfiguration=_textConfiguration - In the implementation block
@property (assign,nonatomic,__weak) CPTrip * selectedTrip;                                    //@synthesize selectedTrip=_selectedTrip - In the implementation block
@property (assign,nonatomic,__weak) CPRouteChoice * selectedRouteChoice;                      //@synthesize selectedRouteChoice=_selectedRouteChoice - In the implementation block
@property (nonatomic,readonly) CPSCardPlatterView * platterView;                              //@synthesize platterView=_platterView - In the implementation block
@property (nonatomic,__weak,readonly) id<CPSTripInitiating> tripDelegate;                     //@synthesize tripDelegate=_tripDelegate - In the implementation block
@property (nonatomic,readonly) UIButton * goButton;                                           //@synthesize goButton=_goButton - In the implementation block
@property (nonatomic,copy,readonly) NSArray * trips;                                          //@synthesize trips=_trips - In the implementation block
@property (nonatomic,readonly) BOOL useRightHandDriveFocusGuide; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)trips;
-(CPSCardPlatterView *)platterView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)_linearFocusItems;
-(void)_updateButtonColors;
-(UIButton *)goButton;
-(void)startTripButtonPressed:(id)arg1 ;
-(void)setSelectedRouteChoice:(CPRouteChoice *)arg1 ;
-(void)notifyDidSelectRouteChoice:(id)arg1 ;
-(CPTrip *)selectedTrip;
-(CPRouteChoice *)selectedRouteChoice;
-(id<CPSTripInitiating>)tripDelegate;
-(id)initWithTripDelegate:(id)arg1 trips:(id)arg2 textConfiguration:(id)arg3 ;
-(id)setupGoButton;
-(void)setSelectedTrip:(CPTrip *)arg1 ;
-(void)updateEstimates:(id)arg1 forTripIdentifier:(id)arg2 ;
-(CPTripPreviewTextConfiguration *)textConfiguration;
-(void)setTextConfiguration:(CPTripPreviewTextConfiguration *)arg1 ;
@end

