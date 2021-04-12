/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <TextInputCore/MCKeyboardInput.h>

@interface MCDrawInput : MCKeyboardInput {

	int _drawHand;
	RefPtr<TI::Favonius::KeyboardLayout>* _keyboardLayout;
	CGRect _currentLayoutCharacterKeysFrame;
	PathResampler* _resampler;

}

@property (nonatomic,readonly) PathResampler* resampler;                                          //@synthesize resampler=_resampler - In the implementation block
@property (assign,nonatomic) int drawHand;                                                        //@synthesize drawHand=_drawHand - In the implementation block
@property (nonatomic,readonly) RefPtr<TI::Favonius::KeyboardLayout>* keyboardLayout;              //@synthesize keyboardLayout=_keyboardLayout - In the implementation block
@property (nonatomic,readonly) CGRect currentLayoutCharacterKeysFrame;                            //@synthesize currentLayoutCharacterKeysFrame=_currentLayoutCharacterKeysFrame - In the implementation block
@property (nonatomic,readonly) BOOL isCompleting; 
@property (nonatomic,readonly) BOOL isComplete; 
@property (nonatomic,readonly) BOOL isDrawing; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isComplete;
-(BOOL)isCompleting;
-(RefPtr<TI::Favonius::KeyboardLayout>*)keyboardLayout;
-(BOOL)isDrawing;
-(CGRect)currentLayoutCharacterKeysFrame;
-(BOOL)canComposeNew:(id)arg1 ;
-(void)composeNew:(id)arg1 ;
-(id)initWithKeyboardLayout:(const RefPtr<TI::Favonius::KeyboardLayout>*)arg1 ;
-(id)initWithKeyboardLayout:(const RefPtr<TI::Favonius::KeyboardLayout>*)arg1 currentLayoutCharacterKeysFrame:(CGRect)arg2 ;
-(Vector<WTF::RefPtr<TI::Favonius::LayoutKey>, 0>*)copyLayoutKeys;
-(BOOL)_canCompose;
-(void)composeWith:(id)arg1 ;
-(void)_appendAndResampleWithPoint:(CGPoint)arg1 timestamp:(double)arg2 force:(double)arg3 radius:(double)arg4 shouldFinalize:(BOOL)arg5 ;
-(void)_updateSampledInputs;
-(void)_updateSampledInputsWithResampler:(const PathResampler*)arg1 permanentlyFinalized:(BOOL)arg2 ;
-(PathResampler*)resampler;
-(int)drawHand;
-(void)setDrawHand:(int)arg1 ;
@end

