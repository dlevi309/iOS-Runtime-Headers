/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <MobileTimer/MTSnapshotScheduler.h>
#import <libobjc.A.dylib/MTTimerObserver.h>

@class MTTimerStorage, NSString;

@interface MTTimerSnapshot : MTSnapshotScheduler <MTTimerObserver> {

	MTTimerStorage* _storage;

}

@property (nonatomic,readonly) MTTimerStorage * storage;              //@synthesize storage=_storage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MTTimerStorage *)storage;
-(id)initWithStorage:(id)arg1 ;
-(void)source:(id)arg1 didAddTimers:(id)arg2 ;
-(void)source:(id)arg1 didUpdateTimers:(id)arg2 ;
-(void)source:(id)arg1 didRemoveTimers:(id)arg2 ;
-(void)source:(id)arg1 didDismissTimer:(id)arg2 ;
-(void)source:(id)arg1 didFireTimer:(id)arg2 ;
-(void)nextTimerDidChange:(id)arg1 ;
@end

