/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


@class NSString;

@interface FPXPCSanitizer : NSObject {

	NSString* _providerIdentifier;

}

@property (nonatomic,readonly) NSString * providerIdentifier;              //@synthesize providerIdentifier=_providerIdentifier - In the implementation block
+(id)permittedErrorDomains;
-(NSString *)providerIdentifier;
-(id)init;
-(id)initWithProviderDomainIdentifier:(id)arg1 ;
@end

