/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSString;

@interface AMSMediaTokenServiceUserDefaultsStore : NSObject {

	NSString* _clientIdentifier;

}

@property (nonatomic,readonly) NSString * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
-(id)initWithClientIdentifier:(id)arg1 ;
-(BOOL)storeToken:(id)arg1 ;
-(id)retrieveToken;
-(NSString *)clientIdentifier;
@end

