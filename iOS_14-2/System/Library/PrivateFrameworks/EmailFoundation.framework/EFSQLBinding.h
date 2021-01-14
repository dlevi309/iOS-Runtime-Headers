/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <EmailFoundation/EmailFoundation-Structs.h>
#import <libobjc.A.dylib/EFSQLBindable.h>

@class NSString;

@interface EFSQLBinding : NSObject <EFSQLBindable>

@property (nonatomic,readonly) EFSQLBinding * ef_SQLBinding; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bindingWithData:(id)arg1 ;
+(id)bindingWithDouble:(double)arg1 ;
+(id)bindingWithInt64:(long long)arg1 ;
+(id)bindingWithString:(id)arg1 ;
+(id)nullBinding;
-(void)bindTo:(sqlite3_stmtRef)arg1 withSQLIndex:(int)arg2 ;
-(EFSQLBinding *)ef_SQLBinding;
-(void)bindToStatement:(id)arg1 usingIndex:(unsigned long long)arg2 ;
-(void)bindToStatement:(id)arg1 usingName:(id)arg2 ;
@end

