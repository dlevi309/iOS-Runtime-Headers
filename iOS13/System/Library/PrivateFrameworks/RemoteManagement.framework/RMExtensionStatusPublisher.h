/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)queryForStatusWithKeyPaths:(id)arg1 onBehalfOfManagementChannel:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithRequestHandler:(id)arg1 ;
@end

