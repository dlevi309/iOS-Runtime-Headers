/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, SARemoteDevice;

@interface SAInitiateHandoffOnCompanion : SABaseClientBoundCommand

@property (nonatomic,retain) id<SAHandoffPayload> handoffPayload; 
@property (nonatomic,copy) NSString * lockScreenText; 
@property (nonatomic,copy) NSString * lockScreenTextDialogIdentifier; 
@property (nonatomic,copy) NSString * notificationText; 
@property (nonatomic,copy) NSString * notificationTextDialogIdentifier; 
@property (nonatomic,retain) SARemoteDevice * targetDevice; 
+(id)initiateHandoffOnCompanion;
+(id)initiateHandoffOnCompanionWithDictionary:(id)arg1 context:(id)arg2 ;
-(SARemoteDevice *)targetDevice;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setTargetDevice:(SARemoteDevice *)arg1 ;
-(id<SAHandoffPayload>)handoffPayload;
-(void)setHandoffPayload:(id<SAHandoffPayload>)arg1 ;
-(NSString *)lockScreenText;
-(void)setLockScreenText:(NSString *)arg1 ;
-(NSString *)lockScreenTextDialogIdentifier;
-(void)setLockScreenTextDialogIdentifier:(NSString *)arg1 ;
-(NSString *)notificationText;
-(void)setNotificationText:(NSString *)arg1 ;
-(NSString *)notificationTextDialogIdentifier;
-(void)setNotificationTextDialogIdentifier:(NSString *)arg1 ;
@end

