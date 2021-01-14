/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/AFAssertion.h>

@class NSUUID, AFAssertionContext, AFOneArgumentSafetyBlock, NSString;

@interface _AFAssertionRecord : NSObject <AFAssertion> {

	AFOneArgumentSafetyBlock* _relinquishmentHandler;
	NSUUID* _uuid;
	AFAssertionContext* _context;

}

@property (nonatomic,readonly) NSUUID * uuid;                             //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) AFAssertionContext * context;              //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSUUID *)uuid;
-(AFAssertionContext *)context;
-(NSString *)description;
-(id)initWithUUID:(id)arg1 context:(id)arg2 relinquishmentHandler:(/*^block*/id)arg3 ;
-(void)invokeRelinquishmentHandlerWithContext:(id)arg1 ;
@end

