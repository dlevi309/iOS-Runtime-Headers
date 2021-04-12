/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
*/

#import <ClockKitUI/ClockKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol CLKUIQuadViewDelegate;
@class NSMutableArray, CLKUIQuadViewDisplayLink, NSCountedSet, NSString, NSArray;

@interface CLKUIQuadView : UIView {

	NSMutableArray* _mutableQuads;
	CLKUIQuadViewDisplayLink* _displayLink;
	SCD_Struct_CL0 _delegateRespondsTo;
	unsigned long long _frameNum;
	unsigned _debugId;
	NSCountedSet* _disabledRenderingReasons;
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
+(id)quadViewWithFrame:(CGRect)arg1 ;
+(id)quadViewWithFrame:(CGRect)arg1 options:(unsigned long long)arg2 colorSpace:(long long)arg3 ;
+(id)quadViewWithFrame:(CGRect)arg1 options:(unsigned long long)arg2 ;
-(id)initWithFrame:(CGRect)arg1 options:(unsigned long long)arg2 ;
-(NSString *)debugIdentifier;
-(id<CLKUIQuadViewDelegate>)delegate;
-(NSArray *)quads;
-(void)setPaused:(BOOL)arg1 ;
-(void)setDelegate:(id<CLKUIQuadViewDelegate>)arg1 ;
-(long long)preferredFramesPerSecond;
-(void)discardContents;
-(void)setDebugIdentifier:(NSString *)arg1 ;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(BOOL)isPaused;
-(void)dealloc;
-(BOOL)renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1 inGroup:(id)arg2 ;
-(void)addQuad:(id)arg1 ;
-(id)snapshotInRect:(CGRect)arg1 scale:(double)arg2 time:(double)arg3 ;
-(void)removeQuad:(id)arg1 ;
-(unsigned long long)frameNum;
-(void)removeAllQuads;
-(BOOL)renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1 inGroup:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_prepareAndRenderForTime:(double)arg1 inGroup:(id)arg2 checkForDrawable:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_prerenderForTime:(double)arg1 ;
-(BOOL)_displayAndCheckForDrawable:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_handleQuadArrayChange:(id)arg1 ;
-(void)addDisabledRenderingReason:(id)arg1 ;
-(void)removeDisabledRenderingReason:(id)arg1 ;
-(void)addQuadsFromArray:(id)arg1 ;
-(BOOL)singleBufferMode;
-(void)setSingleBufferMode:(BOOL)arg1 ;
@end

