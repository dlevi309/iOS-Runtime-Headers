/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface ML3DatabaseValidationClient : NSObject {

	NSMutableDictionary* _validatableDatabases;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
+(id)sharedClient;
-(id)init;
-(BOOL)validateDatabaseForLibrary:(id)arg1 ;
-(BOOL)_validateDatabaseForPath:(id)arg1 usingLibrary:(id)arg2 ;
-(id)_validatableDatabaseForPath:(id)arg1 ;
-(BOOL)validateDatabaseAtPath:(id)arg1 ;
-(BOOL)validateDatabaseForConnection:(id)arg1 ;
-(BOOL)isValidatingDatabaseForPath:(id)arg1 ;
@end

