/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@protocol CALNIconCache <NSObject>
@required
-(BOOL)forceRemoveAllCachedIconsWithError:(id*)arg1;
-(BOOL)addIconsWithIdentifiers:(id)arg1 error:(id*)arg2;
-(id)cachedIconPathForIconIdentifier:(id)arg1;
-(id)iconIdentifierForCachedIconPath:(id)arg1;
-(BOOL)removeIconWithIdentifier:(id)arg1 error:(id*)arg2;

@end

