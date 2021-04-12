/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIWindow;

@interface UIKeyboardSyntheticTouch : NSObject {

	double timestamp;
	long long phase;
	unsigned long long tapCount;
	UIWindow* window;
	CGPoint locationInWindow;
	unsigned char _pathIndex;
	unsigned char _pathIdentity;
	float _pathMajorRadius;

}

@property (assign,nonatomic) double timestamp; 
@property (assign,nonatomic) long long phase; 
@property (assign,nonatomic) unsigned long long tapCount; 
@property (nonatomic,retain) UIWindow * window; 
@property (assign,nonatomic) CGPoint locationInWindow; 
@property (nonatomic,readonly) unsigned char _pathIndex;                 //@synthesize pathIndex=_pathIndex - In the implementation block
@property (nonatomic,readonly) unsigned char _pathIdentity;              //@synthesize pathIdentity=_pathIdentity - In the implementation block
@property (assign,nonatomic) float _pathMajorRadius;                     //@synthesize pathMajorRadius=_pathMajorRadius - In the implementation block
+(id)syntheticTouchWithPoint:(CGPoint)arg1 timestamp:(double)arg2 window:(id)arg3 ;
-(void)setWindow:(UIWindow *)arg1 ;
-(double)timestamp;
-(CGPoint)locationInView:(id)arg1 ;
-(UIWindow *)window;
-(unsigned char)_pathIndex;
-(CGPoint)previousLocationInView:(id)arg1 ;
-(long long)phase;
-(id)initWithPoint:(CGPoint)arg1 timestamp:(double)arg2 window:(id)arg3 ;
-(void)setLocationInWindow:(CGPoint)arg1 ;
-(CGPoint)getLocationInWindow;
-(void)_setLocationInWindow:(CGPoint)arg1 resetPrevious:(BOOL)arg2 ;
-(unsigned char)_pathIdentity;
-(float)_pathMajorRadius;
-(void)set_pathMajorRadius:(float)arg1 ;
-(CGPoint)locationInWindow;
-(void)setTapCount:(unsigned long long)arg1 ;
-(void)setPhase:(long long)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(unsigned long long)tapCount;
-(void)dealloc;
@end

