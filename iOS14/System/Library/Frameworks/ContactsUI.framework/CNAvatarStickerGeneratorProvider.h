/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<AVTAvatarRecord>)avatarRecord;
-(id)initWithAvatarRecord:(id)arg1 ;
-(void)setAvatarRecord:(id<AVTAvatarRecord>)arg1 ;
-(void)setGenerator:(AVTStickerGenerator *)arg1 ;
-(AVTStickerGenerator *)generator;
@end

