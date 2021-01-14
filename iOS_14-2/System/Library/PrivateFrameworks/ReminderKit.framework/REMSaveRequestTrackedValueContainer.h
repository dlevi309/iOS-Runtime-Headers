/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@protocol REMSaveRequestTrackedValue;
@interface REMSaveRequestTrackedValueContainer : NSObject {

	id<REMSaveRequestTrackedValue> _weakValue;
	id<REMSaveRequestTrackedValue> _template;

}

@property (assign,nonatomic,__weak) id<REMSaveRequestTrackedValue> weakValue;              //@synthesize weakValue=_weakValue - In the implementation block
@property (nonatomic,retain) id<REMSaveRequestTrackedValue> template;                      //@synthesize template=_template - In the implementation block
-(id<REMSaveRequestTrackedValue>)template;
-(id)initWithValue:(id)arg1 ;
-(void)setTemplate:(id<REMSaveRequestTrackedValue>)arg1 ;
-(id<REMSaveRequestTrackedValue>)weakValue;
-(void)setWeakValue:(id<REMSaveRequestTrackedValue>)arg1 ;
-(id)valueForSaveRequest:(id)arg1 ;
-(id)valueWithoutPerformingCopy;
@end

