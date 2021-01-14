/*
* Generated on Thursday, January 14, 2021 at 2:29:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libprequelite.dylib
*/

#import <libprequelite.dylib/libprequelite.dylib-Structs.h>
#import <libprequelite.dylib/PQLNameInjectionBase.h>
#import <libobjc.A.dylib/PQLInjecting.h>

@class NSData, NSString;

@interface PQLNameInjection : PQLNameInjectionBase <PQLInjecting>

@property (nonatomic,readonly) NSData * sql; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)nameWithString:(id)arg1 ;
+(id)nameWithPrefix:(id)arg1 suffix:(id)arg2 ;
+(id)_appendString:(id)arg1 toInjection:(id)arg2 ;
-(id)initWithString:(id)arg1 ;
-(NSString *)description;
-(int)bindWithStatement:(sqlite3_stmtRef)arg1 startingAtIndex:(int)arg2 ;
-(id)nameByAddingSuffix:(id)arg1 ;
@end

