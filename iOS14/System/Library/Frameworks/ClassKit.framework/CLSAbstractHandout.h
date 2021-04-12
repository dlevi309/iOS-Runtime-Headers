/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(NSString *)instructions;
-(id)init;
-(NSDate *)dueDate;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setDueDate:(NSDate *)arg1 ;
-(void)setInstructions:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(void)mergeWithObject:(id)arg1 ;
-(NSString *)title;
-(NSDate *)dateOfPublication;
-(void)setDateOfPublication:(NSDate *)arg1 ;
@end

