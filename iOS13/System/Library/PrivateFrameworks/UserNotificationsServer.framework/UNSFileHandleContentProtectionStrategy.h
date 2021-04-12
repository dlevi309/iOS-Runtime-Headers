/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/

#import <libobjc.A.dylib/UNSContentProtectionStrategy.h>

@class NSString, NSMutableDictionary;

@interface UNSFileHandleContentProtectionStrategy : NSObject <UNSContentProtectionStrategy> {

	NSString* _fileProtectionType;
	NSMutableDictionary* _keyedFileHandles;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)removeItemAtPath:(id)arg1 error:(id*)arg2 ;
-(id)initWithFileProtectionType:(id)arg1 ;
-(BOOL)dataIsAvailableAtPath:(id)arg1 ;
-(id)dataAtPath:(id)arg1 ;
-(BOOL)writeData:(id)arg1 atPath:(id)arg2 error:(id*)arg3 ;
-(void)migrateDataAtPath:(id)arg1 toPath:(id)arg2 ;
-(id)allPaths;
-(id)allDataAtPath:(id)arg1 ;
-(BOOL)removeAllDataAtPath:(id)arg1 error:(id*)arg2 ;
-(id)_fileHandleForCreatingStoreAtPath:(id)arg1 protectionType:(id)arg2 ;
-(BOOL)_isFileProtectionTypeSupported:(id)arg1 ;
@end

