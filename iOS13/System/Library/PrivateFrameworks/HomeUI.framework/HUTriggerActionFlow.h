/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@interface HUTriggerActionFlow : NSObject {

	BOOL _hasChangedState;
	unsigned long long _flowState;

}

@property (nonatomic,readonly) BOOL hasChangedState;                      //@synthesize hasChangedState=_hasChangedState - In the implementation block
@property (nonatomic,readonly) unsigned long long flowState;              //@synthesize flowState=_flowState - In the implementation block
@property (nonatomic,readonly) BOOL isLastState; 
@property (nonatomic,readonly) BOOL isFinished; 
@property (nonatomic,readonly) BOOL isStandalone; 
@property (nonatomic,readonly) BOOL isSingleFlow; 
+(id)selectFlowForState:(unsigned long long)arg1 ;
-(BOOL)isFinished;
-(unsigned long long)_nextState;
-(id)initWithFlowState:(unsigned long long)arg1 ;
-(BOOL)isSingleFlow;
-(BOOL)isLastState;
-(unsigned long long)flowState;
-(id)initWithEditorMode:(unsigned long long)arg1 ;
-(BOOL)isStandalone;
-(id)initWithFlowState:(unsigned long long)arg1 hasChangedState:(BOOL)arg2 ;
-(BOOL)hasChangedState;
-(id)getNextState;
@end

