/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/BSInvalidatable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface BSSqliteResultRow : NSObject <BSInvalidatable, NSCopying> {

	sqlite3_stmtRef _statement;
	NSArray* _columnNames;

}

@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) unsigned long long count; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)resultRowWithStatement:(sqlite3_stmtRef)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(void)invalidate;
-(id)keyAtIndex:(unsigned long long)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(BOOL)isValid;
-(id)stringForKey:(id)arg1 ;
-(id)dataForKey:(id)arg1 ;
-(long long)integerForKey:(id)arg1 ;
-(double)doubleForKey:(id)arg1 ;
-(double)doubleAtIndex:(unsigned long long)arg1 ;
-(id)_initWithStatement:(sqlite3_stmtRef)arg1 ;
-(unsigned long long)_indexForKey:(id)arg1 ;
-(long long)integerAtIndex:(unsigned long long)arg1 ;
-(id)stringAtIndex:(unsigned long long)arg1 ;
-(id)dataAtIndex:(unsigned long long)arg1 ;
-(id)_columnNames;
@end

