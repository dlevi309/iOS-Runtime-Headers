/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)setRemoteDevices;
+(id)setRemoteDevicesWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)remoteDevices;
-(id)encodedClassName;
-(void)setRemoteDevices:(NSArray *)arg1 ;
-(BOOL)requiresResponse;
-(BOOL)remoteDeviceHasNoAssistantId;
-(void)setRemoteDeviceHasNoAssistantId:(BOOL)arg1 ;
-(BOOL)remoteDeviceNotSetup;
-(void)setRemoteDeviceNotSetup:(BOOL)arg1 ;
-(BOOL)remoteDeviceUnreachable;
-(void)setRemoteDeviceUnreachable:(BOOL)arg1 ;
@end

