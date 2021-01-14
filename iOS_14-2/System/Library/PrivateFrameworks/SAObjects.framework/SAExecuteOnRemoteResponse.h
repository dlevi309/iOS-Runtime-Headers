/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class SARemoteDevice, NSString;

@interface SAExecuteOnRemoteResponse : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,retain) SARemoteDevice * remoteDevice; 
@property (assign,nonatomic) BOOL responseFromRemote; 
@property (nonatomic,retain) id<SAAceCommand> result; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)executeOnRemoteResponse;
+(id)executeOnRemoteResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setResult:(id<SAAceCommand>)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)responseFromRemote;
-(void)setResponseFromRemote:(BOOL)arg1 ;
-(id<SAAceCommand>)result;
-(SARemoteDevice *)remoteDevice;
-(void)setRemoteDevice:(SARemoteDevice *)arg1 ;
@end

