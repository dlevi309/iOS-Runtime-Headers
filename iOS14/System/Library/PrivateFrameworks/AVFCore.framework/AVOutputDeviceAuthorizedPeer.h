/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@class AVOutputDeviceAuthorizedPeerInternal, NSString, NSData;

@interface AVOutputDeviceAuthorizedPeer : NSObject {

	AVOutputDeviceAuthorizedPeerInternal* _ivars;

}

@property (nonatomic,readonly) NSString * peerID; 
@property (nonatomic,readonly) NSData * publicKey; 
@property (nonatomic,readonly) BOOL hasAdministratorPrivileges; 
-(NSData *)publicKey;
-(id)init;
-(id)initWithID:(id)arg1 publicKey:(id)arg2 hasAdministratorPrivileges:(BOOL)arg3 ;
-(BOOL)hasAdministratorPrivileges;
-(NSString *)peerID;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

