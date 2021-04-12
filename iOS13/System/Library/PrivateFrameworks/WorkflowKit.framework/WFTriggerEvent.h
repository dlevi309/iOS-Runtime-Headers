/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@protocol NSObject;
@class NSString;

@interface WFTriggerEvent : NSObject {

	NSString* _triggerID;
	id<NSObject> _currentValue;

}

@property (nonatomic,copy,readonly) NSString * triggerID;              //@synthesize triggerID=_triggerID - In the implementation block
@property (nonatomic,readonly) id<NSObject> currentValue;              //@synthesize currentValue=_currentValue - In the implementation block
-(id)description;
-(id<NSObject>)currentValue;
-(NSString *)triggerID;
-(id)initWithTriggerID:(id)arg1 currentValue:(id)arg2 ;
@end

