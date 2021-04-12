/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(INRecurrenceRule *)recurrenceRule;
-(void)setStartDateComponents:(id)arg1;
-(void)setEndDateComponents:(id)arg1;
-(void)setRecurrenceRule:(id)arg1;
-(NSDateComponents *)endDateComponents;

@end

