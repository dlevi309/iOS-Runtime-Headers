/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSNumber, NSDictionary;

@interface AMSSubscriptionEntitlementsResult : NSObject {

	NSNumber* _appAdamId;
	NSNumber* _appVersion;
	NSDictionary* _entitlements;
	NSDictionary* _serverResponse;

}

@property (nonatomic,retain) NSNumber * appAdamId;                       //@synthesize appAdamId=_appAdamId - In the implementation block
@property (nonatomic,retain) NSNumber * appVersion;                      //@synthesize appVersion=_appVersion - In the implementation block
@property (nonatomic,retain) NSDictionary * entitlements;                //@synthesize entitlements=_entitlements - In the implementation block
@property (nonatomic,retain) NSDictionary * serverResponse;              //@synthesize serverResponse=_serverResponse - In the implementation block
-(NSDictionary *)entitlements;
-(void)setAppVersion:(NSNumber *)arg1 ;
-(NSNumber *)appVersion;
-(id)exportObject;
-(void)setEntitlements:(NSDictionary *)arg1 ;
-(NSDictionary *)serverResponse;
-(NSNumber *)appAdamId;
-(void)setAppAdamId:(NSNumber *)arg1 ;
-(void)setServerResponse:(NSDictionary *)arg1 ;
@end

