/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
*/

#import <MapsSync/MapsSync.MapsSyncObjectWrapper.h>

@class NSUUID, NSDate, NSManagedObjectContext, NSString;

@interface MapsSync.MapsSyncBaseItem : MapsSync.MapsSyncObjectWrapper {

	 _positionIndex;
	 _editBlocks;
	 _readContext;

}

@property (copy,nonatomic) NSUUID * _identifier; 
@property (copy,nonatomic) NSDate * _createTime; 
@property (copy,nonatomic) NSDate * _modificationTime; 
@property (assign,nonatomic) long long _positionIndex;                           //@synthesize positionIndex=_positionIndex - In the implementation block
@property (retain,nonatomic) NSManagedObjectContext * _readContext;              //@synthesize readContext=_readContext - In the implementation block
@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) NSUUID * identifier; 
@property (readonly,nonatomic) NSDate * createTime; 
@property (readonly,nonatomic) NSDate * modificationTime; 
@property (readonly,nonatomic) long long positionIndex; 
+(id)_queue;
+(id)_callbackQueue;
-(id)validate;
-(NSDate *)_createTime;
-(id)initWithObject:(id)arg1 ;
-(id)init;
-(NSDate *)createTime;
-(Class)managedObjectClass;
-(NSDate *)_modificationTime;
-(Class)mutableObjectClass;
-(NSString *)description;
-(NSUUID *)_identifier;
-(long long)positionIndex;
-(void)addEditWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isDuplicateOfOther:(id)arg1 ;
-(void)deleteWithCompletion:(/*^block*/id)arg1 ;
-(void)executeOnFirstSave:(id)arg1 ;
-(NSDate *)modificationTime;
-(void)set_identifier:(NSUUID *)arg1 ;
-(void)set_createTime:(NSDate *)arg1 ;
-(void)set_modificationTime:(NSDate *)arg1 ;
-(long long)_positionIndex;
-(void)set_positionIndex:(long long)arg1 ;
-(NSManagedObjectContext *)_readContext;
-(void)set_readContext:(NSManagedObjectContext *)arg1 ;
-(id)mutableObject:(id)arg1 ;
-(void)setReadContextWithContext:(id)arg1 ;
-(void)persistObject:(id)arg1 saveContext:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)commitEditsWithCompletion:(/*^block*/id)arg1 ;
-(id)performEditsWithoutSavingWithCompletion:(/*^block*/id)arg1 ;
-(id)callCleanInObjc:(id)arg1 ;
-(NSUUID *)identifier;
-(void)setPropertiesWithObject:(id)arg1 ;
-(id)copyWithZone:(void*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

