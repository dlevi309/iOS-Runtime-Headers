/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSArray;

@interface _UIKBRTKeyboardTouchObserver : NSObject {

	int _homeRowOffsetIndex;
	NSArray* _rowOffsets;
	NSArray* _rowXEdges;
	NSArray* _rowYEdgesLeft;
	NSArray* _rowYEdgesRight;
	CGPoint _fCenter;
	CGPoint _jCenter;
	CGSize _keySize;

}

@property (assign,nonatomic) CGPoint fCenter;                       //@synthesize fCenter=_fCenter - In the implementation block
@property (assign,nonatomic) CGPoint jCenter;                       //@synthesize jCenter=_jCenter - In the implementation block
@property (assign,nonatomic) CGSize keySize;                        //@synthesize keySize=_keySize - In the implementation block
@property (nonatomic,retain) NSArray * rowOffsets;                  //@synthesize rowOffsets=_rowOffsets - In the implementation block
@property (assign,nonatomic) int homeRowOffsetIndex;                //@synthesize homeRowOffsetIndex=_homeRowOffsetIndex - In the implementation block
@property (nonatomic,retain) NSArray * rowXEdges;                   //@synthesize rowXEdges=_rowXEdges - In the implementation block
@property (nonatomic,retain) NSArray * rowYEdgesLeft;               //@synthesize rowYEdgesLeft=_rowYEdgesLeft - In the implementation block
@property (nonatomic,retain) NSArray * rowYEdgesRight;              //@synthesize rowYEdgesRight=_rowYEdgesRight - In the implementation block
-(void)reset;
-(CGSize)keySize;
-(void)removeTouchWithIdentifier:(id)arg1 touchCancelled:(BOOL)arg2 ;
-(void)addTouchLocation:(CGPoint)arg1 withRadius:(double)arg2 withTouchTime:(double)arg3 withIdentifier:(id)arg4 ;
-(void)moveTouchWithIdentifier:(id)arg1 toLocation:(CGPoint)arg2 withRadius:(double)arg3 atTouchTime:(double)arg4 ;
-(void)updateWithFCenter:(CGPoint)arg1 jCenter:(CGPoint)arg2 keySize:(CGSize)arg3 rowOffsets:(id)arg4 homeRowOffsetIndex:(int)arg5 ;
-(void)addTouchLocation:(CGPoint)arg1 withRadius:(double)arg2 withIdentifier:(id)arg3 ;
-(void)removeTouchWithIdentifier:(id)arg1 ;
-(CGPoint)fCenter;
-(void)setFCenter:(CGPoint)arg1 ;
-(CGPoint)jCenter;
-(void)setJCenter:(CGPoint)arg1 ;
-(void)setKeySize:(CGSize)arg1 ;
-(NSArray *)rowOffsets;
-(void)setRowOffsets:(NSArray *)arg1 ;
-(int)homeRowOffsetIndex;
-(void)setHomeRowOffsetIndex:(int)arg1 ;
-(NSArray *)rowXEdges;
-(void)setRowXEdges:(NSArray *)arg1 ;
-(NSArray *)rowYEdgesLeft;
-(void)setRowYEdgesLeft:(NSArray *)arg1 ;
-(NSArray *)rowYEdgesRight;
-(void)setRowYEdgesRight:(NSArray *)arg1 ;
@end

