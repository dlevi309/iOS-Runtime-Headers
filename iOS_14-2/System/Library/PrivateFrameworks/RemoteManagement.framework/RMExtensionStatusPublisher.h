/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
*/

#import <libobjc.A.dylib/RMExtensionStatusPublisherRequestHandling.h>

@protocol RMExtensionStatusPublisherRequestHandling;
@class NSConditionLock, NSString;

@interface RMExtensionStatusPublisher : NSObject <RMExtensionStatusPublisherRequestHandling> {

	NSConditionLock* _requestHandlerLock;
	id<RMExtensionStatusPublisherRequestHandling> _requestHandler;

}

@property (nonatomic,readonly) id<RMExtensionStatusPublisherRequestHandling> requestHandler;              //@synthesize requestHandler=_requestHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedPublisher;
-(id)init;
-(id<RMExtensionStatusPublisherRequestHandling>)requestHandler;
-(id)initWithRequestHandler:(id)arg1 ;
-(void)queryForStatusWithKeyPaths:(id)arg1 onBehalfOfManagementChannel:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

