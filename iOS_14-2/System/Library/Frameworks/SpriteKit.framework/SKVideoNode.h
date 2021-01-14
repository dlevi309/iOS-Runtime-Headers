/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>

@class NSString, NSURL, AVPlayer;

@interface SKVideoNode : SKNode {

	SKCVideoNode* _skcVideoNode;
	BOOL _isUsingKVO;
	NSString* _videoFileName;
	NSURL* _videoFileURL;
	AVPlayer* _player;

}

@property (nonatomic,retain) AVPlayer * _player; 
@property (assign,nonatomic) CGSize size; 
@property (assign,nonatomic) CGPoint anchorPoint; 
+(BOOL)supportsSecureCoding;
+(id)debugHierarchyPropertyDescriptions;
+(id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id*)arg3 outError:(id*)arg4 ;
+(id)videoNodeWithFileNamed:(id)arg1 ;
+(id)videoNodeWithURL:(id)arg1 ;
+(id)videoNodeWithVideoFileNamed:(id)arg1 ;
+(id)videoNodeWithVideoURL:(id)arg1 ;
+(id)videoNodeWithAVPlayer:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(void)pause;
-(CGSize)size;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)play;
-(CGPoint)anchorPoint;
-(void)commonInit;
-(id)description;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToNode:(id)arg1 ;
-(AVPlayer *)_player;
-(void)dealloc;
-(id)initWithVideoURL:(id)arg1 ;
-(id)initWithFileNamed:(id)arg1 ;
-(SKCNode*)_makeBackingNode;
-(void)_didMakeBackingNode;
-(id)initWithAVPlayer:(id)arg1 ;
-(void)set_player:(AVPlayer *)arg1 ;
-(id)initWithVideoFileNamed:(id)arg1 ;
@end

