/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <CalendarDaemon/CADOperationGroup.h>
#import <libobjc.A.dylib/CADInternalInterface.h>

@class NSString;

@interface CADInternalOperationGroup : CADOperationGroup <CADInternalInterface>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)requiresEventAccess;
+(BOOL)requiresReminderAccess;
+(BOOL)requiresEventOrReminderAccess;
-(void)CADInternalForceStatCollection:(/*^block*/id)arg1 ;
-(BOOL)accessGrantedToPerformSelector:(SEL)arg1 ;
-(BOOL)_internalAccessGranted;
@end

