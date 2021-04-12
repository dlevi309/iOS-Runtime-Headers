/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/


#import <SpringBoardHome/SpringBoardHome-Structs.h>
@class NSTimer;

@interface SBIconListViewAppDragContext : NSObject {

	BOOL _hasPaused;
	NSTimer* _pauseTimer;
	CGPoint _pausePoint;

}

@property (nonatomic,retain) NSTimer * pauseTimer;              //@synthesize pauseTimer=_pauseTimer - In the implementation block
@property (assign,nonatomic) CGPoint pausePoint;                //@synthesize pausePoint=_pausePoint - In the implementation block
@property (assign,nonatomic) BOOL hasPaused;                    //@synthesize hasPaused=_hasPaused - In the implementation block
-(NSTimer *)pauseTimer;
-(void)setPauseTimer:(NSTimer *)arg1 ;
-(CGPoint)pausePoint;
-(void)setPausePoint:(CGPoint)arg1 ;
-(BOOL)hasPaused;
-(void)setHasPaused:(BOOL)arg1 ;
@end

