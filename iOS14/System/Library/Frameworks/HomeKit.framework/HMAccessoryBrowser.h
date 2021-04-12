/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)setBrowsing:(BOOL)arg1 ;
-(NSUUID *)uuid;
-(BOOL)isBrowsing;
-(id)init;
-(id<HMAccessoryBrowserDelegate>)delegate;
-(void)_start;
-(_HMContext *)context;
-(void)setDelegate:(id<HMAccessoryBrowserDelegate>)arg1 ;
-(void)handleStartWithError:(id)arg1 response:(id)arg2 ;
-(void)setGenerationCounter:(unsigned long long)arg1 ;
-(void)stopSearchingForNewAccessories;
-(void)startSearchingForNewAccessories;
-(void)setAccessories:(HMMutableArray *)arg1 ;
-(HMMutableArray *)accessories;
-(void)_startSearchingForNewAccessories;
-(void)_fetchNewAccessoriesWithPrivacyCheck;
-(void)stopSearchingForNewAccessoriesWithError:(id)arg1 ;
-(void)_stopSearchingForNewAccessoriesWithError:(id)arg1 ;
-(NSArray *)discoveredAccessories;
-(void)_updateNewAccessories:(id)arg1 ;
-(void)_fetchNewAccessories;
-(void)_handleNewAccessoriesFound:(id)arg1 ;
-(void)_handleNewAccessoriesRemoved:(id)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(unsigned long long)generationCounter;
-(void)_registerNotificationHandlers;
-(void)dealloc;
@end

