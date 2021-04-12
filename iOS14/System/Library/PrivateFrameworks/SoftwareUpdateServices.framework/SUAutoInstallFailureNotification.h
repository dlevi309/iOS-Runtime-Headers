/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)dismissNotification;
-(void)dealloc;
-(void)postNotificationForError:(id)arg1 withUpdateBuildNumber:(id)arg2 ;
-(void)postNotificationForError:(id)arg1 ;
@end

