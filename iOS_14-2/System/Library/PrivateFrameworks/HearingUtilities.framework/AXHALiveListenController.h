/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
*/


@protocol AXHALiveListenDelegate;
#import <HearingUtilities/HearingUtilities-Structs.h>
@class SBSStatusBarStyleOverridesAssertion;

@interface AXHALiveListenController : NSObject {

	SBSStatusBarStyleOverridesAssertion* _llStatusBarAssertion;
	float _noise;
	float _signal;
	OpaqueExtAudioFileRef _debugAudioFile;
	BOOL _exportsLiveListenToFile;
	OpaqueAudioComponentInstanceRef _mixerUnit;
	OpaqueAudioComponentInstanceRef _rioUnit;
	BOOL isListening;
	BOOL _didInitializeAudioUnit;
	id<AXHALiveListenDelegate> _delegate;

}

@property (assign,nonatomic) BOOL didInitializeAudioUnit;                              //@synthesize didInitializeAudioUnit=_didInitializeAudioUnit - In the implementation block
@property (assign,nonatomic) BOOL exportsLiveListenToFile;                             //@synthesize exportsLiveListenToFile=_exportsLiveListenToFile - In the implementation block
@property (assign,nonatomic,__weak) id<AXHALiveListenDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) OpaqueAudioComponentInstanceRef rioUnit;                //@synthesize rioUnit=_rioUnit - In the implementation block
@property (nonatomic,readonly) OpaqueAudioComponentInstanceRef mixerUnit;              //@synthesize mixerUnit=_mixerUnit - In the implementation block
@property (assign,nonatomic) BOOL isListening; 
-(void)setExportsLiveListenToFile:(BOOL)arg1 ;
-(BOOL)exportsLiveListenToFile;
-(id)init;
-(id<AXHALiveListenDelegate>)delegate;
-(BOOL)isListening;
-(void)setDelegate:(id<AXHALiveListenDelegate>)arg1 ;
-(OpaqueAudioComponentInstanceRef)rioUnit;
-(void)setIsListening:(BOOL)arg1 ;
-(float)audioLevel;
-(BOOL)startListeningWithError:(id*)arg1 ;
-(void)dealloc;
-(void)audioSessionWasInterrupted:(id)arg1 ;
-(BOOL)stopListeningWithError:(id*)arg1 ;
-(void)mediaServicesWereReset:(id)arg1 ;
-(void)audioRouteDidChange:(id)arg1 ;
-(BOOL)didInitializeAudioUnit;
-(void)setDidInitializeAudioUnit:(BOOL)arg1 ;
-(OpaqueExtAudioFileRef)debugAudioFile;
-(OpaqueAudioComponentInstanceRef)mixerUnit;
@end

