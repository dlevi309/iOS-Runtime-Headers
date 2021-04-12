/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardHIDEventFoundation.framework/BackBoardHIDEventFoundation
*/


@protocol BKHIDSystemInterfacing, BKIOHIDServiceMatcherDataProviding, BKHIDEventProcessorRegistering;
@interface BKHIDEventProcessorCreationContext : NSObject {

	id<BKHIDSystemInterfacing> _systemInterface;
	id<BKIOHIDServiceMatcherDataProviding> _serviceMatcherDataProvider;
	id<BKHIDEventProcessorRegistering> _eventProcessorRegistry;

}

@property (nonatomic,retain) id<BKHIDSystemInterfacing> systemInterface;                                     //@synthesize systemInterface=_systemInterface - In the implementation block
@property (nonatomic,retain) id<BKIOHIDServiceMatcherDataProviding> serviceMatcherDataProvider;              //@synthesize serviceMatcherDataProvider=_serviceMatcherDataProvider - In the implementation block
@property (nonatomic,retain) id<BKHIDEventProcessorRegistering> eventProcessorRegistry;                      //@synthesize eventProcessorRegistry=_eventProcessorRegistry - In the implementation block
-(id<BKHIDSystemInterfacing>)systemInterface;
-(void)setSystemInterface:(id<BKHIDSystemInterfacing>)arg1 ;
-(id<BKIOHIDServiceMatcherDataProviding>)serviceMatcherDataProvider;
-(void)setServiceMatcherDataProvider:(id<BKIOHIDServiceMatcherDataProviding>)arg1 ;
-(id<BKHIDEventProcessorRegistering>)eventProcessorRegistry;
-(void)setEventProcessorRegistry:(id<BKHIDEventProcessorRegistering>)arg1 ;
@end

