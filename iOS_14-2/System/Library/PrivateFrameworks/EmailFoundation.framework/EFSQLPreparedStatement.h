/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


#import <EmailFoundation/EmailFoundation-Structs.h>
@class NSString;

@interface EFSQLPreparedStatement : NSObject {

	sqlite3_stmtRef _compiled;
	double _allowedExecutionTime;

}

@property (nonatomic,readonly) BOOL isFinalized; 
@property (nonatomic,copy,readonly) NSString * originalString; 
@property (nonatomic,readonly) sqlite3_stmtRef compiled; 
@property (assign,nonatomic) double allowedExecutionTime;                   //@synthesize allowedExecutionTime=_allowedExecutionTime - In the implementation block
+(id)log;
-(BOOL)isFinalized;
-(id)debugDescription;
-(id)initWithString:(id)arg1 connection:(id)arg2 ;
-(BOOL)executeUsingBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(BOOL)resetWithError:(id*)arg1 ;
-(void)setAllowedExecutionTime:(double)arg1 ;
-(NSString *)originalString;
-(double)allowedExecutionTime;
-(BOOL)executeWithIndexedBindings:(id)arg1 usingBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(BOOL)executeWithNamedBindings:(id)arg1 usingBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(BOOL)clearBindingsWithError:(id*)arg1 ;
-(void)dealloc;
-(sqlite3_stmtRef)compiled;
-(BOOL)finalizeWithError:(id*)arg1 ;
-(BOOL)executeWithNamedBindings:(id)arg1 rowsChanged:(unsigned long long*)arg2 error:(id*)arg3 ;
@end

