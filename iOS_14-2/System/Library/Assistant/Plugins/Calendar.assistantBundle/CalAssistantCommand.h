/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Assistant/Plugins/Calendar.assistantBundle/Calendar
*/

@class EKEventStore;


@protocol CalAssistantCommand <AFServiceCommand,NSObject>
@property (nonatomic,retain) EKEventStore * eventStore; 
@required
-(EKEventStore *)eventStore;
-(void)setEventStore:(id)arg1;

@end

