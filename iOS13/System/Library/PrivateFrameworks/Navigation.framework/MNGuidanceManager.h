/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@protocol MNGuidanceManager <NSObject>
@required
-(void)stop;
-(void)updateDestination:(id)arg1;
-(void)updateForReroute:(id)arg1;
-(double)timeSinceLastAnnouncement;
-(double)timeUntilNextAnnouncement;
-(void)updateGuidanceForLocation:(id)arg1 navigatorState:(int)arg2;
-(BOOL)repeatLastGuidanceAnnouncement:(id)arg1;
-(void)addInjectedEvent:(id)arg1;
-(void)updateForReturnToRoute;

@end

