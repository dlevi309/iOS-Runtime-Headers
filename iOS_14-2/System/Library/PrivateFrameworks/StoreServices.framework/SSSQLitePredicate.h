/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SSSQLitePredicate : NSObject <NSCopying>
-(void)bindToStatement:(sqlite3_stmtRef)arg1 bindingIndex:(inout int*)arg2 ;
-(id)SQLJoinClausesForEntityClass:(Class)arg1 ;
-(id)SQLForEntityClass:(Class)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

