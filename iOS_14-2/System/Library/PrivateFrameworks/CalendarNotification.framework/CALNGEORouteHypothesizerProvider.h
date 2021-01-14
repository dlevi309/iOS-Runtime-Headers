/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNRouteHypothesizerProvider.h>

@class NSString;

@interface CALNGEORouteHypothesizerProvider : NSObject <CALNRouteHypothesizerProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)hypothesizerForPlannedDestination:(id)arg1 ;
-(void)didDismissUINotification:(unsigned long long)arg1 forPlannedDestination:(id)arg2 dismissalType:(unsigned long long)arg3 ;
-(void)removedRouteHypothesizerForEventExternalURL:(id)arg1 ;
-(void)createdRouteHypothesizer:(id)arg1 forEventExternalURL:(id)arg2 ;
@end

