/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

@class NSString, GCMotion;


@protocol GCNamedProfile <NSObject>
@property (readonly) NSString * name; 
@property (retain) GCMotion * _motion; 
@optional
-(void)appDidBecomeActive;
-(unsigned)sampleRate;
-(BOOL)isBluetoothAndUSBMirrored;
-(void)setButton:(id)arg1 value:(double)arg2;
-(void)appWillResignActive;
-(void)setDpad:(id)arg1 x:(double)arg2 y:(double)arg3;
-(void)setButton:(id)arg1 pressed:(BOOL)arg2;

@required
-(void)handleEvent:(IOHIDEventRef)arg1;
-(GCMotion *)_motion;
-(NSString *)name;
-(void)setController:(id)arg1;
-(id)initWithController:(id)arg1;
-(void)setPlayerIndex:(long long)arg1;
-(id)productCategory;
-(/*^block*/id)valueChangedHandler;
-(void)set_motion:(id)arg1;

@end

