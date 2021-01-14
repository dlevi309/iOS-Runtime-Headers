/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/


#import <SpriteKit/SpriteKit-Structs.h>
@class NSMutableArray;

@interface SKSoundSource : NSObject {

	unsigned _sourceId;
	NSMutableArray* _buffers;

}

@property (assign,nonatomic) BOOL shouldLoop; 
@property (assign,nonatomic) double gain; 
@property (assign,nonatomic) CGPoint position; 
@property (nonatomic,readonly) BOOL isPlaying; 
@property (nonatomic,readonly) int completedBufferCount; 
@property (nonatomic,readonly) int queuedBufferCount; 
+(id)source;
+(id)sourceWithBuffer:(id)arg1 ;
-(double)gain;
-(CGPoint)position;
-(BOOL)isPlaying;
-(id)init;
-(void)pause;
-(BOOL)play;
-(void)setGain:(double)arg1 ;
-(void)stop;
-(id)description;
-(void)setPosition:(CGPoint)arg1 ;
-(void)dealloc;
-(void)setShouldLoop:(BOOL)arg1 ;
-(BOOL)shouldLoop;
-(void)queueBuffer:(id)arg1 ;
-(int)completedBufferCount;
-(int)queuedBufferCount;
-(void)purgeCompletedBuffers;
@end

