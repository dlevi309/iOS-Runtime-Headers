/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@protocol FCCoreConfiguration;
@interface FCBaseURLConfiguration : NSObject {

	id<FCCoreConfiguration> _coreConfiguration;

}

@property (nonatomic,retain) id<FCCoreConfiguration> coreConfiguration;              //@synthesize coreConfiguration=_coreConfiguration - In the implementation block
+(id)newsletterBaseURLForConfiguration:(id)arg1 ;
+(id)fairPlayBaseURLForConfiguration:(id)arg1 ;
+(id)notificationsBaseURLForConfiguration:(id)arg1 ;
+(id)overrideCAPIURLString;
+(id)searchBaseURLForConfiguration:(id)arg1 ;
+(BOOL)hasOverrideCAPIURL;
+(id)CAPIBaseURLForConfiguration:(id)arg1 ;
-(id)CAPIBaseURL;
-(id)fairPlayBaseURL;
-(id)initWithCoreConfiguration:(id)arg1 ;
-(id)notificationsBaseURL;
-(id)newsletterBaseURL;
-(id)searchBaseURLForConfiguration;
-(id)baseURL:(/*^block*/id)arg1 fallback:(/*function pointer*/void*)arg2 ;
-(id)baseURLString:(/*^block*/id)arg1 fallback:(/*function pointer*/void*)arg2 ;
-(id<FCCoreConfiguration>)coreConfiguration;
-(void)setCoreConfiguration:(id<FCCoreConfiguration>)arg1 ;
@end

