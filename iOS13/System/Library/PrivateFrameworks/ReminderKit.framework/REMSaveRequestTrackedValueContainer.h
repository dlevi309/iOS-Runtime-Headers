/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@protocol REMSaveRequestTrackedValue;
@interface REMSaveRequestTrackedValueContainer : NSObject {

	id<REMSaveRequestTrackedValue> _weakValue;
	id<REMSaveRequestTrackedValue> _template;

}

@property (assign,nonatomic,__weak) id<REMSaveRequestTrackedValue> weakValue;              //@synthesize weakValue=_weakValue - In the implementation block
@property (nonatomic,retain) id<REMSaveRequestTrackedValue> template;                      //@synthesize template=_template - In the implementation block
-(id)initWithValue:(id)arg1 ;
-(void)setTemplate:(id<REMSaveRequestTrackedValue>)arg1 ;
-(id<REMSaveRequestTrackedValue>)template;
-(id<REMSaveRequestTrackedValue>)weakValue;
-(void)setWeakValue:(id<REMSaveRequestTrackedValue>)arg1 ;
-(id)valueForSaveRequest:(id)arg1 ;
-(id)valueWithoutPerformingCopy;
@end

