/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSMutableArray;

@interface SBHardwareButtonActionList : NSObject {

	long long _performQueueNestCount;
	BOOL _buttonDown;
	NSMutableArray* _actionBlocks;

}

@property (nonatomic,retain) NSMutableArray * actionBlocks;                    //@synthesize actionBlocks=_actionBlocks - In the implementation block
@property (assign,getter=isButtonDown,nonatomic) BOOL buttonDown;              //@synthesize buttonDown=_buttonDown - In the implementation block
-(void)setButtonDown:(BOOL)arg1 ;
-(BOOL)isButtonDown;
-(void)performQueuedButtonUpActions;
-(void)scheduleButtonUpActionBlock:(/*^block*/id)arg1 ;
-(NSMutableArray *)actionBlocks;
-(void)setActionBlocks:(NSMutableArray *)arg1 ;
@end

