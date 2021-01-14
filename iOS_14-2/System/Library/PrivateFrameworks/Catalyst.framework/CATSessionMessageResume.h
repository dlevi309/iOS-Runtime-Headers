/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDictionary *)clientUserInfo;
-(void)setClientUserInfo:(NSDictionary *)arg1 ;
-(void)setSessionUUID:(NSUUID *)arg1 ;
-(NSUUID *)sessionUUID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithSessionUUID:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

