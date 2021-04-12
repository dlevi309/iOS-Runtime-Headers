/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KeyboardArbiter.framework/KeyboardArbiter
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface _UIKeyboardArbiterDebug : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _importantCount;
	NSMutableArray* _entries;
	BOOL _disable;
	BOOL _pause;

}

@property (assign,nonatomic) BOOL pause;              //@synthesize pause=_pause - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)addAsynchronousData:(/*^block*/id)arg1 ;
-(BOOL)pause;
-(void)addEntry:(id)arg1 ;
-(void)getDebugInfoDictionariesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)infoWithFormat:(const char*)arg1 ;
-(void)setPause:(BOOL)arg1 ;
-(void)debugWithFormat:(const char*)arg1 ;
-(void)errorWithFormat:(const char*)arg1 ;
@end

