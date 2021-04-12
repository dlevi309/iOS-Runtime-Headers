/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class SARemoteDevice, NSString;

@interface SAExecuteOnRemoteResponse : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,retain) SARemoteDevice * remoteDevice; 
@property (assign,nonatomic) BOOL responseFromRemote; 
@property (nonatomic,retain) id<SAAceCommand> result; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)executeOnRemoteResponse;
+(id)executeOnRemoteResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id<SAAceCommand>)result;
-(id)groupIdentifier;
-(void)setResult:(id<SAAceCommand>)arg1 ;
-(id)encodedClassName;
-(SARemoteDevice *)remoteDevice;
-(void)setRemoteDevice:(SARemoteDevice *)arg1 ;
-(BOOL)requiresResponse;
-(BOOL)responseFromRemote;
-(void)setResponseFromRemote:(BOOL)arg1 ;
@end

