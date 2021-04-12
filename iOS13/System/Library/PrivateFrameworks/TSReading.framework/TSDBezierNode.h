/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@interface TSDBezierNode : NSObject {

	CGPoint mIn;
	CGPoint mNode;
	CGPoint mOut;
	int mReflectedState;
	BOOL mSelected;
	int mType;

}

@property (assign,nonatomic) CGPoint nodePoint; 
@property (assign,nonatomic) CGPoint inControlPoint; 
@property (assign,nonatomic) CGPoint outControlPoint; 
@property (assign,nonatomic) int reflectedState; 
@property (nonatomic,readonly) BOOL isCollapsed; 
@property (assign,nonatomic) int type; 
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
+(id)bezierNodeWithPoint:(CGPoint)arg1 ;
+(id)bezierNodeWithPoint:(CGPoint)arg1 inControlPoint:(CGPoint)arg2 outControlPoint:(CGPoint)arg3 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)setNode:(CGPoint)arg1 ;
-(BOOL)isSelected;
-(id)typeString;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isCollapsed;
-(void)moveToPoint:(CGPoint)arg1 ;
-(void)collapse;
-(void)transformUsingAffineTransform:(CGAffineTransform)arg1 ;
-(void)setNodePoint:(CGPoint)arg1 ;
-(void)setInControlPoint:(CGPoint)arg1 ;
-(void)setOutControlPoint:(CGPoint)arg1 ;
-(void)setReflectedState:(int)arg1 ;
-(CGPoint)nodePoint;
-(CGPoint)inControlPoint;
-(CGPoint)outControlPoint;
-(int)reflectedState;
-(id)reflectedStateString;
-(void)balanceControlPoints;
-(void)setInControlPoint:(CGPoint)arg1 reflect:(int)arg2 constrain:(BOOL)arg3 ;
-(void)setOutControlPoint:(CGPoint)arg1 reflect:(int)arg2 constrain:(BOOL)arg3 ;
-(void)setInControlPointFromReflection:(CGPoint)arg1 constrain:(BOOL)arg2 ;
-(void)updateReflectedState;
-(void)swapControlPoints;
-(BOOL)underPoint:(CGPoint)arg1 withTransform:(CGAffineTransform)arg2 andTolerance:(double)arg3 returningType:(long long*)arg4 ;
@end

