/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)completion;
-(id)description;
-(NSString *)queryID;
-(NSObject*<OS_dispatch_queue>)responseQueue;
-(id)initWithResponseQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

