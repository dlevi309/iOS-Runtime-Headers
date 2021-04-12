/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <libobjc.A.dylib/_GCGamepadEventSource.h>

@class _GCGamepadEventKeyboardEventAdapterConfig, NSArray, NSString;

@interface _GCGamepadEventKeyboardEventAdapter : NSObject <_GCGamepadEventSource> {

	id _observation;
	_GCGamepadEventKeyboardEventAdapterConfig* _config;
	NSArray* _observers;

}

@property (copy) NSArray * observers;                               //@synthesize observers=_observers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)observers;
-(id)init;
-(void)setObservers:(NSArray *)arg1 ;
-(void)dealloc;
-(id)observeGamepadEvents:(/*^block*/id)arg1 ;
-(id)initWithConfiguration:(id)arg1 source:(id)arg2 ;
@end

