/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/


#import <SpringBoardHome/SpringBoardHome-Structs.h>
@interface SBIconDraggingEditContext : NSObject {

	BOOL _enteredScreenLocationNeedsUpdate;
	id _draggingUniqueIdentifier;
	CGPoint _enteredScreenLocation;

}

@property (nonatomic,retain) id draggingUniqueIdentifier;                        //@synthesize draggingUniqueIdentifier=_draggingUniqueIdentifier - In the implementation block
@property (assign,nonatomic) CGPoint enteredScreenLocation;                      //@synthesize enteredScreenLocation=_enteredScreenLocation - In the implementation block
@property (assign,nonatomic) BOOL enteredScreenLocationNeedsUpdate;              //@synthesize enteredScreenLocationNeedsUpdate=_enteredScreenLocationNeedsUpdate - In the implementation block
-(void)setDraggingUniqueIdentifier:(id)arg1 ;
-(void)setEnteredScreenLocation:(CGPoint)arg1 ;
-(id)draggingUniqueIdentifier;
-(BOOL)enteredScreenLocationNeedsUpdate;
-(void)setEnteredScreenLocationNeedsUpdate:(BOOL)arg1 ;
-(CGPoint)enteredScreenLocation;
@end

