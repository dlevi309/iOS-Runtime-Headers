/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@protocol AMSMediaTokenServiceProtocol;
@class AMSURLSession;

@interface AMSMediaTaskSharedProperties : NSObject {

	AMSURLSession* _session;
	id<AMSMediaTokenServiceProtocol> _tokenService;

}

@property (nonatomic,readonly) AMSURLSession * session;                                    //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) id<AMSMediaTokenServiceProtocol> tokenService;              //@synthesize tokenService=_tokenService - In the implementation block
+(id)accessQueue;
+(id)propertiesForMediaTask:(id)arg1 ;
+(id)sharedPropertiesMapTable;
-(void)dealloc;
-(AMSURLSession *)session;
-(id<AMSMediaTokenServiceProtocol>)tokenService;
-(id)initWithMediaTask:(id)arg1 ;
@end

