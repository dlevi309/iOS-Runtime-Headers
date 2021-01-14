/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
*/

#import <DigitalTouchShared/DigitalTouchShared-Structs.h>
#import <DigitalTouchShared/ETMessage.h>

@class SKSpriteNode, NSMutableArray;

@interface ETAngerMessage : ETMessage {

	SKSpriteNode* _anger;
	NSMutableArray* _points;
	NSMutableArray* _delays;
	double _duration;
	CGPoint _normalizedCenter;

}

@property (assign,nonatomic) CGPoint normalizedCenter;              //@synthesize normalizedCenter=_normalizedCenter - In the implementation block
@property (assign,nonatomic) double duration;                       //@synthesize duration=_duration - In the implementation block
+(unsigned short)messageType;
-(void)setDuration:(double)arg1 ;
-(id)init;
-(void)stopPlaying;
-(CGPoint)normalizedCenter;
-(void)setNormalizedCenter:(CGPoint)arg1 ;
-(double)duration;
-(id)archiveData;
-(id)initWithArchiveData:(id)arg1 ;
-(id)messageTypeAsString;
-(double)messageDuration;
-(void)setNormalizedPoint:(CGPoint)arg1 atRelativeTime:(double)arg2 inScene:(id)arg3 ;
-(void)displayInScene:(id)arg1 ;
-(void)_updateCenterFromNormalizedPoint:(CGPoint)arg1 inScene:(id)arg2 ;
@end

