/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface HMDAccessoryRetrievalCompletionTuple : HMFObject {

	long long _linkType;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _completion;

}

@property (assign,nonatomic) long long linkType;                              //@synthesize linkType=_linkType - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id completion;                                     //@synthesize completion=_completion - In the implementation block
+(id)tupleWithLinkType:(long long)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setCompletion:(id)arg1 ;
-(void)setLinkType:(long long)arg1 ;
-(long long)linkType;
-(id)completion;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

