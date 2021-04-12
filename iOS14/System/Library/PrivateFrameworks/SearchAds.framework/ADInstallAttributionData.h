/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchAds.framework/SearchAds
*/


@class NSString, NSNumber;

@interface ADInstallAttributionData : NSObject {

	NSString* _version;
	NSNumber* _sourceAppAdamID;
	NSString* _adNetworkID;
	NSNumber* _campaignID;
	NSString* _uuid;
	NSNumber* _adamID;
	NSNumber* _timestamp;
	NSString* _signature;

}

@property (nonatomic,copy,readonly) NSString * version;                      //@synthesize version=_version - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * sourceAppAdamID;              //@synthesize sourceAppAdamID=_sourceAppAdamID - In the implementation block
@property (nonatomic,copy,readonly) NSString * adNetworkID;                  //@synthesize adNetworkID=_adNetworkID - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * campaignID;                   //@synthesize campaignID=_campaignID - In the implementation block
@property (nonatomic,copy,readonly) NSString * uuid;                         //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * adamID;                       //@synthesize adamID=_adamID - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy,readonly) NSString * signature;                    //@synthesize signature=_signature - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)signature;
-(NSString *)uuid;
-(NSNumber *)campaignID;
-(NSNumber *)timestamp;
-(NSNumber *)adamID;
-(NSString *)version;
-(id)initWithDict:(id)arg1 ;
-(void)recordStoreKitAdTap:(/*^block*/id)arg1 ;
-(NSString *)adNetworkID;
-(NSNumber *)sourceAppAdamID;
@end

