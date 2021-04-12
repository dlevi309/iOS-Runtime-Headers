/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SpeedRanges;

@interface SpeedRange : NSObject <NSCopying> {

	int _startMedia;
	int _startClip;
	double _rate;
	SpeedRange* _prev;
	SpeedRange* _next;
	SpeedRanges* _container;
	SpeedRange* _accurate;
	SpeedRange* _accurateNext;

}

@property (assign,nonatomic) int startMedia;                                //@synthesize startMedia=_startMedia - In the implementation block
@property (assign,nonatomic) int startClip;                                 //@synthesize startClip=_startClip - In the implementation block
@property (assign,nonatomic,__weak) SpeedRange * prev;                      //@synthesize prev=_prev - In the implementation block
@property (assign,nonatomic,__weak) SpeedRange * next;                      //@synthesize next=_next - In the implementation block
@property (assign,nonatomic,__weak) SpeedRanges * container;                //@synthesize container=_container - In the implementation block
@property (assign,nonatomic,__weak) SpeedRange * accurate;                  //@synthesize accurate=_accurate - In the implementation block
@property (assign,nonatomic,__weak) SpeedRange * accurateNext;              //@synthesize accurateNext=_accurateNext - In the implementation block
@property (assign,nonatomic) int leftEdge; 
@property (assign,nonatomic) int rightEdge; 
@property (assign,nonatomic) double rate;                                   //@synthesize rate=_rate - In the implementation block
@property (nonatomic,readonly) int durationMedia; 
@property (nonatomic,readonly) int durationClip; 
@property (nonatomic,readonly) BOOL isFreeze; 
@property (nonatomic,readonly) int accurateStartClip; 
@property (nonatomic,readonly) int accurateDurationClip; 
+(id)speedRangeWithRate:(float)arg1 startMedia:(int)arg2 startClip:(int)arg3 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SpeedRanges *)container;
-(void)setContainer:(SpeedRanges *)arg1 ;
-(SpeedRange *)next;
-(SpeedRange *)prev;
-(void)setRate:(double)arg1 ;
-(double)rate;
-(void)setNext:(SpeedRange *)arg1 ;
-(void)setPrev:(SpeedRange *)arg1 ;
-(void)setAccurate:(SpeedRange *)arg1 ;
-(int)leftEdge;
-(int)rightEdge;
-(SpeedRange *)accurate;
-(SCD_Struct_PM5)applySpeed:(SCD_Struct_PM5)arg1 ;
-(BOOL)isFreeze;
-(void)setLeftEdge:(int)arg1 ;
-(void)setRightEdge:(int)arg1 ;
-(int)durationClip;
-(void)setStartClip:(int)arg1 ;
-(void)setStartMedia:(int)arg1 ;
-(void)rippleClipTimeDown;
-(void)setAndRippleLeftEdge:(int)arg1 ;
-(int)convertToMediaTimeAndUnrampedClipTime:(int*)arg1 ;
-(int)accurateStartClip;
-(int)durationMedia;
-(id)splitRangeAtClipTime:(int)arg1 ;
-(int)accurateDurationClip;
-(SpeedRange *)accurateNext;
-(void)setAccurateNext:(SpeedRange *)arg1 ;
-(id)insertFreezeAtClipTime:(int)arg1 ;
-(int)startClip;
-(int)startMedia;
@end

