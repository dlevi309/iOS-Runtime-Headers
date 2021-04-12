/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

@class NSNumber;


@protocol HDSyncChange <NSObject>
@property (getter=isSpeculative,nonatomic,readonly) BOOL speculative; 
@property (nonatomic,readonly) HDSyncAnchorRange syncAnchorRange; 
@property (nonatomic,readonly) NSNumber * sequenceNumber; 
@property (nonatomic,readonly) BOOL done; 
@property (nonatomic,readonly) long long encodedByteCount; 
@required
-(NSNumber *)sequenceNumber;
-(BOOL)done;
-(id)syncEntityIdentifier;
-(Class)syncEntityClassForProfile:(id)arg1;
-(HDSyncAnchorRange)syncAnchorRange;
-(long long)encodedByteCount;
-(BOOL)isSpeculative;
-(void)setObjects:(id)arg1 syncAnchorRange:(HDSyncAnchorRange)arg2 requiredAnchorMap:(id)arg3;
-(void)setSequenceNumber:(long long)arg1 done:(BOOL)arg2;
-(id)requiredAnchorMapWithProfile:(id)arg1 error:(id*)arg2;
-(id)decodedObjectsForProfile:(id)arg1 error:(id*)arg2;

@end

