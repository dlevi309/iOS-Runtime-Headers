/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)assertNotRunningInAccessQueue;
-(void)_performSynchronousBlockInSerialQueue:(/*^block*/id)arg1 ;
-(NSString *)label;
-(void)performAsynchronousBlock:(/*^block*/id)arg1 ;
-(void)performSynchronousBlock:(/*^block*/id)arg1 ;
-(id)initWithLabel:(id)arg1 appendUUIDToLabel:(BOOL)arg2 ;
@end

