/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SARemoteDevice, NSData;

@interface SAExecuteOnRemoteRequest : SABaseClientBoundCommand

@property (nonatomic,retain) SARemoteDevice * remoteDevice; 
@property (assign,nonatomic) BOOL requiresResponseFromRemote; 
@property (nonatomic,copy) NSData * serializedCommand; 
+(id)executeOnRemoteRequest;
+(id)executeOnRemoteRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SARemoteDevice *)remoteDevice;
-(void)setRemoteDevice:(SARemoteDevice *)arg1 ;
-(BOOL)requiresResponse;
-(BOOL)requiresResponseFromRemote;
-(void)setRequiresResponseFromRemote:(BOOL)arg1 ;
-(NSData *)serializedCommand;
-(void)setSerializedCommand:(NSData *)arg1 ;
@end

