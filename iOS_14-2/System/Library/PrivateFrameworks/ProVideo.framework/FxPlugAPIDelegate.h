/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


@protocol FxPlugAPIDelegate
@required
-(id)displayName;
-(OZChannelBase*)channelWithID:(int)arg1;
-(OZChannelBase*)parameterAtIndex:(unsigned)arg1;
-(unsigned)parameterCount;
-(void)removeParameter:(unsigned)arg1;
-(FigTime*)fxTimeToFigTime:(/*function pointer*/void**)arg1 withConversionData:(void*)arg2;
-(double)convertFromFigTime:(const FigTime*)arg1;
-(union*)figTimeToFxTime:(const FigTime*)arg1 withConversionData:(void*)arg2;
-(void)updateInspector;
-(void)markForDynamicParameterUsage;
-(void*)beginTimingOperation:(FigTime)arg1 forChannel:(OZChannelBase*)arg2;
-(void)endTimingOperation:(void*)arg1;
-(void)preChannelChange:(OZChannelBase*)arg1 flagsOnly:(BOOL)arg2;
-(void)postChannelChange:(OZChannelBase*)arg1 flagsOnly:(BOOL)arg2;
-(OZChannelFolder*)rootChannel;
-(FigTime*)convertToFigTime:(double)arg1;
-(BOOL)usesRationalTime;
-(void)beginOperationWithChannel:(OZChannelBase*)arg1;
-(void)endOperationWithChannel:(OZChannelBase*)arg1;
-(void)abortAndWait;

@end

