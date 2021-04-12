/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)gain;
-(void)setListenerPosition:(CGPoint)arg1 ;
-(CGPoint)listenerPosition;
-(id)init;
-(void)setSuspended:(BOOL)arg1 ;
-(BOOL)suspended;
-(void)setGain:(double)arg1 ;
-(void)dealloc;
-(void)makeCurrentContext;
@end

