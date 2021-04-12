/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface HAPBTLEReachabilityScanTuple : HMFObject {

	/*^block*/id _completion;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _identifier;

}

@property (nonatomic,copy) id completion;                                     //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
+(id)reachabilityScanTupleWithCompletion:(/*^block*/id)arg1 workQueue:(id)arg2 identifier:(id)arg3 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
@end

