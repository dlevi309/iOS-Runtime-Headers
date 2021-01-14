/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)validateDatabaseForConnection:(id)arg1 ;
-(BOOL)_validateDatabaseForPath:(id)arg1 usingLibrary:(id)arg2 ;
-(BOOL)isValidatingDatabaseForPath:(id)arg1 ;
-(BOOL)validateDatabaseForLibrary:(id)arg1 ;
-(BOOL)validateDatabaseAtPath:(id)arg1 ;
-(id)_validatableDatabaseForPath:(id)arg1 ;
@end

