/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


#import <TextInputCore/TextInputCore-Structs.h>
@class TIKeyboardTouchEvent, NSMutableArray, TIKeyboardLayout;

@interface TISKTap : NSObject {

	BOOL _downup;
	TIKeyboardTouchEvent* _firstTouch;
	TIKeyboardTouchEvent* _lastTouch;
	NSMutableArray* _dragTouches;
	unsigned long long _numberOfDrags;
	long long _pathIndex;
	TIKeyboardLayout* _layout;

}

@property (nonatomic,retain) NSMutableArray * dragTouches;                   //@synthesize dragTouches=_dragTouches - In the implementation block
@property (nonatomic,retain) TIKeyboardTouchEvent * firstTouch;              //@synthesize firstTouch=_firstTouch - In the implementation block
@property (nonatomic,retain) TIKeyboardTouchEvent * lastTouch;               //@synthesize lastTouch=_lastTouch - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfDrags;               //@synthesize numberOfDrags=_numberOfDrags - In the implementation block
@property (assign,nonatomic) long long pathIndex;                            //@synthesize pathIndex=_pathIndex - In the implementation block
@property (nonatomic,retain) TIKeyboardLayout * layout;                      //@synthesize layout=_layout - In the implementation block
@property (assign,getter=isDownUpTap,nonatomic) BOOL downup;                 //@synthesize downup=_downup - In the implementation block
-(long long)_forcedKeyCode;
-(long long)pathIndex;
-(void)setFirstTouch:(TIKeyboardTouchEvent *)arg1 ;
-(TIKeyboardTouchEvent *)lastTouch;
-(TIKeyboardTouchEvent *)firstTouch;
-(void)setPathIndex:(long long)arg1 ;
-(void)setLastTouch:(TIKeyboardTouchEvent *)arg1 ;
-(void)setLayout:(TIKeyboardLayout *)arg1 ;
-(TIKeyboardLayout *)layout;
-(id)init:(id)arg1 layout:(id)arg2 ;
-(unsigned long long)numberOfDrags;
-(void)addDragTouch:(id)arg1 ;
-(BOOL)isDownUpTap;
-(double)downErrorDistance:(CGRect)arg1 ;
-(double)upErrorDistance:(CGRect)arg1 ;
-(CGRect)getFrameForKey:(id)arg1 ;
-(id)stringForIntendedKey;
-(double)distance:(id)arg1 withTouch:(id)arg2 ;
-(double)totalTapDistance;
-(NSMutableArray *)dragTouches;
-(void)setDragTouches:(NSMutableArray *)arg1 ;
-(void)setNumberOfDrags:(unsigned long long)arg1 ;
-(void)setDownup:(BOOL)arg1 ;
@end

