/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIWindow, NSUUID;

@interface UIKBTouchState : NSObject <NSCopying> {

	double _timestamp;
	long long _phase;
	UIWindow* _window;
	double _pathMajorRadius;
	unsigned long long _pathIndex;
	NSUUID* _touchUUID;
	unsigned long long _tapCount;
	CGPoint _locationInWindow;

}

@property (nonatomic,readonly) double timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) long long phase;                           //@synthesize phase=_phase - In the implementation block
@property (nonatomic,readonly) UIWindow * window;                         //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) CGPoint locationInWindow;                  //@synthesize locationInWindow=_locationInWindow - In the implementation block
@property (nonatomic,readonly) double pathMajorRadius;                    //@synthesize pathMajorRadius=_pathMajorRadius - In the implementation block
@property (nonatomic,readonly) unsigned long long pathIndex;              //@synthesize pathIndex=_pathIndex - In the implementation block
@property (nonatomic,readonly) NSUUID * touchUUID;                        //@synthesize touchUUID=_touchUUID - In the implementation block
@property (nonatomic,readonly) unsigned long long tapCount;               //@synthesize tapCount=_tapCount - In the implementation block
+(id)touchUUIDForTouch:(id)arg1 ;
+(id)touchForTouchUUID:(id)arg1 ;
+(id)touchesForTouchUUIDs:(id)arg1 ;
+(id)touchUUIDsForTouches:(id)arg1 ;
+(void)releaseUUIDForTouch:(id)arg1 ;
+(id)touchStateForTouch:(id)arg1 ;
+(id)touchStateForTouchUUID:(id)arg1 withTimestamp:(double)arg2 phase:(long long)arg3 location:(CGPoint)arg4 pathIndex:(unsigned char)arg5 inView:(id)arg6 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)timestamp;
-(UIWindow *)window;
-(long long)phase;
-(CGPoint)locationInView:(id)arg1 ;
-(unsigned long long)tapCount;
-(CGPoint)locationInWindow;
-(double)pathMajorRadius;
-(unsigned long long)pathIndex;
-(NSUUID *)touchUUID;
@end

