/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

