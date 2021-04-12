/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OSASubmissionClient.framework/OSASubmissionClient
*/

#import <OSASubmissionClient/OSASubmissionServices.h>

@protocol OSASubmissionServices;
@class NSXPCConnection, NSString;

@interface OSASubmissionClient : NSObject <OSASubmissionServices> {

	NSXPCConnection* _connection;
	id<OSASubmissionServices> _synchRemoteObjectProxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)submitWithOptions:(id)arg1 resultsCallback:(/*^block*/id)arg2 ;
-(id)initWithErrorHandler:(/*^block*/id)arg1 ;
@end

