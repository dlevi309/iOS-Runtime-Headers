/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <libobjc.A.dylib/HFMediaObjectObserver.h>
#import <libobjc.A.dylib/HFMediaSessionObserver.h>
#import <libobjc.A.dylib/HFMediaValueSource.h>
#import <libobjc.A.dylib/HFHomeKitItemProtocol.h>

@protocol HFMediaProfileContainer;
@class NSMutableArray, NSError, NSString;

@interface HFMediaValueManager : NSObject <HFMediaObjectObserver, HFMediaSessionObserver, HFMediaValueSource, HFHomeKitItemProtocol> {

	BOOL _hasPendingWrites;
	id<HFMediaProfileContainer> _mediaProfileContainer;
	NSMutableArray* _transactionStack;
	NSError* _cachedPlaybackStateWriteError;

}

@property (nonatomic,retain) NSMutableArray * transactionStack;                                       //@synthesize transactionStack=_transactionStack - In the implementation block
@property (nonatomic,retain) NSError * cachedPlaybackStateWriteError;                                 //@synthesize cachedPlaybackStateWriteError=_cachedPlaybackStateWriteError - In the implementation block
@property (nonatomic,__weak,readonly) id<HFMediaProfileContainer> mediaProfileContainer;              //@synthesize mediaProfileContainer=_mediaProfileContainer - In the implementation block
@property (nonatomic,readonly) BOOL hasPendingWrites;                                                 //@synthesize hasPendingWrites=_hasPendingWrites - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
-(id)init;
-(void)mediaObject:(id)arg1 didUpdateMediaSession:(id)arg2 ;
-(void)mediaSession:(id)arg1 didUpdatePlaybackState:(long long)arg2 ;
-(id<HFHomeKitObject>)homeKitObject;
-(id)initWithMediaProfileContainer:(id)arg1 ;
-(id<HFMediaProfileContainer>)mediaProfileContainer;
-(BOOL)hasPendingWritesForRouteID:(id)arg1 ;
-(NSMutableArray *)transactionStack;
-(long long)lastPlaybackStateForProfileForRouteID:(id)arg1 ;
-(void)_updateCachedPlaybackStateWriteError:(id)arg1 operationType:(id)arg2 notifyDelegates:(BOOL)arg3 ;
-(void)_notifyDelegatesWillUpdatePlaybackState:(long long)arg1 mediaSession:(id)arg2 ;
-(void)_clearCachedPlaybackStateWriteErrorWithReason:(id)arg1 notifyDelegates:(BOOL)arg2 ;
-(void)_updateLastPlaybackState:(long long)arg1 sender:(SEL)arg2 notifyWillUpdate:(BOOL)arg3 notifyDidUpdate:(BOOL)arg4 ;
-(NSError *)cachedPlaybackStateWriteError;
-(void)_notifyDelegatesDidUpdatePlaybackState:(long long)arg1 mediaSession:(id)arg2 ;
-(void)_notifyDelegatesFailedToUpdatePlaybackStateWithError:(id)arg1 mediaSession:(id)arg2 ;
-(BOOL)hasPendingWrites;
-(id)mediaProfileContainerForRouteID:(id)arg1 ;
-(id)writePlaybackState:(long long)arg1 playbackArchive:(id)arg2 forRouteID:(id)arg3 ;
-(id)cachedPlaybackStateWriteErrorForRouteID:(id)arg1 ;
-(void)setTransactionStack:(NSMutableArray *)arg1 ;
-(void)setCachedPlaybackStateWriteError:(NSError *)arg1 ;
@end

