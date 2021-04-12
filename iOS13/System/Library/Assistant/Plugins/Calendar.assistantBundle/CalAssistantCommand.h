/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Assistant/Plugins/Calendar.assistantBundle/Calendar
*/

@class EKEventStore;


@protocol CalAssistantCommand <AFServiceCommand,NSObject>
@property (nonatomic,retain) EKEventStore * eventStore; 
@required
-(EKEventStore *)eventStore;
-(void)setEventStore:(id)arg1;

@end

