/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSNumber, NSString;

@interface SSInstallAttributionParamsRequest : SSRequest <SSXPCCoding> {

	BOOL _overrideCampaignLimit;
	NSNumber* _appAdamId;
	NSString* _adNetworkId;
	NSNumber* _campaignId;
	NSString* _impressionId;
	NSNumber* _timestamp;
	NSString* _attributionSignature;
	NSString* _originatingBundleId;

}

@property (nonatomic,readonly) NSNumber * appAdamId;                         //@synthesize appAdamId=_appAdamId - In the implementation block
@property (nonatomic,readonly) NSString * adNetworkId;                       //@synthesize adNetworkId=_adNetworkId - In the implementation block
@property (nonatomic,readonly) NSNumber * campaignId;                        //@synthesize campaignId=_campaignId - In the implementation block
@property (nonatomic,readonly) NSString * impressionId;                      //@synthesize impressionId=_impressionId - In the implementation block
@property (nonatomic,readonly) NSNumber * timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) NSString * attributionSignature;              //@synthesize attributionSignature=_attributionSignature - In the implementation block
@property (nonatomic,readonly) NSString * originatingBundleId;               //@synthesize originatingBundleId=_originatingBundleId - In the implementation block
@property (nonatomic,readonly) BOOL overrideCampaignLimit;                   //@synthesize overrideCampaignLimit=_overrideCampaignLimit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSNumber *)campaignId;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSNumber *)timestamp;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(NSNumber *)appAdamId;
-(NSString *)originatingBundleId;
-(id)initWithAppAdamId:(id)arg1 adNetworkId:(id)arg2 campaignId:(id)arg3 impressionId:(id)arg4 timestamp:(id)arg5 attributionSignature:(id)arg6 originatingBundleId:(id)arg7 overrideCampaignLimit:(BOOL)arg8 ;
-(NSString *)adNetworkId;
-(NSString *)impressionId;
-(NSString *)attributionSignature;
-(id)initWithAppAdamId:(id)arg1 adNetworkId:(id)arg2 campaignId:(id)arg3 impressionId:(id)arg4 timestamp:(id)arg5 attributionSignature:(id)arg6 ;
-(id)initWithAppAdamId:(id)arg1 adNetworkId:(id)arg2 campaignId:(id)arg3 impressionId:(id)arg4 timestamp:(id)arg5 attributionSignature:(id)arg6 originatingBundleId:(id)arg7 ;
-(BOOL)overrideCampaignLimit;
@end

