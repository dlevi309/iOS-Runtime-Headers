/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/MTTimerObserver.h>

@protocol NAScheduler;
@class MTTimerStorage, NSMutableSet, NSString;

@interface MTTimerIntentDonor : NSObject <MTTimerObserver> {

	MTTimerStorage* _storage;
	NSMutableSet* _donatedTimerIDs;
	id<NAScheduler> _serializer;

}

@property (nonatomic,readonly) MTTimerStorage * storage;                    //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) NSMutableSet * donatedTimerIDs;              //@synthesize donatedTimerIDs=_donatedTimerIDs - In the implementation block
@property (nonatomic,retain) id<NAScheduler> serializer;                    //@synthesize serializer=_serializer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MTTimerStorage *)storage;
-(id)initWithStorage:(id)arg1 ;
-(id<NAScheduler>)serializer;
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(void)source:(id)arg1 didAddTimers:(id)arg2 ;
-(void)source:(id)arg1 didUpdateTimers:(id)arg2 ;
-(void)source:(id)arg1 didRemoveTimers:(id)arg2 ;
-(void)source:(id)arg1 didDismissTimer:(id)arg2 ;
-(void)source:(id)arg1 didFireTimer:(id)arg2 ;
-(void)nextTimerDidChange:(id)arg1 ;
-(void)_queue_donateCreateTimerIntent:(id)arg1 source:(id)arg2 ;
-(NSMutableSet *)donatedTimerIDs;
@end

