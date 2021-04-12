/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface HMDFMFQuery : HMFObject {

	NSString* _queryID;
	NSObject*<OS_dispatch_queue> _responseQueue;
	/*^block*/id _completion;

}

@property (nonatomic,readonly) NSString * queryID;                                      //@synthesize queryID=_queryID - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> responseQueue;              //@synthesize responseQueue=_responseQueue - In the implementation block
@property (nonatomic,readonly) id completion;                                           //@synthesize completion=_completion - In the implementation block
-(id)description;
-(id)completion;
-(NSString *)queryID;
-(NSObject*<OS_dispatch_queue>)responseQueue;
-(id)initWithResponseQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

