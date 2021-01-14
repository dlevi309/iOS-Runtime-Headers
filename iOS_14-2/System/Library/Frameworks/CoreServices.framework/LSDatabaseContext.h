/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/


@class NSData;

@interface LSDatabaseContext : NSObject

@property (getter=isAccessing,readonly) BOOL accessing; 
@property (readonly) NSData * currentPersistentIdentifier; 
+(id)new;
+(id)sharedDatabaseContext;
-(BOOL)isAccessing;
-(void)stopAccessing;
-(BOOL)startAccessingWithOptions:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)addDatabaseChangeObserver4WebKit:(/*^block*/id)arg1 ;
-(void)accessUsingBlock:(/*^block*/id)arg1 ;
-(void)removeDatabaseChangeObserver4WebKit:(id)arg1 ;
-(void)accessWithUserID:(unsigned)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)startAccessingWithUserID:(unsigned)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)accessWithUserID:(unsigned)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)startAccessingWithUserID:(unsigned)arg1 error:(id*)arg2 ;
-(BOOL)startAccessingReturningError:(id*)arg1 ;
-(void)observeDatabaseChange4WebKit:(id)arg1 ;
-(void)accessWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(NSData *)currentPersistentIdentifier;
-(id)init;
-(id)_init;
@end

