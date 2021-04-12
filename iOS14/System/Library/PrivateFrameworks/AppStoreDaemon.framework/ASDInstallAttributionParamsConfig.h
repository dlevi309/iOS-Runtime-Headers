/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString;

@interface ASDInstallAttributionParamsConfig : NSObject <NSSecureCoding> {

	BOOL _overrideCampaignLimit;
	NSNumber* _appAdamId;
	NSString* _adNetworkId;
	NSNumber* _campaignId;
	NSString* _impressionId;
	NSNumber* _sourceAppAdamId;
	NSNumber* _timestamp;
	NSString* _attributionSignature;
	NSString* _version;
	NSString* _sourceAppBundleId;

}

@property (nonatomic,retain) NSNumber * appAdamId;                         //@synthesize appAdamId=_appAdamId - In the implementation block
@property (nonatomic,retain) NSString * adNetworkId;                       //@synthesize adNetworkId=_adNetworkId - In the implementation block
@property (nonatomic,retain) NSNumber * campaignId;                        //@synthesize campaignId=_campaignId - In the implementation block
@property (nonatomic,retain) NSString * impressionId;                      //@synthesize impressionId=_impressionId - In the implementation block
@property (nonatomic,retain) NSNumber * sourceAppAdamId;                   //@synthesize sourceAppAdamId=_sourceAppAdamId - In the implementation block
@property (nonatomic,retain) NSNumber * timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSString * attributionSignature;              //@synthesize attributionSignature=_attributionSignature - In the implementation block
@property (nonatomic,retain) NSString * version;                           //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSString * sourceAppBundleId;                 //@synthesize sourceAppBundleId=_sourceAppBundleId - In the implementation block
@property (assign,nonatomic) BOOL overrideCampaignLimit;                   //@synthesize overrideCampaignLimit=_overrideCampaignLimit - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSNumber *)campaignId;
-(void)setCampaignId:(NSNumber *)arg1 ;
-(NSNumber *)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)appAdamId;
-(void)setAdNetworkId:(NSString *)arg1 ;
-(void)setImpressionId:(NSString *)arg1 ;
-(NSNumber *)sourceAppAdamId;
-(void)setSourceAppAdamId:(NSNumber *)arg1 ;
-(void)setAttributionSignature:(NSString *)arg1 ;
-(void)setAppAdamId:(NSNumber *)arg1 ;
-(NSString *)adNetworkId;
-(NSString *)impressionId;
-(NSString *)attributionSignature;
-(BOOL)overrideCampaignLimit;
-(NSString *)sourceAppBundleId;
-(void)setSourceAppBundleId:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setOverrideCampaignLimit:(BOOL)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
-(void)setTimestamp:(NSNumber *)arg1 ;
@end

