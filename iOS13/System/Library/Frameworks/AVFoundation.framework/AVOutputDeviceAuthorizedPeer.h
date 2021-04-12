/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@class AVOutputDeviceAuthorizedPeerInternal, NSString, NSData;

@interface AVOutputDeviceAuthorizedPeer : NSObject {

	AVOutputDeviceAuthorizedPeerInternal* _ivars;

}

@property (nonatomic,readonly) NSString * peerID; 
@property (nonatomic,readonly) NSData * publicKey; 
@property (nonatomic,readonly) BOOL hasAdministratorPrivileges; 
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSData *)publicKey;
-(NSString *)peerID;
-(id)initWithID:(id)arg1 publicKey:(id)arg2 hasAdministratorPrivileges:(BOOL)arg3 ;
-(BOOL)hasAdministratorPrivileges;
@end

