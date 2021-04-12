/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTAvatarRecord;
@interface AVTAvatarActionsRecordUpdate : NSObject {

	BOOL _fromLeft;
	id<AVTAvatarRecord> _avatarRecord;

}

@property (nonatomic,readonly) id<AVTAvatarRecord> avatarRecord;              //@synthesize avatarRecord=_avatarRecord - In the implementation block
@property (nonatomic,readonly) BOOL fromLeft;                                 //@synthesize fromLeft=_fromLeft - In the implementation block
+(id)recordUpdateForDeletingRecord:(id)arg1 withDataSource:(id)arg2 ;
-(id<AVTAvatarRecord>)avatarRecord;
-(BOOL)fromLeft;
-(id)initWithAvatarRecord:(id)arg1 fromLeft:(BOOL)arg2 ;
@end

