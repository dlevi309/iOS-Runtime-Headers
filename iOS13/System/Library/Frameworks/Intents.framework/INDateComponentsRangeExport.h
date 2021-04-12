/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSDateComponents, INRecurrenceRule;


@protocol INDateComponentsRangeExport <NSObject,JSExport>
@property (nonatomic,copy) NSDateComponents * startDateComponents; 
@property (nonatomic,copy) NSDateComponents * endDateComponents; 
@property (nonatomic,copy) INRecurrenceRule * recurrenceRule; 
@required
-(id)init;
-(NSDateComponents *)startDateComponents;
-(void)setStartDateComponents:(id)arg1;
-(NSDateComponents *)endDateComponents;
-(void)setEndDateComponents:(id)arg1;
-(INRecurrenceRule *)recurrenceRule;
-(void)setRecurrenceRule:(id)arg1;

@end

