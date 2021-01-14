/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class WBSPasswordBreachConfiguration, WBSPasswordBreachCryptographicOperations, WBSPasswordBreachStore;

@interface WBSPasswordBreachContext : NSObject {

	WBSPasswordBreachConfiguration* _configuration;
	WBSPasswordBreachCryptographicOperations* _cryptographicOperations;
	WBSPasswordBreachStore* _store;

}

@property (nonatomic,readonly) WBSPasswordBreachConfiguration * configuration;                                  //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) WBSPasswordBreachCryptographicOperations * cryptographicOperations;              //@synthesize cryptographicOperations=_cryptographicOperations - In the implementation block
@property (nonatomic,readonly) WBSPasswordBreachStore * store;                                                  //@synthesize store=_store - In the implementation block
-(WBSPasswordBreachStore *)store;
-(WBSPasswordBreachCryptographicOperations *)cryptographicOperations;
-(id)initWithConfiguration:(id)arg1 store:(id)arg2 ;
-(WBSPasswordBreachConfiguration *)configuration;
@end

