/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setServerUserInfo:(NSDictionary *)arg1 ;
-(void)setSessionUUID:(NSUUID *)arg1 ;
-(NSUUID *)sessionUUID;
-(void)setPendingRemoteTaskUUIDs:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)serverUserInfo;
-(id)initWithSessionUUID:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)pendingRemoteTaskUUIDs;
@end

