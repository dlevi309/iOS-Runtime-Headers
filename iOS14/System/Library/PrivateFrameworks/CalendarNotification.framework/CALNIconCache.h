/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@protocol CALNIconCache <NSObject>
@required
-(BOOL)removeIconWithIdentifier:(id)arg1 error:(id*)arg2;
-(BOOL)addIconsWithIdentifiers:(id)arg1 error:(id*)arg2;
-(BOOL)forceRemoveAllCachedIconsWithError:(id*)arg1;
-(id)cachedIconPathForIconIdentifier:(id)arg1;
-(id)iconIdentifierForCachedIconPath:(id)arg1;

@end

