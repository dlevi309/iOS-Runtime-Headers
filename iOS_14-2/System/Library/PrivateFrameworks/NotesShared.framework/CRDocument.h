/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <libobjc.A.dylib/REMReplicaClockProviding.h>

@class CRVectorTimestamp, NSUUID, NSMutableDictionary, NSString;

@interface CRDocument : NSObject <REMReplicaClockProviding> {

	CRVectorTimestamp* _version;
	CRVectorTimestamp* _startVersion;
	NSUUID* _replica;
	id _rootObject;
	NSMutableDictionary* _objects;
	long long _replicaClock;
	long long _unserializedReplicaClock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CRVectorTimestamp * version;                   //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) CRVectorTimestamp * startVersion;              //@synthesize startVersion=_startVersion - In the implementation block
@property (nonatomic,readonly) NSUUID * replica;                              //@synthesize replica=_replica - In the implementation block
@property (nonatomic,retain) id rootObject;                                   //@synthesize rootObject=_rootObject - In the implementation block
@property (nonatomic,readonly) long long replicaClock;                        //@synthesize replicaClock=_replicaClock - In the implementation block
@property (assign,nonatomic) long long unserializedReplicaClock;              //@synthesize unserializedReplicaClock=_unserializedReplicaClock - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * objects;                 //@synthesize objects=_objects - In the implementation block
+(id)documentWithReplica:(id)arg1 ;
+(id)documentWithRootObject:(id)arg1 replica:(id)arg2 ;
+(id)unarchiveFromData:(id)arg1 replica:(id)arg2 ;
-(NSMutableDictionary *)objects;
-(CRVectorTimestamp *)startVersion;
-(long long)replicaClock;
-(void)setDocumentFor:(id)arg1 ;
-(id)init;
-(long long)unserializedReplicaClock;
-(void)setUnserializedReplicaClock:(long long)arg1 ;
-(id)localObject:(id)arg1 ;
-(void)setDocument:(id)arg1 ;
-(id)rootObject;
-(NSUUID *)replica;
-(id)initWithVersion:(id)arg1 startVersion:(id)arg2 rootObject:(id)arg3 replica:(id)arg4 ;
-(unsigned long long)mergeResultForMergingWithDocument:(id)arg1 ;
-(void)mergeTimestampWithDocument:(id)arg1 ;
-(void)setRootObject:(id)arg1 ;
-(id)initWithVersion:(id)arg1 rootObject:(id)arg2 replica:(id)arg3 ;
-(void)updateGraphDocumentPointers;
-(void)updateObjectsSet;
-(void)walkGraph:(/*^block*/id)arg1 root:(id)arg2 ;
-(unsigned long long)mergeWithData:(id)arg1 ;
-(id)deltaSince:(id)arg1 ;
-(NSString *)description;
-(id)clockElementListForReplicaUUID:(id)arg1 ;
-(id)initWithReplica:(id)arg1 ;
-(void)realizeLocalChanges;
-(id)copyForReplica:(id)arg1 ;
-(unsigned long long)mergeWithDocument:(id)arg1 ;
-(CRVectorTimestamp *)version;
-(id)archivedData;
-(void)updateObjects:(id)arg1 ;
@end

