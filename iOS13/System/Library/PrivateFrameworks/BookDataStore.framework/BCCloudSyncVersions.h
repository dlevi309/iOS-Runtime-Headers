/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/BCCloudSyncVersions.h>
@class NSString, NSPersistentHistoryToken;


@protocol BCCloudSyncVersions
@property (nonatomic,copy,readonly) NSString * dataType; 
@property (nonatomic,copy,readonly) NSPersistentHistoryToken * historyToken; 
@property (nonatomic,readonly) long long historyTokenOffset; 
@property (nonatomic,readonly) long long cloudVersion; 
@property (nonatomic,readonly) long long localVersion; 
@property (nonatomic,readonly) long long syncVersion; 
@required
-(NSString *)dataType;
-(NSPersistentHistoryToken *)historyToken;
-(long long)localVersion;
-(long long)cloudVersion;
-(long long)syncVersion;
-(long long)historyTokenOffset;

@end


@class NSString, NSPersistentHistoryToken, NSData;

@interface BCCloudSyncVersions : NSManagedObject <BCCloudSyncVersions>

@property (nonatomic,copy) NSString * dataType; 
@property (nonatomic,copy) NSData * rawHistoryToken; 
@property (nonatomic,copy) NSPersistentHistoryToken * historyToken; 
@property (assign,nonatomic) long long historyTokenOffset; 
@property (assign,nonatomic) long long cloudVersion; 
@property (assign,nonatomic) long long localVersion; 
@property (assign,nonatomic) long long syncVersion; 
-(id)mutableCopy;
-(NSPersistentHistoryToken *)historyToken;
-(void)setHistoryToken:(NSPersistentHistoryToken *)arg1 ;
-(void)configureFromSyncVersions:(id)arg1 ;
@end

