/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
*/


@protocol CNDonationLoggerProvider;
@interface CNDDonorLoader : NSObject {

	id<CNDonationLoggerProvider> _loggerProvider;

}

@property (nonatomic,readonly) id<CNDonationLoggerProvider> loggerProvider;              //@synthesize loggerProvider=_loggerProvider - In the implementation block
+(id)extensionAttributes;
+(id)currentExtensionsObservable;
+(id)continuousExtensionsObservable;
-(id)init;
-(id<CNDonationLoggerProvider>)loggerProvider;
-(id)donorWithIdentifier:(id)arg1 ;
@end

