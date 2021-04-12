/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
*/

#import <RemoteManagementProtocol/RemoteManagementProtocol-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class RMProtocolSynchronizationTokens;

@interface RMProtocolTokensResponse : RMModelPayloadBase {

	RMProtocolSynchronizationTokens* _responseSyncTokens;

}

@property (nonatomic,copy) RMProtocolSynchronizationTokens * responseSyncTokens;              //@synthesize responseSyncTokens=_responseSyncTokens - In the implementation block
+(id)requestWithSyncTokens:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)serializeWithType:(short)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(void)setResponseSyncTokens:(RMProtocolSynchronizationTokens *)arg1 ;
-(RMProtocolSynchronizationTokens *)responseSyncTokens;
@end

