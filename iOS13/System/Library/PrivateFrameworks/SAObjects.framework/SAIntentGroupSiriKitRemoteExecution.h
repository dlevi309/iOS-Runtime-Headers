/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setInvocationDeviceAssistantId:(NSString *)arg1 ;
-(NSString *)personalDomainAuthenticationMode;
-(void)setPersonalDomainAuthenticationMode:(NSString *)arg1 ;
-(NSString *)runLocation;
-(void)setRunLocation:(NSString *)arg1 ;
@end

