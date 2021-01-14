/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)stringAtIndex:(unsigned long long)arg1 ;
-(id)dataForKey:(id)arg1 ;
-(id)dataAtIndex:(unsigned long long)arg1 ;
-(id)init;
-(double)doubleForKey:(id)arg1 ;
-(unsigned long long)count;
-(id)keyAtIndex:(unsigned long long)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(BOOL)isValid;
-(id)objectForKey:(id)arg1 ;
-(void)invalidate;
-(long long)integerAtIndex:(unsigned long long)arg1 ;
-(long long)integerForKey:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(double)doubleAtIndex:(unsigned long long)arg1 ;
@end

