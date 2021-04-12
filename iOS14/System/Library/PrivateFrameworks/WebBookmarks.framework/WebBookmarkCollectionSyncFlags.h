/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
*/


@class NSMutableSet;

@interface WebBookmarkCollectionSyncFlags : NSObject {

	BOOL _syncAllowed;
	BOOL _postSyncNotificationWhenUnlocking;
	BOOL _unlockSyncRequested;
	int _syncLockFileDescriptor;
	long long _syncNotificationType;
	NSMutableSet* _lockSyncHoldRequestorPointers;

}

@property (nonatomic,readonly) BOOL syncAllowed;                                          //@synthesize syncAllowed=_syncAllowed - In the implementation block
@property (assign,nonatomic) int syncLockFileDescriptor;                                  //@synthesize syncLockFileDescriptor=_syncLockFileDescriptor - In the implementation block
@property (assign,nonatomic) long long syncNotificationType;                              //@synthesize syncNotificationType=_syncNotificationType - In the implementation block
@property (assign,nonatomic) BOOL postSyncNotificationWhenUnlocking;                      //@synthesize postSyncNotificationWhenUnlocking=_postSyncNotificationWhenUnlocking - In the implementation block
@property (nonatomic,readonly) NSMutableSet * lockSyncHoldRequestorPointers;              //@synthesize lockSyncHoldRequestorPointers=_lockSyncHoldRequestorPointers - In the implementation block
@property (assign,nonatomic) BOOL unlockSyncRequested;                                    //@synthesize unlockSyncRequested=_unlockSyncRequested - In the implementation block
-(void)setPostSyncNotificationWhenUnlocking:(BOOL)arg1 ;
-(BOOL)unlockSyncRequested;
-(BOOL)syncAllowed;
-(void)setSyncNotificationType:(long long)arg1 ;
-(BOOL)postSyncNotificationWhenUnlocking;
-(NSMutableSet *)lockSyncHoldRequestorPointers;
-(void)setSyncLockFileDescriptor:(int)arg1 ;
-(void)setUnlockSyncRequested:(BOOL)arg1 ;
-(id)initWithSyncAllowed:(BOOL)arg1 ;
-(long long)syncNotificationType;
-(int)syncLockFileDescriptor;
@end

