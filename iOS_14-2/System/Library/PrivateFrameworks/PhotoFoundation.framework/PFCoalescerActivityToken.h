/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_group>)group;
-(void)setIsolationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSObject*<OS_dispatch_queue>)isolationQueue;
-(void)endActivity;
-(NSArray *)callStackReturnAddresses;
-(id)description;
-(NSDate *)creationDate;
-(NSString *)reason;
-(void)setCallStackReturnAddresses:(NSArray *)arg1 ;
-(id)initWithDispatchGroup:(id)arg1 reason:(id)arg2 ;
-(void)setReason:(NSString *)arg1 ;
-(void)dealloc;
@end

