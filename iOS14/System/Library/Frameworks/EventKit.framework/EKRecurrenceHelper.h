/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/


#import <EventKit/EventKit-Structs.h>
@class NSString, NSArray;

@interface EKRecurrenceHelper : NSObject {

	NSString* _specifier;
	BOOL _dirty;
	BOOL _parsed;
	NSArray* _daysOfTheWeek;
	NSArray* _daysOfTheMonth;
	NSArray* _daysOfTheYear;
	NSArray* _weeksOfTheYear;
	NSArray* _monthsOfTheYear;
	NSArray* _setPositions;

}

@property (nonatomic,readonly) BOOL isDirty; 
@property (nonatomic,copy) NSString * specifier; 
@property (nonatomic,copy) NSArray * daysOfTheWeek; 
@property (nonatomic,copy) NSArray * daysOfTheMonth; 
@property (nonatomic,copy) NSArray * daysOfTheYear; 
@property (nonatomic,copy) NSArray * weeksOfTheYear; 
@property (nonatomic,copy) NSArray * monthsOfTheYear; 
@property (nonatomic,copy) NSArray * setPositions; 
-(void)setSpecifier:(NSString *)arg1 ;
-(NSString *)specifier;
-(void)_updateSpecifier;
-(void)setMonthsOfTheYear:(NSArray *)arg1 ;
-(BOOL)isDirty;
-(id)_parseDaysOfWeek:(SCD_Struct_EK8*)arg1 range:(SCD_Struct_EK7)arg2 ;
-(void)setDaysOfTheWeek:(NSArray *)arg1 ;
-(NSArray *)weeksOfTheYear;
-(NSArray *)daysOfTheYear;
-(id)initWithSpecifier:(id)arg1 ;
-(void)_parseSpecifierIfNeeded;
-(id)_parseIndexList:(SCD_Struct_EK8*)arg1 range:(SCD_Struct_EK7)arg2 ;
-(void)setSetPositions:(NSArray *)arg1 ;
-(void)_appendIndexList:(id)arg1 toSpecifier:(id)arg2 propertyKey:(unsigned short)arg3 ;
-(void)setDaysOfTheMonth:(NSArray *)arg1 ;
-(void)setDaysOfTheYear:(NSArray *)arg1 ;
-(void)_clearArrays;
-(void)revert;
-(NSArray *)daysOfTheMonth;
-(NSArray *)monthsOfTheYear;
-(void)setWeeksOfTheYear:(NSArray *)arg1 ;
-(NSArray *)daysOfTheWeek;
-(void)_appendDaysOfTheWeek:(id)arg1 toSpecifier:(id)arg2 ;
-(NSArray *)setPositions;
-(BOOL)isEqual:(id)arg1 ;
@end

