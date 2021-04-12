/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@class NSMutableArray;

@interface TSDFPSCounter : NSObject {

	NSMutableArray* _dateArray;

}
-(id)init;
-(void)dealloc;
-(void)reset;
-(void)addFrameAtDrawTime:(double)arg1 duration:(double)arg2 ;
-(id)p_fpsSummaryStringIncludingGraph:(BOOL)arg1 ;
-(id)p_getFPSInfo:(BOOL)arg1 ;
-(void)addFrame;
-(void)addFrameAtDrawTime:(double)arg1 ;
-(id)fpsSummaryString;
-(id)fpsGraphString;
-(void)writeFPSInfoToLog:(id)arg1 identifier:(id)arg2 type:(id)arg3 direction:(id)arg4 duration:(double)arg5 graphing:(BOOL)arg6 slide:(long long)arg7 ;
@end

