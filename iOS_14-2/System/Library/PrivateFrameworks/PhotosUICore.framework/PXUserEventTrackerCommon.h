/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@interface PXUserEventTrackerCommon : NSObject {

	id _currentSessionSender;
	unsigned long long _currentSessionSource;
	unsigned long long _currentSessionTab;
	double _currentLogStateStartDate;
	double _currentLogSubStateStartDate;
	double _currentLogSubSubStateStartDate;
	BOOL _applicationIsInForeground;
	unsigned long long _currentTab;
	BOOL _enableDetailedDebugLogging;
	unsigned long long _currentLogState;
	unsigned long long _currentLogSubState;
	unsigned long long _currentLogSubSubState;

}

@property (assign,nonatomic) unsigned long long currentLogState;                               //@synthesize currentLogState=_currentLogState - In the implementation block
@property (assign,nonatomic) unsigned long long currentLogSubState;                            //@synthesize currentLogSubState=_currentLogSubState - In the implementation block
@property (assign,nonatomic) unsigned long long currentLogSubSubState;                         //@synthesize currentLogSubSubState=_currentLogSubSubState - In the implementation block
@property (assign,setter=setCurrentTab:,nonatomic) unsigned long long currentTab;              //@synthesize currentTab=_currentTab - In the implementation block
@property (nonatomic,readonly) BOOL enableDetailedDebugLogging;                                //@synthesize enableDetailedDebugLogging=_enableDetailedDebugLogging - In the implementation block
-(void)logViewCountForLogSubState:(unsigned long long)arg1 ;
-(id)init;
-(void)logCounterValuesForLogSubState:(unsigned long long)arg1 duration:(double)arg2 ;
-(void)willViewMemoriesFeedView;
-(void)logImpressionCountForEventSource:(unsigned long long)arg1 ;
-(unsigned long long)currentTab;
-(void)setCurrentTab:(unsigned long long)arg1 ;
-(void)logCounterValuesForLogSubSubState:(unsigned long long)arg1 duration:(double)arg2 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)eventSourceDidChange:(unsigned long long)arg1 sender:(id)arg2 ;
-(void)_setCurrentSessionSource:(unsigned long long)arg1 sender:(id)arg2 isInForeground:(BOOL)arg3 ;
-(void)setCurrentLogState:(unsigned long long)arg1 logSubState:(unsigned long long)arg2 logSubSubState:(unsigned long long)arg3 forceLogging:(BOOL)arg4 ;
-(id)PXLogStateDescription:(unsigned long long)arg1 ;
-(unsigned long long)currentLogState;
-(void)aggregateSetMemoryFeedNumberOfDaysSinceLastVisit:(long long)arg1 ;
-(id)PXLogSubStateDescription:(unsigned long long)arg1 ;
-(id)PXLogSubSubStateDescription:(unsigned long long)arg1 ;
-(BOOL)enableDetailedDebugLogging;
-(void)setCurrentLogState:(unsigned long long)arg1 ;
-(unsigned long long)currentLogSubState;
-(void)setCurrentLogSubState:(unsigned long long)arg1 ;
-(unsigned long long)currentLogSubSubState;
-(void)setCurrentLogSubSubState:(unsigned long long)arg1 ;
-(void)eventSourceDidDisappear:(unsigned long long)arg1 sender:(id)arg2 ;
-(void)eventSourceWillAppear:(unsigned long long)arg1 sender:(id)arg2 ;
-(void)logCounterValuesForLogState:(unsigned long long)arg1 duration:(double)arg2 ;
-(void)didFinishViewingMemoriesFeedView;
-(void)logViewCountForLogState:(unsigned long long)arg1 ;
-(void)logViewCountForLogSubSubState:(unsigned long long)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(BOOL)isEventSourceSenderAppearingForTheFirstTime:(id)arg1 ;
@end

