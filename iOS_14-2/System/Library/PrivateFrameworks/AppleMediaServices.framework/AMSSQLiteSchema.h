/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class AMSSQLiteConnection;

@interface AMSSQLiteSchema : NSObject {

	AMSSQLiteConnection* _connection;

}

@property (readonly) long long currentUserVersion; 
-(void)_setUserVersion:(long long)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(BOOL)tableExists:(id)arg1 ;
-(BOOL)migrateToVersion:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(long long)currentUserVersion;
-(BOOL)column:(id)arg1 existsInTable:(id)arg2 ;
@end

