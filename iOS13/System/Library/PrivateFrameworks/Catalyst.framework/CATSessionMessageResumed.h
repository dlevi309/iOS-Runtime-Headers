/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/

#import <Catalyst/CATSessionMessage.h>

@class NSUUID, NSDictionary, NSArray;

@interface CATSessionMessageResumed : CATSessionMessage {

	NSUUID* _sessionUUID;
	NSDictionary* _serverUserInfo;
	NSArray* _pendingRemoteTaskUUIDs;

}

@property (nonatomic,copy) NSUUID * sessionUUID;                          //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (nonatomic,copy) NSDictionary * serverUserInfo;                 //@synthesize serverUserInfo=_serverUserInfo - In the implementation block
@property (nonatomic,copy) NSArray * pendingRemoteTaskUUIDs;              //@synthesize pendingRemoteTaskUUIDs=_pendingRemoteTaskUUIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)sessionUUID;
-(void)setSessionUUID:(NSUUID *)arg1 ;
-(id)initWithSessionUUID:(id)arg1 ;
-(NSArray *)pendingRemoteTaskUUIDs;
-(NSDictionary *)serverUserInfo;
-(void)setServerUserInfo:(NSDictionary *)arg1 ;
-(void)setPendingRemoteTaskUUIDs:(NSArray *)arg1 ;
@end

