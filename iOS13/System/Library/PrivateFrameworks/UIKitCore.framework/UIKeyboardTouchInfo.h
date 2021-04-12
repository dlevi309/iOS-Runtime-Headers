/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableArray, UIKBTree, UIKBTouchState;

@interface UIKeyboardTouchInfo : NSObject {

	NSMutableArray* _touchHistory;
	unsigned long long _processedTouchCount;
	UIKBTree* _key;
	UIKBTree* _keyplane;
	UIKBTree* _slidOffKey;
	CGPoint _initialPoint;
	CGPoint _initialDragPoint;
	BOOL _dragged;
	int _stage;
	int _fingerID;
	BOOL _maySuppressUpAction;
	int _initialKeyState;
	long long _continuousPathState;

}

@property (nonatomic,readonly) NSMutableArray * touchHistory;                     //@synthesize touchHistory=_touchHistory - In the implementation block
@property (nonatomic,readonly) UIKBTouchState * touch; 
@property (assign,nonatomic) unsigned long long processedTouchCount;              //@synthesize processedTouchCount=_processedTouchCount - In the implementation block
@property (nonatomic,retain) UIKBTree * key;                                      //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) UIKBTree * keyplane;                                 //@synthesize keyplane=_keyplane - In the implementation block
@property (nonatomic,retain) UIKBTree * slidOffKey;                               //@synthesize slidOffKey=_slidOffKey - In the implementation block
@property (assign,nonatomic) CGPoint initialPoint;                                //@synthesize initialPoint=_initialPoint - In the implementation block
@property (assign,nonatomic) CGPoint initialDragPoint;                            //@synthesize initialDragPoint=_initialDragPoint - In the implementation block
@property (assign,nonatomic) BOOL dragged;                                        //@synthesize dragged=_dragged - In the implementation block
@property (assign,nonatomic) int stage;                                           //@synthesize stage=_stage - In the implementation block
@property (assign,nonatomic) int fingerID;                                        //@synthesize fingerID=_fingerID - In the implementation block
@property (assign,nonatomic) BOOL maySuppressUpAction;                            //@synthesize maySuppressUpAction=_maySuppressUpAction - In the implementation block
@property (assign,nonatomic) int initialKeyState;                                 //@synthesize initialKeyState=_initialKeyState - In the implementation block
@property (assign,nonatomic) long long continuousPathState;                       //@synthesize continuousPathState=_continuousPathState - In the implementation block
-(id)init;
-(void)dealloc;
-(UIKBTree *)key;
-(void)setKey:(UIKBTree *)arg1 ;
-(UIKBTouchState *)touch;
-(void)setInitialPoint:(CGPoint)arg1 ;
-(CGPoint)initialPoint;
-(UIKBTree *)keyplane;
-(BOOL)dragged;
-(void)setKeyplane:(UIKBTree *)arg1 ;
-(void)addTouch:(id)arg1 ;
-(NSMutableArray *)touchHistory;
-(UIKBTree *)slidOffKey;
-(void)setSlidOffKey:(UIKBTree *)arg1 ;
-(int)stage;
-(void)setStage:(int)arg1 ;
-(CGPoint)initialDragPoint;
-(void)setInitialDragPoint:(CGPoint)arg1 ;
-(void)setDragged:(BOOL)arg1 ;
-(BOOL)maySuppressUpAction;
-(void)setMaySuppressUpAction:(BOOL)arg1 ;
-(int)initialKeyState;
-(void)setInitialKeyState:(int)arg1 ;
-(int)fingerID;
-(void)setFingerID:(int)arg1 ;
-(long long)continuousPathState;
-(void)setContinuousPathState:(long long)arg1 ;
-(unsigned long long)processedTouchCount;
-(void)setProcessedTouchCount:(unsigned long long)arg1 ;
@end

