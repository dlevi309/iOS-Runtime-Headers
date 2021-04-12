/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@interface CMGestureManager : NSObject {

	id _internal;

}

@property (copy) id gestureHandler; 
+(void)setGestureServiceEnabled:(BOOL)arg1 ;
+(BOOL)isGestureServiceEnabled;
+(BOOL)isGestureServiceAvailable;
-(id)init;
-(void)dealloc;
-(id)initWithPriority:(int)arg1 ;
-(void)setGestureHandler:(id)arg1 ;
-(id)gestureHandler;
@end

