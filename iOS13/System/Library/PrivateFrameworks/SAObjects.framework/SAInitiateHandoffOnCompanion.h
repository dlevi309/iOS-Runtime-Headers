/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)groupIdentifier;
-(void)setTargetDevice:(SARemoteDevice *)arg1 ;
-(SARemoteDevice *)targetDevice;
-(id)encodedClassName;
-(BOOL)requiresResponse;
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

