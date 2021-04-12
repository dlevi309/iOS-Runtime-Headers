/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMapTable, NSTimer;

@interface _UICustomScheduleController : NSObject {

	NSMapTable* _observers;
	BOOL _inScheduleTime;
	NSTimer* _nextEventTimer;
	SCD_Struct_UI9 _schedule;

}

@property (assign,nonatomic) SCD_Struct_UI9 schedule;                                    //@synthesize schedule=_schedule - In the implementation block
@property (getter=isInScheduleTime,nonatomic,readonly) BOOL inScheduleTime; 
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(SCD_Struct_UI9)schedule;
-(void)_significantTimeChange;
-(void)_updateTimeMonitoring:(BOOL)arg1 ;
-(void)_updateTimeMonitoring;
-(void)_updateWithDate:(id)arg1 ;
-(void)_notifyChange;
-(void)_updateStatus:(BOOL)arg1 ;
-(void)addObserver:(id)arg1 changeHandler:(/*^block*/id)arg2 ;
-(void)setSchedule:(SCD_Struct_UI9)arg1 ;
-(BOOL)isInScheduleTime;
-(void)forceUpdate;
-(id)nextTransition:(BOOL)arg1 ;
@end

