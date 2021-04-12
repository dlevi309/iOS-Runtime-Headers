/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@protocol AMSMediaTokenServiceProtocol;
@class AMSURLSession;

@interface AMSMediaSharedProperties : NSObject {

	AMSURLSession* _session;
	id<AMSMediaTokenServiceProtocol> _tokenService;

}

@property (nonatomic,readonly) AMSURLSession * session;                                    //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) id<AMSMediaTokenServiceProtocol> tokenService;              //@synthesize tokenService=_tokenService - In the implementation block
+(id)propertiesForMarketingItemTask:(id)arg1 ;
+(id)_propertiesForClientIdentifier:(id)arg1 bag:(id)arg2 URLKnownToBeTrusted:(BOOL)arg3 ;
+(id)sharedPropertiesMapTable;
+(id)propertiesForMediaTask:(id)arg1 ;
+(id)propertiesForRatingsTask:(id)arg1 ;
+(id)accessQueue;
-(id)_initWithClientIdentifier:(id)arg1 bag:(id)arg2 URLKnownToBeTrusted:(BOOL)arg3 ;
-(AMSURLSession *)session;
-(id<AMSMediaTokenServiceProtocol>)tokenService;
-(void)dealloc;
@end

