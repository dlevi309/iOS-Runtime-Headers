/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithURL:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)commonInit;
-(id)initWithCoder:(id)arg1 ;
-(id)audioURL;
-(BOOL)isEqualToNode:(id)arg1 ;
-(void)setAudioURL:(id)arg1 ;
-(id)audioFileName;
-(void)setAudioFileName:(id)arg1 ;
-(id)audioFile;
-(id)initWithAVAudioNode:(id)arg1 ;
-(void)setPositional:(BOOL)arg1 ;
-(BOOL)isPositional;
-(id)initWithFileNamed:(id)arg1 ;
-(void)setAutoplayLooped:(BOOL)arg1 ;
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

