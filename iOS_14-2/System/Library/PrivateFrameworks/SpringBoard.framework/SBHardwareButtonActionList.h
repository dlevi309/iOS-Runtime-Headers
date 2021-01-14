/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)scheduleButtonUpActionBlock:(/*^block*/id)arg1 ;
-(BOOL)isButtonDown;
-(void)performQueuedButtonUpActions;
-(void)setActionBlocks:(NSMutableArray *)arg1 ;
-(void)setButtonDown:(BOOL)arg1 ;
-(NSMutableArray *)actionBlocks;
@end

