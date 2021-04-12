/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDTileProvider.h>

@interface TSDSimpleTileProvider : TSDTileProvider {

	SEL mAction;

}

@property (assign,nonatomic) SEL action; 
-(SEL)action;
-(void)setAction:(SEL)arg1 ;
-(BOOL)isTargetOpaque;
-(void)drawTargetInLayer:(id)arg1 context:(CGContextRef)arg2 ;
-(BOOL)canTargetDrawInParallel;
@end

