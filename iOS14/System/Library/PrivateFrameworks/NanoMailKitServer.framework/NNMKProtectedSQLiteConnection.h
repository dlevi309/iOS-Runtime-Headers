/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <NanoMailKitServer/NNMKSQLiteConnection.h>

@class NSString;

@interface NNMKProtectedSQLiteConnection : NNMKSQLiteConnection {

	BOOL _protectedDatabaseAttached;
	NSString* _protectedDatabasePath;
	NSString* _protectedDatabaseName;

}

@property (nonatomic,retain) NSString * protectedDatabasePath;              //@synthesize protectedDatabasePath=_protectedDatabasePath - In the implementation block
@property (nonatomic,retain) NSString * protectedDatabaseName;              //@synthesize protectedDatabaseName=_protectedDatabaseName - In the implementation block
@property (nonatomic,readonly) BOOL protectedDatabaseAttached;              //@synthesize protectedDatabaseAttached=_protectedDatabaseAttached - In the implementation block
-(NSString *)protectedDatabaseName;
-(void)setProtectedDatabaseName:(NSString *)arg1 ;
-(NSString *)protectedDatabasePath;
-(BOOL)protectedDatabaseAttached;
-(id)_vfsModuleName;
-(id)initWithUnprotectedDatabaseFileName:(id)arg1 protectedDatabaseFileName:(id)arg2 inDirectory:(id)arg3 protectedDatabaseName:(id)arg4 errorCode:(int*)arg5 ;
-(int)attachProtectedDatabase;
-(void)dettachProtectedDatabase;
-(void)setProtectedDatabasePath:(NSString *)arg1 ;
@end

