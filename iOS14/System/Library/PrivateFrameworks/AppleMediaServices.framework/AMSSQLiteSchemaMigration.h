/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class AMSSQLiteConnection, NSError;

@interface AMSSQLiteSchemaMigration : NSObject {

	AMSSQLiteConnection* _connection;
	NSError* _error;
	BOOL _success;

}

@property (readonly) NSError * error;              //@synthesize error=_error - In the implementation block
@property (readonly) BOOL success;                 //@synthesize success=_success - In the implementation block
-(BOOL)success;
-(id)initWithConnection:(id)arg1 ;
-(void)executeStatement:(id)arg1 ;
-(NSError *)error;
-(void)executeOptionalStatement:(id)arg1 bindings:(/*^block*/id)arg2 ;
-(void)executeStatement:(id)arg1 bindings:(/*^block*/id)arg2 ;
-(void)_executeStatement:(id)arg1 canFailMigration:(BOOL)arg2 bindings:(/*^block*/id)arg3 ;
-(void)executeOptionalStatement:(id)arg1 ;
@end

