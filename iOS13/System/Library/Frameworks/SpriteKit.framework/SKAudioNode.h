/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AVAudioNode;

@interface SKAudioNode : SKNode <NSSecureCoding> {

	SKCAudioNode* _skcAudioNode;
	BOOL _autoplayLooped;
	BOOL _positional;

}

@property (nonatomic,retain) AVAudioNode * avAudioNode; 
@property (assign,nonatomic) BOOL autoplayLooped;                              //@synthesize autoplayLooped=_autoplayLooped - In the implementation block
@property (assign,getter=isPositional,nonatomic) BOOL positional;              //@synthesize positional=_positional - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_audioURLWithName:(id)arg1 bundle:(id)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)commonInit;
-(id)audioURL;
-(void)setAudioURL:(id)arg1 ;
-(id)initWithAVAudioNode:(id)arg1 ;
-(id)audioFile;
-(void)setPositional:(BOOL)arg1 ;
-(BOOL)isPositional;
-(id)initWithFileNamed:(id)arg1 ;
-(BOOL)isEqualToNode:(id)arg1 ;
-(void)setAutoplayLooped:(BOOL)arg1 ;
-(void)setAudioFileName:(id)arg1 ;
-(id)audioFileName;
-(void)_setAudioName:(id)arg1 bundle:(id)arg2 ;
-(void)setAvAudioNode:(AVAudioNode *)arg1 ;
-(BOOL)autoplayLooped;
-(id)initWithFileNamed:(id)arg1 bundle:(id)arg2 ;
-(AVAudioNode *)avAudioNode;
-(void)_playLooped;
-(void)_connectToScene:(id)arg1 ;
-(SKCNode*)_makeBackingNode;
-(void)_didMakeBackingNode;
@end

