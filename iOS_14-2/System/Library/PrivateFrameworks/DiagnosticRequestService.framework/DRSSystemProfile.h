/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
*/


@class NSString;

@interface DRSSystemProfile : NSObject {

	unsigned char _platform;
	BOOL _isInternal;
	BOOL _isSeed;
	BOOL _isCarrier;
	BOOL _allowsCustomerAnalyticsOverride;
	BOOL _overridingCustomerApprovesAnalyticsValue;
	NSString* _build;
	NSString* _deviceCategory;
	NSString* _deviceModel;

}

@property (assign,nonatomic) BOOL allowsCustomerAnalyticsOverride;                       //@synthesize allowsCustomerAnalyticsOverride=_allowsCustomerAnalyticsOverride - In the implementation block
@property (assign,nonatomic) BOOL overridingCustomerApprovesAnalyticsValue;              //@synthesize overridingCustomerApprovesAnalyticsValue=_overridingCustomerApprovesAnalyticsValue - In the implementation block
@property (nonatomic,readonly) NSString * build;                                         //@synthesize build=_build - In the implementation block
@property (nonatomic,readonly) NSString * buildVariant; 
@property (nonatomic,readonly) NSString * deviceCategory;                                //@synthesize deviceCategory=_deviceCategory - In the implementation block
@property (nonatomic,readonly) NSString * deviceModel;                                   //@synthesize deviceModel=_deviceModel - In the implementation block
@property (nonatomic,readonly) NSString * platformString; 
@property (nonatomic,readonly) unsigned char platform;                                   //@synthesize platform=_platform - In the implementation block
@property (nonatomic,readonly) BOOL isInternal;                                          //@synthesize isInternal=_isInternal - In the implementation block
@property (nonatomic,readonly) BOOL isSeed;                                              //@synthesize isSeed=_isSeed - In the implementation block
@property (nonatomic,readonly) BOOL isCarrier;                                           //@synthesize isCarrier=_isCarrier - In the implementation block
@property (nonatomic,readonly) BOOL customerApprovesAnalytics; 
+(id)sharedInstance;
-(BOOL)isInternal;
-(unsigned char)platform;
-(NSString *)deviceModel;
-(NSString *)build;
-(id)init;
-(BOOL)isSeed;
-(NSString *)deviceCategory;
-(NSString *)buildVariant;
-(BOOL)customerApprovesAnalytics;
-(NSString *)platformString;
-(BOOL)isCarrier;
-(void)_populateCarrier;
-(BOOL)allowsCustomerAnalyticsOverride;
-(BOOL)overridingCustomerApprovesAnalyticsValue;
-(void)_populateBuildVariant;
-(void)_populateBuild;
-(void)_populateDeviceModel;
-(void)_populateDeviceCategory;
-(void)_populatePlatform;
-(void)setAllowsCustomerAnalyticsOverride:(BOOL)arg1 ;
-(void)setOverridingCustomerApprovesAnalyticsValue:(BOOL)arg1 ;
@end

