/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/GameController-Structs.h>
#import <libobjc.A.dylib/_GCGamepadEventSource.h>

@class _GCGamepadEventFusionConfig, NSArray, NSString;

@interface _GCGamepadEventFusion : NSObject <_GCGamepadEventSource> {

	_GCGamepadEventFusionConfig* _config;
	SCD_Struct_GC18 _fusedData;
	NSArray* _observations;
	NSArray* _observers;

}

@property (nonatomic,retain) NSArray * observations;                //@synthesize observations=_observations - In the implementation block
@property (copy) NSArray * observers;                               //@synthesize observers=_observers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)observers;
-(id)init;
-(void)setObservers:(NSArray *)arg1 ;
-(void)setObservations:(NSArray *)arg1 ;
-(NSArray *)observations;
-(void)dealloc;
-(id)observeGamepadEvents:(/*^block*/id)arg1 ;
-(id)initWithConfiguration:(id)arg1 sources:(id)arg2 ;
@end

