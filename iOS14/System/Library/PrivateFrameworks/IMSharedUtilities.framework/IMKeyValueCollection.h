/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <IMSharedUtilities/IMKeyValueCollectionStorage.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol IMKeyValueCollectionStorage, IMKeyValueCollectionDelegate;
@class NSMutableDictionary, NSString;

@interface IMKeyValueCollection : NSObject <IMKeyValueCollectionStorage, NSCopying> {

	long long _batchCount;
	id<IMKeyValueCollectionStorage> _keyValueStorage;
	id<IMKeyValueCollectionDelegate> _delegate;
	NSMutableDictionary* _recordedChanges;

}

@property (readonly) NSMutableDictionary * recordedChanges;                                  //@synthesize recordedChanges=_recordedChanges - In the implementation block
@property (nonatomic,readonly) id<IMKeyValueCollectionStorage> keyValueStorage;              //@synthesize keyValueStorage=_keyValueStorage - In the implementation block
@property (assign,nonatomic,__weak) id<IMKeyValueCollectionDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setString:(id)arg1 forKey:(id)arg2 ;
-(id)errorForKey:(id)arg1 ;
-(id)init;
-(void)setError:(id)arg1 forKey:(id)arg2 ;
-(id)errorArrayForKey:(id)arg1 ;
-(void)addErrorToArray:(id)arg1 forKey:(id)arg2 ;
-(id<IMKeyValueCollectionDelegate>)delegate;
-(void)setDouble:(double)arg1 forKey:(id)arg2 ;
-(double)doubleForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(void)setDelegate:(id<IMKeyValueCollectionDelegate>)arg1 ;
-(NSString *)description;
-(void)_notifyListeners;
-(id)objectForKey:(id)arg1 ;
-(BOOL)boolForKey:(id)arg1 ;
-(id<IMKeyValueCollectionStorage>)keyValueStorage;
-(id)initWithKeyValueStorage:(id)arg1 ;
-(void)_recordChange:(id)arg1 forKey:(id)arg2 ;
-(long long)int64ForKey:(id)arg1 ;
-(void)_broadcastIfNeeded;
-(id)objectForKey:(id)arg1 withDefault:(id)arg2 ;
-(BOOL)boolForKey:(id)arg1 withDefault:(BOOL)arg2 ;
-(long long)integerForKey:(id)arg1 withDefault:(long long)arg2 ;
-(long long)int64ForKey:(id)arg1 withDefault:(long long)arg2 ;
-(unsigned long long)uint64ForKey:(id)arg1 withDefault:(unsigned long long)arg2 ;
-(void)_startBatchWrite;
-(double)doubleForKey:(id)arg1 withDefault:(double)arg2 ;
-(id)stringForKey:(id)arg1 withDefault:(id)arg2 ;
-(void)_commitBatchWrite;
-(void)setInt64:(long long)arg1 forKey:(id)arg2 ;
-(unsigned long long)uint64ForKey:(id)arg1 ;
-(void)setUint64:(long long)arg1 forKey:(id)arg2 ;
-(NSMutableDictionary *)recordedChanges;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)_setObject:(id)arg1 forKey:(id)arg2 ;
-(long long)integerForKey:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

