/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

