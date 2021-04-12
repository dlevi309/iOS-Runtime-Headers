/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSString;

@interface SASetRemoteDevices : SABaseCommand <SAServerBoundCommand>

@property (assign,nonatomic) BOOL remoteDeviceHasNoAssistantId; 
@property (assign,nonatomic) BOOL remoteDeviceNotSetup; 
@property (assign,nonatomic) BOOL remoteDeviceUnreachable; 
@property (nonatomic,copy) NSArray * remoteDevices; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)setRemoteDevices;
+(id)setRemoteDevicesWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)remoteDevices;
-(BOOL)remoteDeviceHasNoAssistantId;
-(void)setRemoteDeviceHasNoAssistantId:(BOOL)arg1 ;
-(BOOL)remoteDeviceNotSetup;
-(void)setRemoteDeviceNotSetup:(BOOL)arg1 ;
-(BOOL)remoteDeviceUnreachable;
-(void)setRemoteDeviceUnreachable:(BOOL)arg1 ;
-(void)setRemoteDevices:(NSArray *)arg1 ;
@end

