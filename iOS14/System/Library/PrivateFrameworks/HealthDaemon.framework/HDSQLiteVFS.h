/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


#import <HealthDaemon/HealthDaemon-Structs.h>
@class NSString;

@interface HDSQLiteVFS : NSObject {

	sqlite3_vfs* _baseVFS;
	sqlite3_vfs* _customVFS;
	NSString* _name;

}

@property (nonatomic,copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
-(id)init;
-(NSString *)name;
-(int)openWithPath:(const char*)arg1 file:(sqlite3_file*)arg2 flags:(int)arg3 outFlags:(int*)arg4 ;
-(void)dealloc;
@end

