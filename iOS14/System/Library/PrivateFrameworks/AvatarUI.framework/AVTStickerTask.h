/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@class NSString, NSIndexPath;

@interface AVTStickerTask : NSObject {

	/*^block*/id _task;
	NSString* _avatarRecordIdentifier;
	NSIndexPath* _indexPath;
	unsigned long long _stickerType;

}

@property (nonatomic,readonly) id task;                                        //@synthesize task=_task - In the implementation block
@property (nonatomic,readonly) NSString * avatarRecordIdentifier;              //@synthesize avatarRecordIdentifier=_avatarRecordIdentifier - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPath;                        //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,readonly) unsigned long long stickerType;                 //@synthesize stickerType=_stickerType - In the implementation block
+(id)stickerTaskForSchedulerTask:(/*^block*/id)arg1 avatarRecordIdentifier:(id)arg2 indexPath:(id)arg3 stickerType:(unsigned long long)arg4 ;
-(id)task;
-(NSIndexPath *)indexPath;
-(id)description;
-(unsigned long long)stickerType;
-(NSString *)avatarRecordIdentifier;
-(id)initWithTask:(/*^block*/id)arg1 avatarRecordIdentifier:(id)arg2 indexPath:(id)arg3 stickerType:(unsigned long long)arg4 ;
@end

