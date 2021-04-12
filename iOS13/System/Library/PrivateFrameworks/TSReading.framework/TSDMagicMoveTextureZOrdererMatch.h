/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@class TSDTextureSet, TSDMagicMoveAnimationMatch;

@interface TSDMagicMoveTextureZOrdererMatch : NSObject {

	BOOL _isOutgoingZIndexUnmatched;
	BOOL _isIncomingZIndexUnmatched;
	TSDTextureSet* _outgoingTexture;
	TSDTextureSet* _incomingTexture;
	long long _outgoingZIndex;
	long long _incomingZIndex;
	TSDMagicMoveAnimationMatch* _animationMatch;

}

@property (nonatomic,readonly) TSDTextureSet * outgoingTexture;                          //@synthesize outgoingTexture=_outgoingTexture - In the implementation block
@property (nonatomic,readonly) TSDTextureSet * incomingTexture;                          //@synthesize incomingTexture=_incomingTexture - In the implementation block
@property (assign,nonatomic) long long outgoingZIndex;                                   //@synthesize outgoingZIndex=_outgoingZIndex - In the implementation block
@property (assign,nonatomic) long long incomingZIndex;                                   //@synthesize incomingZIndex=_incomingZIndex - In the implementation block
@property (nonatomic,readonly) BOOL isOutgoingZIndexUnmatched;                           //@synthesize isOutgoingZIndexUnmatched=_isOutgoingZIndexUnmatched - In the implementation block
@property (nonatomic,readonly) BOOL isIncomingZIndexUnmatched;                           //@synthesize isIncomingZIndexUnmatched=_isIncomingZIndexUnmatched - In the implementation block
@property (nonatomic,readonly) TSDMagicMoveAnimationMatch * animationMatch;              //@synthesize animationMatch=_animationMatch - In the implementation block
-(id)description;
-(TSDTextureSet *)incomingTexture;
-(TSDTextureSet *)outgoingTexture;
-(TSDMagicMoveAnimationMatch *)animationMatch;
-(long long)outgoingZIndex;
-(long long)incomingZIndex;
-(id)initWithAnimationMatch:(id)arg1 ;
-(BOOL)intersectsZOrdererMatch:(id)arg1 withAttemptedZIndex:(long long)arg2 ;
-(BOOL)intersectsZOrdererMatch:(id)arg1 ;
-(double)intersectionPercentWithZOrdererMatch:(id)arg1 ;
-(double)interpolatedZIndexAtPercent:(double)arg1 ;
-(void)setOutgoingZIndex:(long long)arg1 ;
-(void)setIncomingZIndex:(long long)arg1 ;
-(BOOL)isOutgoingZIndexUnmatched;
-(BOOL)isIncomingZIndexUnmatched;
@end

