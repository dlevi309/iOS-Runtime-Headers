/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <SpringBoardServices/SBSAbstractSystemService.h>

@class BSMutableIntegerMap;

@interface SBSHardwareButtonService : SBSAbstractSystemService {

	BSMutableIntegerMap* _consumersPerKind;
	BSMutableIntegerMap* _buttonConfigurationsPerKind;
	BSMutableIntegerMap* _requestHIDAssertionsPerKind;

}

@property (nonatomic,retain) BSMutableIntegerMap * consumersPerKind;                         //@synthesize consumersPerKind=_consumersPerKind - In the implementation block
@property (nonatomic,retain) BSMutableIntegerMap * buttonConfigurationsPerKind;              //@synthesize buttonConfigurationsPerKind=_buttonConfigurationsPerKind - In the implementation block
@property (nonatomic,retain) BSMutableIntegerMap * requestHIDAssertionsPerKind;              //@synthesize requestHIDAssertionsPerKind=_requestHIDAssertionsPerKind - In the implementation block
+(id)sharedInstance;
-(id)description;
-(void)consumerInfoWillInvalidate:(id)arg1 ;
-(void)_setApplicationClientEventMask:(unsigned long long)arg1 buttonKind:(long long)arg2 priority:(long long)arg3 ;
-(void)_resetEventMaskForButtonKind:(long long)arg1 ;
-(id)_viableConsumerForButtonKind:(long long)arg1 event:(long long)arg2 priority:(long long)arg3 ;
-(void)_addEventConsumerInfo:(id)arg1 ;
-(long long)toggleStateForButtonKind:(long long)arg1 ;
-(void)setHapticType:(long long)arg1 forButtonKind:(long long)arg2 ;
-(void)fetchHapticTypeForButtonKind:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_mainQueue_handleButtonPressMessage:(long long)arg1 forButtonKind:(long long)arg2 priority:(long long)arg3 ;
-(void)acquireHomeHardwareButtonHintSuppressionAssertionForReason:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)beginConsumingPressesForButtonKind:(long long)arg1 eventConsumer:(id)arg2 priority:(long long)arg3 ;
-(id)deferHIDEventsForButtonKind:(long long)arg1 toToken:(id)arg2 ;
-(void)handleButtonPressMessage:(long long)arg1 forButtonKind:(long long)arg2 priority:(long long)arg3 ;
-(BSMutableIntegerMap *)consumersPerKind;
-(void)setConsumersPerKind:(BSMutableIntegerMap *)arg1 ;
-(BSMutableIntegerMap *)buttonConfigurationsPerKind;
-(void)setButtonConfigurationsPerKind:(BSMutableIntegerMap *)arg1 ;
-(BSMutableIntegerMap *)requestHIDAssertionsPerKind;
-(void)setRequestHIDAssertionsPerKind:(BSMutableIntegerMap *)arg1 ;
@end

