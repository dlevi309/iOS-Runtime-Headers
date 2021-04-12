/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface NPKStandaloneFirstUnlockCoordinator : NSObject {

	int _firstDeviceUnlockRegistrationToken;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _blocksToPerformAfterFirstDeviceUnlock;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableArray * blocksToPerformAfterFirstDeviceUnlock;              //@synthesize blocksToPerformAfterFirstDeviceUnlock=_blocksToPerformAfterFirstDeviceUnlock - In the implementation block
@property (assign,nonatomic) int firstDeviceUnlockRegistrationToken;                              //@synthesize firstDeviceUnlockRegistrationToken=_firstDeviceUnlockRegistrationToken - In the implementation block
-(id)initWithQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(void)performSubjectToFirstUnlock:(/*^block*/id)arg1 ;
-(void)_performFirstUnlockWork;
-(int)firstDeviceUnlockRegistrationToken;
-(void)setFirstDeviceUnlockRegistrationToken:(int)arg1 ;
-(NSMutableArray *)blocksToPerformAfterFirstDeviceUnlock;
-(void)setBlocksToPerformAfterFirstDeviceUnlock:(NSMutableArray *)arg1 ;
@end

