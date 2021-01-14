/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/AFSiriExternalRequest.h>

@class AFSiriActivationContext;

@interface AFSiriActivationRequest : NSObject <AFSiriExternalRequest> {

	AFSiriActivationContext* _context;

}
-(id)initWithContext:(id)arg1 ;
-(void)performRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)performRequestWithResultHandler:(/*^block*/id)arg1 ;
@end

