/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@interface CMGestureManager : NSObject {

	id _internal;

}

@property (copy) id gestureHandler; 
+(BOOL)isGestureServiceEnabled;
+(BOOL)isGestureServiceAvailable;
+(void)setGestureServiceEnabled:(BOOL)arg1 ;
-(id)initWithPriority:(int)arg1 ;
-(id)init;
-(void)setGestureHandler:(id)arg1 ;
-(id)gestureHandler;
-(void)dealloc;
@end

