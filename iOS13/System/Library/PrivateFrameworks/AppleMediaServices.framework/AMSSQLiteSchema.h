/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class AMSSQLiteConnection;

@interface AMSSQLiteSchema : NSObject {

	AMSSQLiteConnection* _connection;

}

@property (readonly) long long currentUserVersion; 
-(id)initWithConnection:(id)arg1 ;
-(long long)currentUserVersion;
-(BOOL)migrateToVersion:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_setUserVersion:(long long)arg1 ;
-(BOOL)column:(id)arg1 existsInTable:(id)arg2 ;
-(BOOL)tableExists:(id)arg1 ;
@end

