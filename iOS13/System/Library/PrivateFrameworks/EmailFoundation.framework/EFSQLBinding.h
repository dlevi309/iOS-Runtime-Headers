/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <EmailFoundation/EmailFoundation-Structs.h>
#import <libobjc.A.dylib/EFSQLBindable.h>

@class NSString;

@interface EFSQLBinding : NSObject <EFSQLBindable>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) EFSQLBinding * ef_SQLBinding; 
+(id)bindingWithData:(id)arg1 ;
+(id)bindingWithDouble:(double)arg1 ;
+(id)bindingWithInt64:(long long)arg1 ;
+(id)bindingWithString:(id)arg1 ;
+(id)nullBinding;
-(EFSQLBinding *)ef_SQLBinding;
-(void)bindTo:(sqlite3_stmtRef)arg1 withSQLIndex:(int)arg2 ;
-(void)bindToStatement:(id)arg1 usingIndex:(unsigned long long)arg2 ;
-(void)bindToStatement:(id)arg1 usingName:(id)arg2 ;
@end

