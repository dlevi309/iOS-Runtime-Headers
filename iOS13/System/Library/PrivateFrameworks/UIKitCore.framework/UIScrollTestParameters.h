/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CADisplayLink;

@interface UIScrollTestParameters : NSObject <NSCopying> {

	NSString* _testName;
	long long _iterations;
	double _delta;
	double _length;
	unsigned long long _axis;
	/*^block*/id _extraResultsBlock;
	double _startOffset;
	CADisplayLink* _displayLink;
	/*^block*/id _completionBlock;

}

@property (assign,nonatomic) double startOffset;                       //@synthesize startOffset=_startOffset - In the implementation block
@property (nonatomic,readonly) double endOffset; 
@property (nonatomic,retain) CADisplayLink * displayLink;              //@synthesize displayLink=_displayLink - In the implementation block
@property (nonatomic,copy) id completionBlock;                         //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,copy) NSString * testName;                        //@synthesize testName=_testName - In the implementation block
@property (assign,nonatomic) long long iterations;                     //@synthesize iterations=_iterations - In the implementation block
@property (assign,nonatomic) double delta;                             //@synthesize delta=_delta - In the implementation block
@property (assign,nonatomic) double length;                            //@synthesize length=_length - In the implementation block
@property (assign,nonatomic) unsigned long long axis;                  //@synthesize axis=_axis - In the implementation block
@property (nonatomic,copy) id extraResultsBlock;                       //@synthesize extraResultsBlock=_extraResultsBlock - In the implementation block
-(id)init;
-(void)dealloc;
-(double)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLength:(double)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(unsigned long long)axis;
-(double)startOffset;
-(double)endOffset;
-(void)setAxis:(unsigned long long)arg1 ;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(NSString *)testName;
-(void)setTestName:(NSString *)arg1 ;
-(long long)iterations;
-(void)setIterations:(long long)arg1 ;
-(double)delta;
-(void)setDelta:(double)arg1 ;
-(id)extraResultsBlock;
-(void)setExtraResultsBlock:(id)arg1 ;
-(void)setStartOffset:(double)arg1 ;
@end

