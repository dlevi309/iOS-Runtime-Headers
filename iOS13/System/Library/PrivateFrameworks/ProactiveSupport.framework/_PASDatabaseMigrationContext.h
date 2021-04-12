/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


@protocol _PASDatabaseMigrationProtocol;
@class NSObject, _PASSqliteDatabase, NSDictionary;

@interface _PASDatabaseMigrationContext : NSObject {

	NSObject*<_PASDatabaseMigrationProtocol> object;
	_PASSqliteDatabase* db;
	unsigned version;
	NSDictionary* migrations;

}
-(id)description;
@end

