/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
*/


@class SBKSyncTransaction, NSString, NSArray, NSMutableDictionary;

@interface SBKSyncResponseData : NSObject {

	SBKSyncTransaction* _transaction;
	NSString* _syncAnchor;
	NSArray* _updatedKeys;
	NSArray* _conflictedKeys;
	NSArray* _deletedKeys;
	NSArray* _successfullyUpdatedKeys;
	NSArray* _successfullyDeletedKeys;
	NSMutableDictionary* _responseOpEntiesByKey;

}

@property (retain) NSMutableDictionary * responseOpEntiesByKey;              //@synthesize responseOpEntiesByKey=_responseOpEntiesByKey - In the implementation block
@property (readonly) SBKSyncTransaction * transaction;                       //@synthesize transaction=_transaction - In the implementation block
@property (copy,readonly) NSString * syncAnchor;                             //@synthesize syncAnchor=_syncAnchor - In the implementation block
@property (readonly) NSArray * updatedKeys;                                  //@synthesize updatedKeys=_updatedKeys - In the implementation block
@property (readonly) NSArray * conflictedKeys;                               //@synthesize conflictedKeys=_conflictedKeys - In the implementation block
@property (readonly) NSArray * deletedKeys;                                  //@synthesize deletedKeys=_deletedKeys - In the implementation block
@property (readonly) NSArray * successfullyUpdatedKeys;                      //@synthesize successfullyUpdatedKeys=_successfullyUpdatedKeys - In the implementation block
@property (readonly) NSArray * successfullyDeletedKeys;                      //@synthesize successfullyDeletedKeys=_successfullyDeletedKeys - In the implementation block
+(id)deserializedResponseBodyWithTransaction:(id)arg1 responseDictionary:(id)arg2 response:(id)arg3 ;
-(id)description;
-(SBKSyncTransaction *)transaction;
-(NSString *)syncAnchor;
-(id)initWithTransaction:(id)arg1 responseDictionary:(id)arg2 response:(id)arg3 ;
-(void)_deserializeResponseDictionary:(id)arg1 response:(id)arg2 ;
-(id)payloadDataForUpdateResponseKey:(id)arg1 ;
-(NSArray *)updatedKeys;
-(NSArray *)conflictedKeys;
-(NSArray *)deletedKeys;
-(NSArray *)successfullyUpdatedKeys;
-(NSArray *)successfullyDeletedKeys;
-(NSMutableDictionary *)responseOpEntiesByKey;
-(void)setResponseOpEntiesByKey:(NSMutableDictionary *)arg1 ;
@end

