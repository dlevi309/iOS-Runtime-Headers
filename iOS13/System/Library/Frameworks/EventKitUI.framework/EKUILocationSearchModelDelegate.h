/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@protocol EKUILocationSearchModelDelegate
@required
-(void)currentLocationUpdated:(id)arg1;
-(void)mapSearchUpdated:(id)arg1;
-(void)contactsSearchUpdated:(id)arg1;
-(id)calendarItemForSearchModel:(id)arg1;
-(BOOL)shouldIncludeConferenceRoom:(id)arg1;
-(void)recentsSearchUpdated:(id)arg1;
-(void)frequentsSearchUpdated:(id)arg1;
-(void)eventsSearchUpdated:(id)arg1;
-(void)conferenceRoomSearchUpdated:(id)arg1;
-(void)locationSearchModel:(id)arg1 selectedLocation:(id)arg2 withError:(id)arg3;

@end

