/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


@class NSString;

@interface FPXPCSanitizer : NSObject {

	NSString* _providerIdentifier;

}

@property (nonatomic,readonly) NSString * providerIdentifier;              //@synthesize providerIdentifier=_providerIdentifier - In the implementation block
+(id)permittedErrorDomains;
-(id)init;
-(NSString *)providerIdentifier;
-(id)initWithProviderDomainIdentifier:(id)arg1 ;
@end

