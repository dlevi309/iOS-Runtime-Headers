/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)cacheKeyForAvatarRecord:(id)arg1 ;
-(long long)maxCount;
-(void)flush;
-(id)avatarForRecord:(id)arg1 ;
-(id<AVTUILogger>)logger;
-(id)initWithMaxStickerGeneratorCount:(long long)arg1 ;
-(id)initWithMaxStickerGeneratorCount:(long long)arg1 logger:(id)arg2 ;
-(void)flushGeneratorForRecord:(id)arg1 ;
-(id)generatorForAvatarRecord:(id)arg1 inGenerators:(id)arg2 ;
-(id)dequeueStickerGeneratorForAvatarRecord:(id)arg1 needAvatar:(BOOL)arg2 ;
-(NSMutableDictionary *)inUseStickerGenerators;
-(NSMutableDictionary *)availableStickerGenerators;
-(id)stealGeneratorForAvatarRecord:(id)arg1 inGenerators:(id)arg2 needAvatar:(BOOL)arg3 ;
-(id)dequeueStickerGeneratorForAvatarRecord:(id)arg1 ;
-(void)didStopUsingStickerGeneratorForRecord:(id)arg1 ;
@end

