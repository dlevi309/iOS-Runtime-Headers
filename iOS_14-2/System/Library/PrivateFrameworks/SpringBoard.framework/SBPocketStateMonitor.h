/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/CMPocketStateDelegate.h>

@protocol OS_dispatch_queue;
@class CMPocketStateManager, NSHashTable, NSObject, NSString;

@interface SBPocketStateMonitor : NSObject <CMPocketStateDelegate> {

	CMPocketStateManager* _pocketStateManager;
	long long _pocketState;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _calloutQueue;

}

@property (nonatomic,readonly) long long pocketState;               //@synthesize pocketState=_pocketState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)addObserver:(id)arg1 ;
-(id)init;
-(long long)pocketState;
-(void)pocketStateManager:(id)arg1 didUpdateState:(long long)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(void)dealloc;
-(id)initWithCMPocketStateManager:(id)arg1 calloutQueue:(id)arg2 ;
@end

