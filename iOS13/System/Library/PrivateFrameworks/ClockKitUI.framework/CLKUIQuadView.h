/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
*/

#import <ClockKitUI/ClockKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol CLKUIQuadViewDelegate;
@class NSMutableArray, CLKUIQuadViewDisplayLink, NSString, NSArray;

@interface CLKUIQuadView : UIView {

	NSMutableArray* _mutableQuads;
	CLKUIQuadViewDisplayLink* _displayLink;
	SCD_Struct_CL0 _delegateRespondsTo;
	unsigned long long _frameNum;
	unsigned _debugId;
	BOOL _singleBufferMode;
	id<CLKUIQuadViewDelegate> _delegate;
	NSString* _debugIdentifier;

}

@property (assign,nonatomic,__weak) id<CLKUIQuadViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * quads; 
@property (assign,getter=isPaused,nonatomic) BOOL paused; 
@property (assign,nonatomic) long long preferredFramesPerSecond; 
@property (nonatomic,readonly) unsigned long long frameNum; 
@property (assign,nonatomic) BOOL singleBufferMode;                                  //@synthesize singleBufferMode=_singleBufferMode - In the implementation block
@property (nonatomic,copy) NSString * debugIdentifier;                               //@synthesize debugIdentifier=_debugIdentifier - In the implementation block
+(id)quadViewWithFrame:(CGRect)arg1 options:(unsigned long long)arg2 colorSpace:(long long)arg3 ;
+(id)quadViewWithFrame:(CGRect)arg1 options:(unsigned long long)arg2 ;
+(id)quadViewWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id<CLKUIQuadViewDelegate>)delegate;
-(void)setDelegate:(id<CLKUIQuadViewDelegate>)arg1 ;
-(BOOL)isPaused;
-(void)setPaused:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(NSString *)debugIdentifier;
-(void)setDebugIdentifier:(NSString *)arg1 ;
-(long long)preferredFramesPerSecond;
-(void)discardContents;
-(BOOL)_prepareAndRenderForTime:(double)arg1 inGroup:(id)arg2 checkForDrawable:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1 inGroup:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeAllQuads;
-(void)_prerenderForTime:(double)arg1 ;
-(BOOL)_displayAndCheckForDrawable:(BOOL)arg1 WithCompletion:(/*^block*/id)arg2 ;
-(void)_handleQuadArrayChange:(id)arg1 ;
-(BOOL)renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1 inGroup:(id)arg2 ;
-(unsigned long long)frameNum;
-(NSArray *)quads;
-(void)addQuad:(id)arg1 ;
-(void)addQuadsFromArray:(id)arg1 ;
-(void)removeQuad:(id)arg1 ;
-(id)snapshotInRect:(CGRect)arg1 scale:(double)arg2 time:(double)arg3 ;
-(BOOL)singleBufferMode;
-(void)setSingleBufferMode:(BOOL)arg1 ;
@end

