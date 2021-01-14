/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)fromLeft;
-(id<AVTAvatarRecord>)avatarRecord;
-(id)initWithAvatarRecord:(id)arg1 fromLeft:(BOOL)arg2 ;
@end

