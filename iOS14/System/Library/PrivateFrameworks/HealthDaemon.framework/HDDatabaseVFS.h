/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDSQLiteVFS.h>

@class NSString;

@interface HDDatabaseVFS : HDSQLiteVFS {

	NSString* _protectedDatabaseName;

}

@property (nonatomic,copy) NSString * protectedDatabaseName;              //@synthesize protectedDatabaseName=_protectedDatabaseName - In the implementation block
-(NSString *)protectedDatabaseName;
-(void)setProtectedDatabaseName:(NSString *)arg1 ;
-(int)openWithPath:(const char*)arg1 file:(sqlite3_file*)arg2 flags:(int)arg3 outFlags:(int*)arg4 ;
@end

