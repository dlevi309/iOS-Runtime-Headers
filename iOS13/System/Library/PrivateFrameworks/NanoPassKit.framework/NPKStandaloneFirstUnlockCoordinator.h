/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithQueue:(id)arg1 ;
-(void)performSubjectToFirstUnlock:(/*^block*/id)arg1 ;
-(void)_performFirstUnlockWork;
-(int)firstDeviceUnlockRegistrationToken;
-(void)setFirstDeviceUnlockRegistrationToken:(int)arg1 ;
-(NSMutableArray *)blocksToPerformAfterFirstDeviceUnlock;
-(void)setBlocksToPerformAfterFirstDeviceUnlock:(NSMutableArray *)arg1 ;
@end

