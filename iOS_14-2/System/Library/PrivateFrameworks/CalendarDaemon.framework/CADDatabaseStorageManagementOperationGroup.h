/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <CalendarDaemon/CADOperationGroup.h>
#import <libobjc.A.dylib/CADDatabaseStorageManagementInterface.h>

@class NSString;

@interface CADDatabaseStorageManagementOperationGroup : CADOperationGroup <CADDatabaseStorageManagementInterface>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)requiresEventOrReminderAccess;
+(BOOL)requiresReminderAccess;
+(BOOL)requiresEventAccess;
-(void)CADDatabaseGetStorageUsage:(/*^block*/id)arg1 ;
-(BOOL)storageManagementAccessGranted;
-(BOOL)accessGrantedToPerformSelector:(SEL)arg1 ;
-(unsigned long long)sizeCalendarDirectory;
-(unsigned long long)sizeAttachments;
-(unsigned long long)sizeDirectoryAtPath:(id)arg1 ;
@end

