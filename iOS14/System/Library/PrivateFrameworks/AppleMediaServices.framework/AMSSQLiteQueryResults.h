/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)enumerateRowsUsingBlock:(/*^block*/id)arg1 ;
-(int)clearBindings;
-(void)bindData:(id)arg1 atPosition:(int)arg2 ;
-(void)bindFloat:(float)arg1 atPosition:(int)arg2 ;
-(void)bindNullAtPosition:(int)arg1 ;
-(void)bindNullableString:(id)arg1 atPosition:(int)arg2 ;
-(void)bindURL:(id)arg1 atPosition:(int)arg2 ;
-(void)bindInt64:(long long)arg1 atPosition:(int)arg2 ;
-(void)bindDataCopy:(id)arg1 atPosition:(int)arg2 ;
-(void)bindDouble:(double)arg1 atPosition:(int)arg2 ;
-(void)bindNumber:(id)arg1 atPosition:(int)arg2 ;
-(void)bindDictionary:(id)arg1 atPosition:(int)arg2 ;
-(void)bindStringCopy:(id)arg1 atPosition:(int)arg2 ;
-(long long)firstInt64Value;
-(BOOL)hasRows;
-(void)bindString:(id)arg1 atPosition:(int)arg2 ;
-(void)bindDate:(id)arg1 atPosition:(int)arg2 ;
-(void)bindInt:(int)arg1 atPosition:(int)arg2 ;
-(void)bindArray:(id)arg1 atPosition:(int)arg2 ;
-(NSNumber *)firstNumberValue;
@end

