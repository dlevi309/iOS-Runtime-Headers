/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDSyncMessageHandler;
#import <HealthDaemon/HealthDaemon-Structs.h>
@class HDProfile, HDDataProvenanceCache, HDEntityEncoder, NSArray;

@interface _HDDataEntitySyncMessageBuilder : NSObject {

	HDProfile* _profile;
	Class _entityClass;
	HDDataProvenanceCache* _provenanceCache;
	HDEntityEncoder* _entityEncoder;
	id<HDSyncMessageHandler> _messageHandler;
	long long _maxEncodedBytesPerChangeSet;
	long long _maxEncodedBytesPerChange;
	long long _totalEncodedBytes;
	long long _currentEncodedBytes;
	long long _lastEntityAnchor;
	long long _sequence;
	BOOL _hasEncodedAnyObject;
	BOOL _didSendFinal;

}

@property (nonatomic,copy,readonly) NSArray * orderedProperties; 
-(id)init;
-(NSArray *)orderedProperties;
-(id)description;
-(id)initWithProfile:(id)arg1 transaction:(id)arg2 entityClass:(Class)arg3 provenanceCache:(id)arg4 encodingOptions:(id)arg5 messageHandler:(id)arg6 bytesPerChangeSet:(long long)arg7 bytesPerChange:(long long)arg8 ;
-(long long)addEntity:(id)arg1 row:(HDSQLiteRowRef)arg2 anchor:(long long)arg3 error:(id*)arg4 ;
-(BOOL)finishAndFlushWithError:(id*)arg1 ;
-(long long)_addEntity:(id)arg1 row:(HDSQLiteRowRef)arg2 anchor:(long long)arg3 provenance:(id)arg4 ;
-(BOOL)_sendCurrentCollectionIsFinal:(BOOL)arg1 error:(id*)arg2 ;
-(long long)_addCodableRepresentation:(id)arg1 encodedSize:(long long)arg2 anchor:(long long)arg3 provenance:(id)arg4 error:(id*)arg5 ;
@end

