/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/

#import <Catalyst/CATSessionMessage.h>

@class NSUUID, NSDictionary;

@interface CATSessionMessageResume : CATSessionMessage {

	NSUUID* _sessionUUID;
	NSDictionary* _clientUserInfo;

}

@property (nonatomic,copy) NSUUID * sessionUUID;                       //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (nonatomic,copy) NSDictionary * clientUserInfo;              //@synthesize clientUserInfo=_clientUserInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)sessionUUID;
-(void)setSessionUUID:(NSUUID *)arg1 ;
-(NSDictionary *)clientUserInfo;
-(id)initWithSessionUUID:(id)arg1 ;
-(void)setClientUserInfo:(NSDictionary *)arg1 ;
@end

