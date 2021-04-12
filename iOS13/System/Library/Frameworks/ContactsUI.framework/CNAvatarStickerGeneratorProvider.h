/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@protocol AVTAvatarRecord;
@class AVTStickerGenerator;

@interface CNAvatarStickerGeneratorProvider : NSObject {

	AVTStickerGenerator* _generator;
	id<AVTAvatarRecord> _avatarRecord;

}

@property (nonatomic,retain) AVTStickerGenerator * generator;               //@synthesize generator=_generator - In the implementation block
@property (nonatomic,retain) id<AVTAvatarRecord> avatarRecord;              //@synthesize avatarRecord=_avatarRecord - In the implementation block
-(AVTStickerGenerator *)generator;
-(void)setGenerator:(AVTStickerGenerator *)arg1 ;
-(id)initWithAvatarRecord:(id)arg1 ;
-(id<AVTAvatarRecord>)avatarRecord;
-(void)setAvatarRecord:(id<AVTAvatarRecord>)arg1 ;
@end

