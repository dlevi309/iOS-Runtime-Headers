/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardHIDEventFoundation.framework/BackBoardHIDEventFoundation
*/


@class NSString, BKSHIDEventKeyCommandsDispatchingRule;

@interface _BKHIDKeyCommandDeliveryRoot : NSObject {

	NSString* _identifier;
	BKSHIDEventKeyCommandsDispatchingRule* _dispatchingRule;

}

@property (nonatomic,copy) NSString * identifier;                                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) BKSHIDEventKeyCommandsDispatchingRule * dispatchingRule;              //@synthesize dispatchingRule=_dispatchingRule - In the implementation block
-(BKSHIDEventKeyCommandsDispatchingRule *)dispatchingRule;
-(void)setDispatchingRule:(BKSHIDEventKeyCommandsDispatchingRule *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
@end

