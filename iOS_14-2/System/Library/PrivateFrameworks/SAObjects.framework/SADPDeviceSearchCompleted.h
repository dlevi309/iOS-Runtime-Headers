/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SADPDeviceSearchCompleted : SABaseCommand <SAServerBoundCommand, SAAceSerializable>

@property (assign,nonatomic) BOOL remotePlaySoundRestricted; 
@property (nonatomic,copy) NSArray * resolvedDevices; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)deviceSearchCompleted;
+(id)deviceSearchCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)remotePlaySoundRestricted;
-(void)setRemotePlaySoundRestricted:(BOOL)arg1 ;
-(NSArray *)resolvedDevices;
-(void)setResolvedDevices:(NSArray *)arg1 ;
@end

