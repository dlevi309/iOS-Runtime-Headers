/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <ClassKit/CLSObject.h>

@class NSString, NSDate;

@interface CLSAbstractHandout : CLSObject {

	NSString* _title;
	NSString* _instructions;
	NSDate* _dueDate;
	NSDate* _dateOfPublication;

}

@property (nonatomic,retain) NSDate * dateOfPublication; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * instructions; 
@property (nonatomic,retain) NSDate * dueDate; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(id)dictionaryRepresentation;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)instructions;
-(void)setInstructions:(NSString *)arg1 ;
-(NSDate *)dueDate;
-(void)setDueDate:(NSDate *)arg1 ;
-(void)mergeWithObject:(id)arg1 ;
-(NSDate *)dateOfPublication;
-(void)setDateOfPublication:(NSDate *)arg1 ;
@end

