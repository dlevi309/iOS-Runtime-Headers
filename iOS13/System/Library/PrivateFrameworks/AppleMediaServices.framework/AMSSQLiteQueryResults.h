/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSSQLiteBinding.h>

@class AMSSQLiteStatement, NSNumber, NSString;

@interface AMSSQLiteQueryResults : NSObject <AMSSQLiteBinding> {

	AMSSQLiteStatement* _statement;

}

@property (nonatomic,readonly) long long firstInt64Value; 
@property (nonatomic,copy,readonly) NSNumber * firstNumberValue; 
@property (nonatomic,readonly) BOOL hasRows; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStatement:(id)arg1 ;
-(void)bindString:(id)arg1 atPosition:(int)arg2 ;
-(void)bindFloat:(float)arg1 atPosition:(int)arg2 ;
-(void)enumerateRowsUsingBlock:(/*^block*/id)arg1 ;
-(void)bindNullAtPosition:(int)arg1 ;
-(void)bindDouble:(double)arg1 atPosition:(int)arg2 ;
-(void)bindData:(id)arg1 atPosition:(int)arg2 ;
-(void)bindInt64:(long long)arg1 atPosition:(int)arg2 ;
-(int)clearBindings;
-(BOOL)hasRows;
-(void)bindNumber:(id)arg1 atPosition:(int)arg2 ;
-(void)bindArray:(id)arg1 atPosition:(int)arg2 ;
-(void)bindDataCopy:(id)arg1 atPosition:(int)arg2 ;
-(void)bindDate:(id)arg1 atPosition:(int)arg2 ;
-(void)bindDictionary:(id)arg1 atPosition:(int)arg2 ;
-(void)bindInt:(int)arg1 atPosition:(int)arg2 ;
-(void)bindStringCopy:(id)arg1 atPosition:(int)arg2 ;
-(void)bindURL:(id)arg1 atPosition:(int)arg2 ;
-(long long)firstInt64Value;
-(NSNumber *)firstNumberValue;
@end

