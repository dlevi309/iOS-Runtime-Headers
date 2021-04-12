/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SARemoteDevice, NSData;

@interface SAExecuteOnRemoteRequest : SABaseClientBoundCommand

@property (nonatomic,retain) SARemoteDevice * remoteDevice; 
@property (assign,nonatomic) BOOL requiresResponseFromRemote; 
@property (nonatomic,copy) NSData * serializedCommand; 
@property (assign,nonatomic) BOOL useGuaranteedDelivery; 
+(id)executeOnRemoteRequest;
+(id)executeOnRemoteRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponseFromRemote;
-(void)setRequiresResponseFromRemote:(BOOL)arg1 ;
-(NSData *)serializedCommand;
-(void)setSerializedCommand:(NSData *)arg1 ;
-(BOOL)useGuaranteedDelivery;
-(void)setUseGuaranteedDelivery:(BOOL)arg1 ;
-(SARemoteDevice *)remoteDevice;
-(void)setRemoteDevice:(SARemoteDevice *)arg1 ;
@end

