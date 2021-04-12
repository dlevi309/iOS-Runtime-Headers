/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMFMessageReceiver.h>

@protocol HMAccessoryBrowserDelegate;
@class HMFUnfairLock, _HMContext, NSUUID, HMMutableArray, NSArray, NSString;

@interface HMAccessoryBrowser : NSObject <HMFMessageReceiver> {

	HMFUnfairLock* _lock;
	BOOL _browsing;
	id<HMAccessoryBrowserDelegate> _delegate;
	_HMContext* _context;
	NSUUID* _uuid;
	HMMutableArray* _accessories;
	unsigned long long _generationCounter;

}

@property (nonatomic,readonly) _HMContext * context;                                          //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                   //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) HMMutableArray * accessories;                                    //@synthesize accessories=_accessories - In the implementation block
@property (assign,nonatomic) unsigned long long generationCounter;                            //@synthesize generationCounter=_generationCounter - In the implementation block
@property (assign,getter=isBrowsing,nonatomic) BOOL browsing;                                 //@synthesize browsing=_browsing - In the implementation block
@property (assign,nonatomic,__weak) id<HMAccessoryBrowserDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * discoveredAccessories; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
-(id)init;
-(void)dealloc;
-(id<HMAccessoryBrowserDelegate>)delegate;
-(void)setDelegate:(id<HMAccessoryBrowserDelegate>)arg1 ;
-(NSUUID *)uuid;
-(_HMContext *)context;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)_start;
-(HMMutableArray *)accessories;
-(BOOL)isBrowsing;
-(void)setBrowsing:(BOOL)arg1 ;
-(unsigned long long)generationCounter;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)stopSearchingForNewAccessories;
-(void)startSearchingForNewAccessories;
-(void)_registerNotificationHandlers;
-(void)handleStartWithError:(id)arg1 response:(id)arg2 ;
-(void)setGenerationCounter:(unsigned long long)arg1 ;
-(void)setAccessories:(HMMutableArray *)arg1 ;
-(void)_startSearchingForNewAccessories;
-(void)_fetchNewAccessoriesWithPrivacyCheck;
-(void)_stopSearchingForNewAccessories;
-(NSArray *)discoveredAccessories;
-(void)_updateNewAccessories:(id)arg1 ;
-(void)_fetchNewAccessories;
-(void)_handleNewAccessoriesFound:(id)arg1 ;
-(void)_handleNewAccessoriesRemoved:(id)arg1 ;
@end

