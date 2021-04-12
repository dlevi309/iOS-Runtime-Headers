/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <libobjc.A.dylib/HFCameraClipVideoAssetContextProviderDelegate.h>

@protocol HFCameraClipVideoAssetContextProviderDelegate;
@class NSOperationQueue, NSMutableDictionary, HMFUnfairLock, NSString;

@interface HFCameraClipVideoAssetContextProvider : NSObject <HFCameraClipVideoAssetContextProviderDelegate> {

	NSOperationQueue* _operationQueue;
	NSMutableDictionary* _videoContextFuturesByClipID;
	HMFUnfairLock* _lock;
	id<HFCameraClipVideoAssetContextProviderDelegate> _delegate;

}

@property (nonatomic,readonly) NSOperationQueue * operationQueue;                                              //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * videoContextFuturesByClipID;                              //@synthesize videoContextFuturesByClipID=_videoContextFuturesByClipID - In the implementation block
@property (nonatomic,readonly) HMFUnfairLock * lock;                                                           //@synthesize lock=_lock - In the implementation block
@property (nonatomic,__weak,readonly) id<HFCameraClipVideoAssetContextProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultProvider;
-(id)init;
-(id<HFCameraClipVideoAssetContextProviderDelegate>)delegate;
-(HMFUnfairLock *)lock;
-(NSOperationQueue *)operationQueue;
-(id)initWithDelegate:(id)arg1 ;
-(id)fetchVideoAssetContextForClip:(id)arg1 clipManager:(id)arg2 ;
-(id)cachedVideoAssetContextForClip:(id)arg1 clipManager:(id)arg2 ;
-(NSMutableDictionary *)videoContextFuturesByClipID;
-(id)newFetchVideoAssetContextOperationForClip:(id)arg1 clipManager:(id)arg2 ;
@end

