/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id<CNDonationExtensionLogger>)logger;
-(NSExtension *)extension;
-(id)initWithExtension:(id)arg1 ;
-(void)renewExpirationDateForDonatedValue:(id)arg1 acknowledgementHandler:(/*^block*/id)arg2 ;
-(void)redonateAllValuesWithReason:(unsigned long long)arg1 ;
-(id)initWithExtension:(id)arg1 logger:(id)arg2 ;
@end

