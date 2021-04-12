/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class HMCharacteristic, NSSet;

@interface HFCustomCharacteristicActionSuggestionResult : NSObject {

	BOOL _isMutuallyExclusiveAction;
	HMCharacteristic* _characteristic;
	id _targetValue;
	NSSet* _matchingExistingActions;

}

@property (nonatomic,readonly) HMCharacteristic * characteristic;                 //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,readonly) id targetValue;                                    //@synthesize targetValue=_targetValue - In the implementation block
@property (nonatomic,copy,readonly) NSSet * matchingExistingActions;              //@synthesize matchingExistingActions=_matchingExistingActions - In the implementation block
@property (assign,nonatomic) BOOL isMutuallyExclusiveAction;                      //@synthesize isMutuallyExclusiveAction=_isMutuallyExclusiveAction - In the implementation block
-(id)targetValue;
-(HMCharacteristic *)characteristic;
-(id)initWithCharacteristic:(id)arg1 targetValue:(id)arg2 matchingActions:(id)arg3 ;
-(void)setIsMutuallyExclusiveAction:(BOOL)arg1 ;
-(NSSet *)matchingExistingActions;
-(BOOL)isMutuallyExclusiveAction;
@end

