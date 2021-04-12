/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAIntentGroupSiriKitRemoteExecution : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * executionDeviceAssistantId; 
@property (nonatomic,copy) NSString * invocationDeviceAssistantId; 
@property (nonatomic,copy) NSString * personalDomainAuthenticationMode; 
@property (nonatomic,copy) NSString * runLocation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)siriKitRemoteExecution;
+(id)siriKitRemoteExecutionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)executionDeviceAssistantId;
-(void)setExecutionDeviceAssistantId:(NSString *)arg1 ;
-(NSString *)invocationDeviceAssistantId;
-(NSString *)runLocation;
-(void)setInvocationDeviceAssistantId:(NSString *)arg1 ;
-(NSString *)personalDomainAuthenticationMode;
-(void)setPersonalDomainAuthenticationMode:(NSString *)arg1 ;
-(void)setRunLocation:(NSString *)arg1 ;
@end

