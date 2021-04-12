/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


#import <SceneKit/SceneKit-Structs.h>
@class AVAudioNode, AVAudioPlayerNode, SCNAudioSource;

@interface SCNAudioPlayer : NSObject {

	AVAudioNode* _audioNode;
	AVAudioPlayerNode* _audioPlayer;
	SCNAudioSource* _audioSource;
	C3DNodeRef _nodeRef;
	C3DSceneRef _scene;
	BOOL _customAudioNode;
	BOOL _completed;
	BOOL _shouldRecycle;
	/*^block*/id willStartPlayback;
	/*^block*/id didFinishPlayback;

}

@property (readonly) C3DSceneRef scene;                                   //@synthesize scene=_scene - In the implementation block
@property (readonly) BOOL customAudioNode;                                //@synthesize customAudioNode=_customAudioNode - In the implementation block
@property (assign) BOOL completed;                                        //@synthesize completed=_completed - In the implementation block
@property (readonly) AVAudioPlayerNode * audioPlayer;                     //@synthesize audioPlayer=_audioPlayer - In the implementation block
@property (nonatomic,copy) id willStartPlayback; 
@property (nonatomic,copy) id didFinishPlayback; 
@property (nonatomic,readonly) AVAudioNode * audioNode;                   //@synthesize audioNode=_audioNode - In the implementation block
@property (nonatomic,readonly) SCNAudioSource * audioSource;              //@synthesize audioSource=_audioSource - In the implementation block
+(id)audioPlayerWithAVAudioNode:(id)arg1 ;
+(id)audioPlayerWithSource:(id)arg1 ;
-(C3DSceneRef)scene;
-(id)initWithSource:(id)arg1 ;
-(BOOL)completed;
-(void)play;
-(AVAudioPlayerNode *)audioPlayer;
-(void)recycle;
-(void)setCompleted:(BOOL)arg1 ;
-(void)reset;
-(C3DNodeRef)nodeRef;
-(void)dealloc;
-(SCNAudioSource *)audioSource;
-(id)initWithAVAudioNode:(id)arg1 ;
-(void)setWillStartPlayback:(id)arg1 ;
-(void)setDidFinishPlayback:(id)arg1 ;
-(id)didFinishPlayback;
-(id)willStartPlayback;
-(id)audioBufferFormat;
-(void)setNodeRef:(C3DNodeRef)arg1 ;
-(const void*)__CFObject;
-(AVAudioNode *)audioNode;
-(BOOL)customAudioNode;
@end

