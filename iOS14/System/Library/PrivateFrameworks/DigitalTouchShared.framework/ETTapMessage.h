/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
*/

#import <DigitalTouchShared/DigitalTouchShared-Structs.h>
#import <DigitalTouchShared/ETMessage.h>

@class SKScene, SKFieldNode, NSMutableArray, NSTimer;

@interface ETTapMessage : ETMessage {

	SKScene* _preVisualizeScene;
	SKFieldNode* _noiseField;
	vector<CGPoint, std::__1::allocator<CGPoint> >* _points;
	vector<double, std::__1::allocator<double> >* _times;
	NSMutableArray* _colors;
	double _baseTime;
	NSTimer* _soundTimer;
	unsigned long long _soundIndex;

}

@property (nonatomic,readonly) unsigned long long tapCount; 
+(unsigned short)messageType;
-(id)init;
-(CGPoint)pointAtIndex:(unsigned long long)arg1 ;
-(id)archiveData;
-(unsigned long long)tapCount;
-(id)initWithArchiveData:(id)arg1 ;
-(id)messageTypeAsString;
-(double)messageDuration;
-(void)displayInScene:(id)arg1 ;
-(BOOL)reachedSizeLimit;
-(void)preVisualizeInScene:(id)arg1 ;
-(void)addTapAtPoint:(CGPoint)arg1 time:(double)arg2 color:(id)arg3 ;
-(void)_displayInScene:(id)arg1 point:(CGPoint)arg2 color:(id)arg3 filled:(BOOL)arg4 withWisp:(BOOL)arg5 ;
-(double)timeDeltaAtIndex:(unsigned long long)arg1 ;
-(id)_animateCircleInner0:(double)arg1 inner1:(double)arg2 outer0:(double)arg3 outer1:(double)arg4 duration:(double)arg5 ;
@end

