/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/

#import <CoreBrightness/CoreBrightness-Structs.h>
#import <CoreBrightness/CBDisplayModule.h>

@interface CBDisplayModuleiOS : CBDisplayModule {

	DisplayRef _displayInternal;

}

@property (readonly) DisplayRef displayInternal;              //@synthesize displayInternal=_displayInternal - In the implementation block
-(void)dealloc;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)stop;
-(void)start;
-(id)copyPropertyForKey:(id)arg1 ;
-(void)sendNotificationForKey:(id)arg1 withValue:(id)arg2 ;
-(id)initWithBacklight:(unsigned)arg1 queue:(id)arg2 display:(id)arg3 ;
-(id)copyPropertyForKey:(id)arg1 withParameter:(id)arg2 ;
-(void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2 ;
-(DisplayRef)displayInternal;
@end

