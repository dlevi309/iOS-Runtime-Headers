/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDTileProvider.h>

@interface TSDRepTileProvider : TSDTileProvider
-(void)beginDrawingOperation;
-(void)endDrawingOperation;
-(BOOL)isTargetOpaque;
-(void)drawTargetInLayer:(id)arg1 context:(CGContextRef)arg2 ;
-(BOOL)canTargetDrawInParallel;
-(id)initWithRep:(id)arg1 ;
@end

