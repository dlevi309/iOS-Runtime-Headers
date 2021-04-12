/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CPSTripPreviewsCardView.h>
#import <libobjc.A.dylib/CPSAlternateRouteSelecting.h>

@class CPSAlternateRoutesView, NSString;

@interface CPSRoutePreviewsCardView : CPSTripPreviewsCardView <CPSAlternateRouteSelecting> {

	CPSAlternateRoutesView* _alternatesView;

}

@property (nonatomic,readonly) CPSAlternateRoutesView * alternatesView;              //@synthesize alternatesView=_alternatesView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)preferredFocusEnvironments;
-(id)_linearFocusItems;
-(void)alternateRoutesView:(id)arg1 didSelectRouteChoice:(id)arg2 ;
-(id)initWithTripDelegate:(id)arg1 trips:(id)arg2 textConfiguration:(id)arg3 ;
-(void)setSelectedTrip:(id)arg1 ;
-(CPSAlternateRoutesView *)alternatesView;
@end

