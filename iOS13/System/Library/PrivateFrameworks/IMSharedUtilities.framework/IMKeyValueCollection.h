/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id<IMKeyValueCollectionDelegate>)delegate;
-(void)setDelegate:(id<IMKeyValueCollectionDelegate>)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)boolForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(long long)integerForKey:(id)arg1 ;
-(double)doubleForKey:(id)arg1 ;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(void)setDouble:(double)arg1 forKey:(id)arg2 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)setString:(id)arg1 forKey:(id)arg2 ;
-(void)setError:(id)arg1 forKey:(id)arg2 ;
-(id)errorForKey:(id)arg1 ;
-(void)addErrorToArray:(id)arg1 forKey:(id)arg2 ;
-(id)errorArrayForKey:(id)arg1 ;
-(id<IMKeyValueCollectionStorage>)keyValueStorage;
-(id)initWithKeyValueStorage:(id)arg1 ;
-(void)_notifyListeners;
-(void)_setObject:(id)arg1 forKey:(id)arg2 ;
-(void)_recordChange:(id)arg1 forKey:(id)arg2 ;
-(void)_broadcastIfNeeded;
-(id)objectForKey:(id)arg1 withDefault:(id)arg2 ;
-(BOOL)boolForKey:(id)arg1 withDefault:(BOOL)arg2 ;
-(long long)integerForKey:(id)arg1 withDefault:(long long)arg2 ;
-(long long)int64ForKey:(id)arg1 withDefault:(long long)arg2 ;
-(unsigned long long)uint64ForKey:(id)arg1 withDefault:(unsigned long long)arg2 ;
-(double)doubleForKey:(id)arg1 withDefault:(double)arg2 ;
-(id)stringForKey:(id)arg1 withDefault:(id)arg2 ;
-(void)_startBatchWrite;
-(void)_commitBatchWrite;
-(long long)int64ForKey:(id)arg1 ;
-(void)setInt64:(long long)arg1 forKey:(id)arg2 ;
-(unsigned long long)uint64ForKey:(id)arg1 ;
-(void)setUint64:(long long)arg1 forKey:(id)arg2 ;
-(NSMutableDictionary *)recordedChanges;
@end

