/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/GameController-Structs.h>
#import <libobjc.A.dylib/_GCGamepadEvent.h>

@class NSString;

@interface _GCGamepadEventHID : NSObject <_GCGamepadEvent> {

	IOHIDEventRef _extendedEvent;
	IOHIDEventRef _event;

}

@property (nonatomic,readonly) IOHIDEventRef event;                 //@synthesize event=_event - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithHIDEvent:(IOHIDEventRef)arg1 ;
-(IOHIDEventRef)event;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(BOOL)hasValidValueForElement:(long long)arg1 ;
-(float)floatValueForElement:(long long)arg1 ;
@end

