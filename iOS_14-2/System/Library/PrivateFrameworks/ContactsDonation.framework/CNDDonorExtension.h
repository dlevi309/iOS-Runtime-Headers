/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
*/


@protocol CNDonationExtensionLogger;
@class NSExtension;

@interface CNDDonorExtension : NSObject {

	NSExtension* _extension;
	id<CNDonationExtensionLogger> _logger;

}

@property (nonatomic,readonly) NSExtension * extension;                           //@synthesize extension=_extension - In the implementation block
@property (nonatomic,readonly) id<CNDonationExtensionLogger> logger;              //@synthesize logger=_logger - In the implementation block
-(id)initWithExtension:(id)arg1 ;
-(id)description;
-(id<CNDonationExtensionLogger>)logger;
-(NSExtension *)extension;
-(void)renewExpirationDateForDonatedValue:(id)arg1 acknowledgementHandler:(/*^block*/id)arg2 ;
-(void)redonateAllValuesWithReason:(unsigned long long)arg1 ;
-(id)initWithExtension:(id)arg1 logger:(id)arg2 ;
@end

