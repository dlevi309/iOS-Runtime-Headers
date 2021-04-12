/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/AFSiriExternalRequest.h>

@protocol OS_xpc_object;
@class NSObject;

@interface AFSiriAceRequest : NSObject <AFSiriExternalRequest> {

	NSObject*<OS_xpc_object> _startRequestData;
	unsigned long long _requestOptions;

}
-(void)performRequestWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithStartRequest:(id)arg1 requestOptions:(unsigned long long)arg2 ;
-(id)initWithStartRequest:(id)arg1 ;
@end

