/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@class TSDTextureSet, NSLock;

@interface TSDMagicMoveAnimationMatch : NSObject {

	TSDTextureSet* _morphTexture;
	TSDTextureSet* _morphQueuedTexture;
	TSDTextureSet* _morphQueuedForDeletionTexture;
	NSLock* _morphTextureUpdateLock;
	BOOL _isUsingMorphTexture;
	BOOL _didUseMorphTexture;
	BOOL _hasBeenTornDown;
	BOOL _isMorphMatch;
	BOOL _isTextStyleIdenticalExceptSize;
	BOOL _shouldDisableTextMorphing;
	TSDTextureSet* _outgoingTexture;
	TSDTextureSet* _incomingTexture;

}

@property (nonatomic,retain) TSDTextureSet * outgoingTexture;                  //@synthesize outgoingTexture=_outgoingTexture - In the implementation block
@property (nonatomic,retain) TSDTextureSet * incomingTexture;                  //@synthesize incomingTexture=_incomingTexture - In the implementation block
@property (assign,nonatomic) BOOL isMorphMatch;                                //@synthesize isMorphMatch=_isMorphMatch - In the implementation block
@property (nonatomic,readonly) BOOL isMatched; 
@property (assign,nonatomic) BOOL isTextStyleIdenticalExceptSize;              //@synthesize isTextStyleIdenticalExceptSize=_isTextStyleIdenticalExceptSize - In the implementation block
@property (assign,nonatomic) BOOL shouldDisableTextMorphing;                   //@synthesize shouldDisableTextMorphing=_shouldDisableTextMorphing - In the implementation block
+(unsigned long long)magicMoveMorphTexturesPerSecond;
+(id)animationMatch;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)teardown;
-(BOOL)isMorphMatch;
-(BOOL)isMatched;
-(TSDTextureSet *)incomingTexture;
-(TSDTextureSet *)outgoingTexture;
-(void)addMorphTexture:(id)arg1 ;
-(id)lockCurrentMorphTexture;
-(void)unlockCurrentMorphTexture;
-(void)setOutgoingTexture:(TSDTextureSet *)arg1 ;
-(void)setIncomingTexture:(TSDTextureSet *)arg1 ;
-(void)setIsMorphMatch:(BOOL)arg1 ;
-(BOOL)isTextStyleIdenticalExceptSize;
-(void)setIsTextStyleIdenticalExceptSize:(BOOL)arg1 ;
-(BOOL)shouldDisableTextMorphing;
-(void)setShouldDisableTextMorphing:(BOOL)arg1 ;
@end

