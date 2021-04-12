/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface TLAccessQueue : NSObject {

	NSString* _threadLocalStorageKey;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSString* _label;

}

@property (nonatomic,readonly) NSString * label;              //@synthesize label=_label - In the implementation block
-(NSString *)label;
-(id)initWithLabel:(id)arg1 appendUUIDToLabel:(BOOL)arg2 ;
-(void)performSynchronousBlock:(/*^block*/id)arg1 ;
-(void)assertNotRunningInAccessQueue;
-(void)_performSynchronousBlockInSerialQueue:(/*^block*/id)arg1 ;
-(void)performAsynchronousBlock:(/*^block*/id)arg1 ;
@end

