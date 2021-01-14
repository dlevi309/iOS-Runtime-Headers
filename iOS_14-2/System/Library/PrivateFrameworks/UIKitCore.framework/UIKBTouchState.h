/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)touchStateForTouchUUID:(id)arg1 withTimestamp:(double)arg2 phase:(long long)arg3 location:(CGPoint)arg4 pathIndex:(unsigned char)arg5 inView:(id)arg6 ;
+(id)touchUUIDsForTouches:(id)arg1 ;
+(void)releaseUUIDForTouch:(id)arg1 ;
+(id)touchStateForTouch:(id)arg1 ;
+(id)touchUUIDForTouch:(id)arg1 ;
+(id)touchForTouchUUID:(id)arg1 ;
+(id)touchesForTouchUUIDs:(id)arg1 ;
-(double)timestamp;
-(CGPoint)locationInView:(id)arg1 ;
-(unsigned long long)pathIndex;
-(id)description;
-(NSUUID *)touchUUID;
-(UIWindow *)window;
-(long long)phase;
-(CGPoint)locationInWindow;
-(double)pathMajorRadius;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)tapCount;
-(void)dealloc;
@end

