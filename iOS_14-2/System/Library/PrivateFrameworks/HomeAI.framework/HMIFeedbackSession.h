/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMIHomeKitClient, NSOperationQueue, NSURLSession, NSString;

@interface HMIFeedbackSession : HMFObject <NSURLSessionDelegate, HMFLogging> {

	HMIHomeKitClient* _homeKitClient;
	NSOperationQueue* _operationQueue;
	NSURLSession* _session;
	NSString* _feedbackServiceHost;

}

@property (readonly) NSOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
@property (readonly) NSURLSession * session;                         //@synthesize session=_session - In the implementation block
@property (readonly) NSString * feedbackServiceHost;                 //@synthesize feedbackServiceHost=_feedbackServiceHost - In the implementation block
@property (readonly) HMIHomeKitClient * homeKitClient;               //@synthesize homeKitClient=_homeKitClient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSOperationQueue *)operationQueue;
-(id)init;
-(NSURLSession *)session;
-(HMIHomeKitClient *)homeKitClient;
-(NSString *)feedbackServiceHost;
@end

