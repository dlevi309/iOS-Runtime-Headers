/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/


#import <SpriteKit/SpriteKit-Structs.h>
@interface SKSoundContext : NSObject {

	ALCdevice_structRef _device;
	ALCcontext_structRef _context;
	BOOL _suspended;

}

@property (assign,nonatomic) double gain; 
@property (assign,nonatomic) CGPoint listenerPosition; 
@property (assign,nonatomic) BOOL suspended; 
+(id)context;
+(id)currentContext;
-(id)init;
-(void)dealloc;
-(void)setSuspended:(BOOL)arg1 ;
-(BOOL)suspended;
-(void)setGain:(double)arg1 ;
-(double)gain;
-(void)setListenerPosition:(CGPoint)arg1 ;
-(CGPoint)listenerPosition;
-(void)makeCurrentContext;
@end

