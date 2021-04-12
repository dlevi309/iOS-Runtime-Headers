/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTUILogger;
@class NSMutableDictionary;

@interface AVTUIStickerGeneratorPool : NSObject {

	long long _maxCount;
	NSMutableDictionary* _availableStickerGenerators;
	NSMutableDictionary* _inUseStickerGenerators;
	id<AVTUILogger> _logger;

}

@property (nonatomic,readonly) long long maxCount;                                            //@synthesize maxCount=_maxCount - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * availableStickerGenerators;              //@synthesize availableStickerGenerators=_availableStickerGenerators - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * inUseStickerGenerators;                  //@synthesize inUseStickerGenerators=_inUseStickerGenerators - In the implementation block
@property (nonatomic,readonly) id<AVTUILogger> logger;                                        //@synthesize logger=_logger - In the implementation block
-(id<AVTUILogger>)logger;
-(void)flush;
-(long long)maxCount;
-(id)avatarForRecord:(id)arg1 ;
-(id)initWithMaxStickerGeneratorCount:(long long)arg1 logger:(id)arg2 ;
-(void)flushGeneratorForRecord:(id)arg1 ;
-(id)generatorForAvatarRecord:(id)arg1 inGenerators:(id)arg2 ;
-(NSMutableDictionary *)inUseStickerGenerators;
-(NSMutableDictionary *)availableStickerGenerators;
-(id)stealGeneratorForAvatarRecord:(id)arg1 inGenerators:(id)arg2 needAvatar:(BOOL)arg3 ;
-(id)dequeueStickerGeneratorForAvatarRecord:(id)arg1 needAvatar:(BOOL)arg2 ;
-(void)didStopUsingStickerGeneratorForRecord:(id)arg1 ;
@end

