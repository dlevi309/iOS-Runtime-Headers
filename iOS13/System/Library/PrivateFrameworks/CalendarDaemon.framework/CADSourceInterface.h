/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/


@protocol CADSourceInterface
@required
-(void)CADDatabaseGetSourcesWithFaultedProperties:(id)arg1 reply:(/*^block*/id)arg2;
-(void)CADDatabaseGetLocalSource:(/*^block*/id)arg1;
-(void)CADDatabaseGetLocalBirthdaySource:(/*^block*/id)arg1;
-(void)CADSourceGetConstraints:(id)arg1 reply:(/*^block*/id)arg2;
-(void)CADSourceGetNotificationCollection:(id)arg1 reply:(/*^block*/id)arg2;
-(void)CADSourceRefresh:(id)arg1 isUserRequested:(BOOL)arg2 reply:(/*^block*/id)arg3;
-(void)CADCountCalendarItemsOfType:(int)arg1 inSource:(id)arg2 reply:(/*^block*/id)arg3;
-(void)CADRemoveCalendarItemsOlderThanDate:(id)arg1 ofType:(int)arg2 inSource:(id)arg3 reply:(/*^block*/id)arg4;
-(void)CADSourceGetGrantedDelegatesList:(id)arg1 reply:(/*^block*/id)arg2;
-(void)CADSourceUpdateGrantedDelegatePermission:(id)arg1 sourceID:(id)arg2 reply:(/*^block*/id)arg3;
-(void)CADSourceGetManagedConfigurationAccountAccess:(id)arg1 reply:(/*^block*/id)arg2;

@end

