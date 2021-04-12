/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNRouteHypothesizerProvider.h>

@class CADSyntheticRouteHypothesizerCache, NSString;

@interface CALNSyntheticRouteHypothesizerProvider : NSObject <CALNRouteHypothesizerProvider> {

	CADSyntheticRouteHypothesizerCache* _syntheticRouteHypothesizerCache;

}

@property (nonatomic,readonly) CADSyntheticRouteHypothesizerCache * syntheticRouteHypothesizerCache;              //@synthesize syntheticRouteHypothesizerCache=_syntheticRouteHypothesizerCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(id)hypothesizerForPlannedDestination:(id)arg1 ;
-(void)didDismissUINotification:(unsigned long long)arg1 forPlannedDestination:(id)arg2 dismissalType:(unsigned long long)arg3 ;
-(CADSyntheticRouteHypothesizerCache *)syntheticRouteHypothesizerCache;
-(void)createdRouteHypothesizer:(id)arg1 forEventExternalURL:(id)arg2 ;
-(void)removedRouteHypothesizerForEventExternalURL:(id)arg1 ;
@end

