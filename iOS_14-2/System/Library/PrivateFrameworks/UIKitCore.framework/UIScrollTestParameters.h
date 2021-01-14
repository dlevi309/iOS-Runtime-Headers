/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setLength:(double)arg1 ;
-(void)setAxis:(unsigned long long)arg1 ;
-(id)extraResultsBlock;
-(unsigned long long)axis;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(void)setIterations:(long long)arg1 ;
-(id)init;
-(long long)iterations;
-(double)endOffset;
-(void)setExtraResultsBlock:(id)arg1 ;
-(double)delta;
-(double)length;
-(void)setStartOffset:(double)arg1 ;
-(void)setDelta:(double)arg1 ;
-(void)setTestName:(NSString *)arg1 ;
-(double)startOffset;
-(NSString *)testName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

