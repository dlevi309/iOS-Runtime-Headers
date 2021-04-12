/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/

#import <SoftwareUpdateServices/SoftwareUpdateServices-Structs.h>
#import <libobjc.A.dylib/SUAutoInstallFailureNotification.h>

@protocol SUAutoInstallFailureNotification <NSObject>
@optional
-(void)dismissNotification;
-(void)postNotificationForError:(id)arg1 withUpdateBuildNumber:(id)arg2;
-(void)postNotificationForError:(id)arg1;

@end


@class NSString;

@interface SUAutoInstallFailureNotification : NSObject <SUAutoInstallFailureNotification> {

	CFUserNotificationRef _notification;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)dismissNotification;
-(void)postNotificationForError:(id)arg1 withUpdateBuildNumber:(id)arg2 ;
-(void)postNotificationForError:(id)arg1 ;
@end

