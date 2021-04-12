/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class SARemoteDevice, NSURL;

@interface SAPhonePlayVoiceMail : SADomainCommand

@property (nonatomic,retain) SARemoteDevice * targetDevice; 
@property (nonatomic,copy) NSURL * voiceMailId; 
+(id)playVoiceMail;
+(id)playVoiceMailWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setTargetDevice:(SARemoteDevice *)arg1 ;
-(SARemoteDevice *)targetDevice;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSURL *)voiceMailId;
-(void)setVoiceMailId:(NSURL *)arg1 ;
@end

