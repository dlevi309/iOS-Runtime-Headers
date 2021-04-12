/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchAds.framework/SearchAds
*/


@class NSString, NSNumber;

@interface ADInstallAttributionData : NSObject {

	NSString* _adNetworkID;
	NSNumber* _campaignID;
	NSString* _uuid;
	NSNumber* _adamID;
	NSNumber* _timestamp;
	NSString* _signature;

}

@property (nonatomic,copy,readonly) NSString * adNetworkID;              //@synthesize adNetworkID=_adNetworkID - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * campaignID;               //@synthesize campaignID=_campaignID - In the implementation block
@property (nonatomic,copy,readonly) NSString * uuid;                     //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * adamID;                   //@synthesize adamID=_adamID - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy,readonly) NSString * signature;                //@synthesize signature=_signature - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)uuid;
-(NSNumber *)timestamp;
-(NSString *)signature;
-(id)initWithDict:(id)arg1 ;
-(NSNumber *)adamID;
-(NSNumber *)campaignID;
-(void)recordStoreKitAdTap:(/*^block*/id)arg1 ;
-(NSString *)adNetworkID;
@end

