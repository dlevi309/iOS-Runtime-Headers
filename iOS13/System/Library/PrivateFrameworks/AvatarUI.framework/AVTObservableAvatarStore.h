/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTAvatarStoreInternal.h>

@protocol AVTAvatarStoreDelegate, AVTAvatarStoreInternal, OS_dispatch_queue;
@class NSObject, NSString;

@interface AVTObservableAvatarStore : NSObject <AVTAvatarStoreInternal> {

	id<AVTAvatarStoreDelegate> _delegate;
	id<AVTAvatarStoreInternal> _store;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,readonly) id<AVTAvatarStoreInternal> store;                                       //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> callbackQueue;                             //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (assign,nonatomic,__weak) id<AVTAvatarStoreDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<AVTStickerBackendDelegate> stickerBackendDelegate; 
+(unsigned long long)maximumNumberOfFetchableAvatars;
+(unsigned long long)maximumNumberOfSavableAvatars;
-(id<AVTAvatarStoreDelegate>)delegate;
-(void)setDelegate:(id<AVTAvatarStoreDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(id<AVTAvatarStoreInternal>)store;
-(BOOL)canCreateAvatar;
-(id)avatarsForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(void)fetchAvatarsForFetchRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)canCreateAvatarWithError:(id*)arg1 ;
-(void)deleteAvatar:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)recentStickersForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(void)didUseStickerWithAvatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deleteRecentStickersWithAvatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deleteRecentStickersForChangeTracker:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)saveAvatarRecord:(id)arg1 thumbnailAvatar:(id)arg2 completionBlock:(/*^block*/id)arg3 thumbnailGenerationCompletionBlock:(/*^block*/id)arg4 ;
-(void)deleteAvatarWithIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)duplicateAvatar:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithStore:(id)arg1 callbackQueue:(id)arg2 ;
@end

