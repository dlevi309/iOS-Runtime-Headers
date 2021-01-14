/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <UIKitCore/UIView.h>

@class CPTrip, UILabel, CPSHidingLabel, NSString, CPTravelEstimates, CPSRouteEstimatesView;

@interface CPSRouteOverviewView : UIView {

	CPTrip* _representedTrip;
	UILabel* _destinationName;
	CPSHidingLabel* _destinationAddress;
	CPSHidingLabel* _routeNoteLabel;
	NSString* _routeNote;
	CPTravelEstimates* _currentTravelEstimates;
	CPSRouteEstimatesView* _estimatesView;

}

@property (nonatomic,readonly) CPTrip * representedTrip;                              //@synthesize representedTrip=_representedTrip - In the implementation block
@property (nonatomic,readonly) UILabel * destinationName;                             //@synthesize destinationName=_destinationName - In the implementation block
@property (nonatomic,readonly) CPSHidingLabel * destinationAddress;                   //@synthesize destinationAddress=_destinationAddress - In the implementation block
@property (nonatomic,readonly) CPSHidingLabel * routeNoteLabel;                       //@synthesize routeNoteLabel=_routeNoteLabel - In the implementation block
@property (nonatomic,copy) NSString * routeNote;                                      //@synthesize routeNote=_routeNote - In the implementation block
@property (nonatomic,retain) CPTravelEstimates * currentTravelEstimates;              //@synthesize currentTravelEstimates=_currentTravelEstimates - In the implementation block
@property (nonatomic,readonly) CPSRouteEstimatesView * estimatesView;                 //@synthesize estimatesView=_estimatesView - In the implementation block
+(id)_multilineLabel;
+(id)_nameForMapItem:(id)arg1 ;
+(void)_applyBoldText:(id)arg1 fontSize:(double)arg2 color:(id)arg3 toLabel:(id)arg4 ;
+(id)_shortenedAddressForAddress:(id)arg1 ;
+(void)_applyText:(id)arg1 fontSize:(double)arg2 color:(id)arg3 toLabel:(id)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)destinationName;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CPSHidingLabel *)destinationAddress;
-(void)setCurrentTravelEstimates:(CPTravelEstimates *)arg1 ;
-(CPTravelEstimates *)currentTravelEstimates;
-(CPSRouteEstimatesView *)estimatesView;
-(void)_updateTripEstimateStyle;
-(CPSHidingLabel *)routeNoteLabel;
-(CPTrip *)representedTrip;
-(void)setRepresentedTrip:(CPTrip *)arg1 ;
-(void)setRouteNote:(NSString *)arg1 ;
-(NSString *)routeNote;
@end

