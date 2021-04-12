/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/


@protocol OS_dispatch_group, OS_dispatch_queue;
@class NSObject, NSString, NSArray, NSDate;

@interface PFCoalescerActivityToken : NSObject {

	NSObject*<OS_dispatch_group> _group;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSString* _reason;
	NSArray* _callStackReturnAddresses;
	NSDate* _creationDate;

}

@property (retain) NSObject*<OS_dispatch_group> group;                       //@synthesize group=_group - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> isolationQueue;              //@synthesize isolationQueue=_isolationQueue - In the implementation block
@property (retain) NSString * reason;                                        //@synthesize reason=_reason - In the implementation block
@property (retain) NSArray * callStackReturnAddresses;                       //@synthesize callStackReturnAddresses=_callStackReturnAddresses - In the implementation block
@property (retain) NSDate * creationDate;                                    //@synthesize creationDate=_creationDate - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)reason;
-(NSArray *)callStackReturnAddresses;
-(void)setGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSDate *)creationDate;
-(NSObject*<OS_dispatch_group>)group;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(id)initWithDispatchGroup:(id)arg1 reason:(id)arg2 ;
-(void)endActivity;
-(NSObject*<OS_dispatch_queue>)isolationQueue;
-(void)setIsolationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCallStackReturnAddresses:(NSArray *)arg1 ;
@end

