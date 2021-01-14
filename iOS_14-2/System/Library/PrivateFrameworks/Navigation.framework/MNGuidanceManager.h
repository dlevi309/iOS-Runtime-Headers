/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@protocol MNGuidanceManager <NSObject>
@required
-(void)updateDestination:(id)arg1;
-(void)stop;
-(void)updateForReroute:(id)arg1;
-(double)timeSinceLastAnnouncement;
-(double)timeUntilNextAnnouncement;
-(void)updateGuidanceForLocation:(id)arg1 navigatorState:(int)arg2;
-(BOOL)repeatLastGuidanceAnnouncement:(id)arg1;

@end

