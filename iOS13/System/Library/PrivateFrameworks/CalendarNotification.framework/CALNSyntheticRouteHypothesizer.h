/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNSyntheticRouteHypothesizerProtocol.h>

@class CADRouteHypothesis, NSString, EKTravelEngineHypothesis;

@interface CALNSyntheticRouteHypothesizer : NSObject <CALNSyntheticRouteHypothesizerProtocol> {

	CADRouteHypothesis* currentCADRouteHypothesis;
	/*^block*/id _updateHandler;

}

@property (nonatomic,copy) id updateHandler;                                              //@synthesize updateHandler=_updateHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) CADRouteHypothesis * currentCADRouteHypothesis; 
@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,readonly) EKTravelEngineHypothesis * currentHypothesis; 
-(unsigned long long)state;
-(void)setUpdateHandler:(id)arg1 ;
-(id)updateHandler;
-(EKTravelEngineHypothesis *)currentHypothesis;
-(void)startHypothesizingWithUpdateHandler:(/*^block*/id)arg1 ;
-(void)stopHypothesizing;
-(void)requestRefresh;
-(void)didPostUINotification:(unsigned long long)arg1 ;
-(void)setCurrentCADRouteHypothesis:(CADRouteHypothesis *)arg1 ;
-(CADRouteHypothesis *)currentCADRouteHypothesis;
@end

