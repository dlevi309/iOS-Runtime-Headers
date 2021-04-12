/*
* Generated on Thursday, January 14, 2021 at 2:29:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libprequelite.dylib
*/

#import <libprequelite.dylib/libprequelite.dylib-Structs.h>
#import <libprequelite.dylib/PQLNameInjectionBase.h>
#import <libobjc.A.dylib/PQLInjecting.h>

@class NSMutableArray, NSData, NSString;

@interface PQLFormatInjection : PQLNameInjectionBase <PQLInjecting> {

	NSMutableArray* _binds;

}

@property (nonatomic,readonly) NSData * sql; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)formatInjection:(id)arg1 ;
-(id)initWithFormat:(id)arg1 arguments:(char*)arg2 ;
-(NSString *)description;
-(int)bindWithStatement:(sqlite3_stmtRef)arg1 startingAtIndex:(int)arg2 ;
-(id)bindValuesToKeepAlive;
@end

