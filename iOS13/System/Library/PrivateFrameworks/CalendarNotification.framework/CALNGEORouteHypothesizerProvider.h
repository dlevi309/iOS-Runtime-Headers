/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)createdRouteHypothesizer:(id)arg1 forEventExternalURL:(id)arg2 ;
-(void)removedRouteHypothesizerForEventExternalURL:(id)arg1 ;
@end

