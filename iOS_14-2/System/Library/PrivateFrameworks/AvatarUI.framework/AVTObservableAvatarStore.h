/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<AVTAvatarStoreInternal>)store;
-(id<AVTAvatarStoreDelegate>)delegate;
-(id)initWithStore:(id)arg1 callbackQueue:(id)arg2 ;
-(BOOL)canCreateAvatar;
-(id)avatarsForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(void)setDelegate:(id<AVTAvatarStoreDelegate>)arg1 ;
-(BOOL)canCreateAvatarWithError:(id*)arg1 ;
-(void)duplicateAvatar:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)deleteAvatar:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)saveAvatarRecord:(id)arg1 thumbnailAvatar:(id)arg2 completionBlock:(/*^block*/id)arg3 thumbnailGenerationCompletionBlock:(/*^block*/id)arg4 ;
-(id)recentStickersForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(void)didUseStickerWithAvatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deleteRecentStickersWithAvatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deleteRecentStickersForChangeTracker:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteAvatarWithIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)fetchAvatarsForFetchRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

