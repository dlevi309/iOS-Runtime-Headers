/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNSyntheticRouteHypothesizerProtocol.h>

@class CADRouteHypothesis, EKTravelEngineHypothesis, NSString;

@interface CALNSyntheticRouteHypothesizer : NSObject <CALNSyntheticRouteHypothesizerProtocol> {

	CADRouteHypothesis* currentCADRouteHypothesis;
	/*^block*/id _updateHandler;

}

@property (nonatomic,copy) id updateHandler;                                              //@synthesize updateHandler=_updateHandler - In the implementation block
@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,readonly) EKTravelEngineHypothesis * currentHypothesis; 
@property (nonatomic,retain) CADRouteHypothesis * currentCADRouteHypothesis; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(EKTravelEngineHypothesis *)currentHypothesis;
-(void)setUpdateHandler:(id)arg1 ;
-(id)updateHandler;
-(CADRouteHypothesis *)currentCADRouteHypothesis;
-(void)requestRefresh;
-(void)setCurrentCADRouteHypothesis:(CADRouteHypothesis *)arg1 ;
-(void)stopHypothesizing;
-(unsigned long long)state;
-(void)startHypothesizingWithUpdateHandler:(/*^block*/id)arg1 ;
-(void)didPostUINotification:(unsigned long long)arg1 ;
@end

