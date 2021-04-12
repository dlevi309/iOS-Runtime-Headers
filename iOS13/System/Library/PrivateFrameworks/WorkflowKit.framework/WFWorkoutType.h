/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@class NSString;

@interface WFWorkoutType : NSObject {

	unsigned long long _activityType;
	NSString* _name;

}

@property (nonatomic,readonly) unsigned long long activityType;              //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
+(id)allTypes;
-(NSString *)name;
-(id)initWithActivityType:(unsigned long long)arg1 ;
-(unsigned long long)activityType;
@end

