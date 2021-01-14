/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchAds.framework/SearchAds
*/


@class NSString, NSError;

@interface ADSearchObject : NSObject {

	NSString* _sponsoredSearchRequestData;
	NSString* _routingInfoData;
	NSString* _deviceRequestID;
	NSString* _userTargetingIdentifier;
	NSError* _error;

}

@property (nonatomic,retain) NSString * sponsoredSearchRequestData;              //@synthesize sponsoredSearchRequestData=_sponsoredSearchRequestData - In the implementation block
@property (nonatomic,retain) NSString * routingInfoData;                         //@synthesize routingInfoData=_routingInfoData - In the implementation block
@property (nonatomic,retain) NSString * deviceRequestID;                         //@synthesize deviceRequestID=_deviceRequestID - In the implementation block
@property (nonatomic,retain) NSString * userTargetingIdentifier;                 //@synthesize userTargetingIdentifier=_userTargetingIdentifier - In the implementation block
@property (nonatomic,retain) NSError * error;                                    //@synthesize error=_error - In the implementation block
-(id)init;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setDeviceRequestID:(NSString *)arg1 ;
-(NSString *)deviceRequestID;
-(NSString *)sponsoredSearchRequestData;
-(void)setSponsoredSearchRequestData:(NSString *)arg1 ;
-(NSString *)routingInfoData;
-(void)setRoutingInfoData:(NSString *)arg1 ;
-(NSString *)userTargetingIdentifier;
-(void)setUserTargetingIdentifier:(NSString *)arg1 ;
@end

