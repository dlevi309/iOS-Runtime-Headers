/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KeyboardArbiter.framework/KeyboardArbiter
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface _UIKeyboardArbiterDebug : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _importantCount;
	NSMutableArray* _entries;

}
+(id)sharedInstance;
-(id)init;
-(void)addEntry:(id)arg1 ;
-(void)getDebugInfoDictionariesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)addAsynchronousData:(/*^block*/id)arg1 ;
-(void)errorWithFormat:(const char*)arg1 ;
-(void)infoWithFormat:(const char*)arg1 ;
-(void)debugWithFormat:(const char*)arg1 ;
@end

