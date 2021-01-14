/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <libobjc.A.dylib/_GCKeyboardEventSource.h>

@protocol _GCHIDEventSource;
@class NSArray, NSString;

@interface _GCKeyboardEventHIDAdapter : NSObject <_GCKeyboardEventSource> {

	id<_GCHIDEventSource> _HIDEventSource;
	id _HIDEventObservation;
	NSArray* _observers;

}

@property (nonatomic,retain) id<_GCHIDEventSource> HIDEventSource;              //@synthesize HIDEventSource=_HIDEventSource - In the implementation block
@property (nonatomic,retain) id HIDEventObservation;                            //@synthesize HIDEventObservation=_HIDEventObservation - In the implementation block
@property (copy) NSArray * observers;                                           //@synthesize observers=_observers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)observers;
-(id)init;
-(void)setObservers:(NSArray *)arg1 ;
-(void)dealloc;
-(id)initWithSource:(id)arg1 service:(id)arg2 ;
-(id<_GCHIDEventSource>)HIDEventSource;
-(void)setHIDEventSource:(id<_GCHIDEventSource>)arg1 ;
-(id)HIDEventObservation;
-(void)setHIDEventObservation:(id)arg1 ;
-(id)observeKeyboardEvents:(/*^block*/id)arg1 ;
@end

