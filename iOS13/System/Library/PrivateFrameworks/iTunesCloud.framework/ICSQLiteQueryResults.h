/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <libobjc.A.dylib/ICSQLiteBinding.h>

@class ICSQLiteStatement, NSNumber, NSString;

@interface ICSQLiteQueryResults : NSObject <ICSQLiteBinding> {

	ICSQLiteStatement* _statement;

}

@property (nonatomic,readonly) long long firstInt64Value; 
@property (nonatomic,copy,readonly) NSNumber * firstNumberValue; 
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
-(void)bindNumber:(id)arg1 atPosition:(int)arg2 ;
-(void)bindDataCopy:(id)arg1 atPosition:(int)arg2 ;
-(void)bindInt:(int)arg1 atPosition:(int)arg2 ;
-(void)bindStringCopy:(id)arg1 atPosition:(int)arg2 ;
-(long long)firstInt64Value;
-(NSNumber *)firstNumberValue;
@end

