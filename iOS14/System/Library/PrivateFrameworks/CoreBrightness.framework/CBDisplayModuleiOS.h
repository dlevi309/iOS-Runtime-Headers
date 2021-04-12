/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/

#import <CoreBrightness/CoreBrightness-Structs.h>
#import <CoreBrightness/CBDisplayModule.h>

@interface CBDisplayModuleiOS : CBDisplayModule {

	DisplayRef _displayInternal;

}

@property (readonly) DisplayRef displayInternal;              //@synthesize displayInternal=_displayInternal - In the implementation block
-(id)copyIdentifiers;
-(id)copyPropertyInternalForKey:(id)arg1 ;
-(id)copyPropertyForKey:(id)arg1 ;
-(void)start;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)copyPropertyForKey:(id)arg1 withParameter:(id)arg2 ;
-(void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2 ;
-(void)stop;
-(id)initWithBacklight:(unsigned)arg1 queue:(id)arg2 display:(id)arg3 ;
-(DisplayRef)displayInternal;
-(void)dealloc;
-(void)sendNotificationForKey:(id)arg1 withValue:(id)arg2 ;
@end

