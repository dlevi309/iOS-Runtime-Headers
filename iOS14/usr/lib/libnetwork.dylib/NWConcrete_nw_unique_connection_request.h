/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libobjc.A.dylib/OS_nw_unique_connection_request.h>

@protocol OS_nw_endpoint, OS_nw_parameters, OS_nw_path_evaluator;
@class NSObject, NWConcrete_nw_connection, NSString;

@interface NWConcrete_nw_unique_connection_request : NSObject <OS_nw_unique_connection_request> {

	NSObject*<OS_nw_endpoint> endpoint;
	NSObject*<OS_nw_parameters> userParameters;
	char service[436];
	unsigned long long sequenceNumber;
	unsigned long long uniqueID;
	unsigned char uuid[16];
	unsigned char signature[64];
	char* incomingReqBytesToVerify;
	unsigned incomingReqBytesToVerifyLen;
	NWConcrete_nw_connection* connection;
	NSObject*<OS_nw_path_evaluator> pathEvaluator;
	/*^block*/id requestCompletionBlock;
	unsigned isIncoming : 1;
	unsigned isPending : 1;
	unsigned pendingRequestAccepted : 1;
	unsigned isWaitingForListenerReady : 1;
	unsigned isWaitingForActiveConnection : 1;
	unsigned hasRequestedPubKey : 1;
	unsigned hasBeenProcessed : 1;
	unsigned isWaitingForPathUpdate : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(void)dealloc;
@end

