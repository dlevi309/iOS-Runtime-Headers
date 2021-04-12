/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/GameController-Structs.h>
#import <libobjc.A.dylib/GCNamedProfile.h>

@class NSString, GCMotion;

@interface _GCAssertingProfile : NSObject <GCNamedProfile>

@property (readonly) NSString * name; 
@property (retain) GCMotion * _motion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleEvent:(IOHIDEventRef)arg1 ;
-(void)appDidBecomeActive;
-(GCMotion *)_motion;
-(NSString *)name;
-(void)setController:(id)arg1 ;
-(id)initWithController:(id)arg1 ;
-(void)setPlayerIndex:(long long)arg1 ;
-(unsigned)sampleRate;
-(id)productCategory;
-(/*^block*/id)valueChangedHandler;
-(void)setButton:(id)arg1 value:(double)arg2 ;
-(void)set_motion:(GCMotion *)arg1 ;
-(void)appWillResignActive;
-(void)setDpad:(id)arg1 x:(double)arg2 y:(double)arg3 ;
-(void)setButton:(id)arg1 pressed:(BOOL)arg2 ;
@end

