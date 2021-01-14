/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <libobjc.A.dylib/SYChangeTracking.h>

@protocol OS_os_transaction;
@class NSObject, NSDictionary, SYLegacyStore, NSMutableArray, NSString;

@interface SYTransaction : NSObject <SYChangeTracking> {

	AB _inTransaction;
	NSObject*<OS_os_transaction> _transaction;
	NSDictionary* _contextInfo;
	NSDictionary* _idsOptions;
	/*^block*/id _completion;
	SYLegacyStore* _store;
	NSMutableArray* _changes;

}

@property (nonatomic,retain) SYLegacyStore * store;                 //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) NSMutableArray * changes;              //@synthesize changes=_changes - In the implementation block
@property (nonatomic,copy) NSDictionary * contextInfo;              //@synthesize contextInfo=_contextInfo - In the implementation block
@property (nonatomic,copy) NSDictionary * idsOptions;               //@synthesize idsOptions=_idsOptions - In the implementation block
@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableArray *)changes;
-(void)commit;
-(void)deleteObject:(id)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(void)setStore:(SYLegacyStore *)arg1 ;
-(SYLegacyStore *)store;
-(BOOL)_endTransaction;
-(id)initWithStore:(id)arg1 ;
-(void)setContextInfo:(NSDictionary *)arg1 ;
-(void)setChanges:(NSMutableArray *)arg1 ;
-(BOOL)_beginTransaction;
-(id)completion;
-(void)addObject:(id)arg1 ;
-(void)updateObject:(id)arg1 ;
-(NSDictionary *)contextInfo;
-(void)rollback;
-(void)dealloc;
-(void)setIdsOptions:(NSDictionary *)arg1 ;
-(void)addObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3 ;
-(void)updateObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3 ;
-(void)deleteObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3 ;
-(id)changeList;
-(NSDictionary *)idsOptions;
-(void)addObject:(id)arg1 context:(id)arg2 ;
-(void)updateObject:(id)arg1 context:(id)arg2 ;
-(void)deleteObject:(id)arg1 context:(id)arg2 ;
-(void)addObject:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateObject:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteObject:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)commitBlocking:(BOOL)arg1 reportError:(/*^block*/id)arg2 ;
-(void)_transactionDidComplete:(BOOL)arg1 ;
@end

