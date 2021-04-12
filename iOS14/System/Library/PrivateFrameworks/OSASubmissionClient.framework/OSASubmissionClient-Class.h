/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithErrorHandler:(/*^block*/id)arg1 ;
-(void)submitWithOptions:(id)arg1 resultsCallback:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

