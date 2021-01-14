/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMapTable, NSTimer;

@interface _UICustomScheduleController : NSObject {

	NSMapTable* _observers;
	BOOL _inScheduleTime;
	NSTimer* _nextEventTimer;
	SCD_Struct_UI10 _schedule;

}

@property (assign,nonatomic) SCD_Struct_UI10 schedule;                                   //@synthesize schedule=_schedule - In the implementation block
@property (getter=isInScheduleTime,nonatomic,readonly) BOOL inScheduleTime; 
-(void)forceUpdate;
-(id)init;
-(SCD_Struct_UI10)schedule;
-(void)_notifyChange;
-(void)removeObserver:(id)arg1 ;
-(id)nextTransition:(BOOL)arg1 ;
-(void)_updateStatus:(BOOL)arg1 ;
-(void)_updateWithDate:(id)arg1 ;
-(BOOL)isInScheduleTime;
-(void)addObserver:(id)arg1 changeHandler:(/*^block*/id)arg2 ;
-(void)_updateTimeMonitoring;
-(void)_updateTimeMonitoring:(BOOL)arg1 ;
-(void)setSchedule:(SCD_Struct_UI10)arg1 ;
-(void)_significantTimeChange;
-(void)dealloc;
@end

