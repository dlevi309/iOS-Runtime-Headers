/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class SARemoteDevice, NSURL;

@interface SAPhonePlayVoiceMail : SADomainCommand

@property (nonatomic,retain) SARemoteDevice * targetDevice; 
@property (nonatomic,copy) NSURL * voiceMailId; 
+(id)playVoiceMail;
+(id)playVoiceMailWithDictionary:(id)arg1 context:(id)arg2 ;
-(SARemoteDevice *)targetDevice;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setTargetDevice:(SARemoteDevice *)arg1 ;
-(NSURL *)voiceMailId;
-(void)setVoiceMailId:(NSURL *)arg1 ;
@end

