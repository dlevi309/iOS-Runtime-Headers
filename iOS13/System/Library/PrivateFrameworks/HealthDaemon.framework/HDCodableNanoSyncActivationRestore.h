/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/HDNanoSyncDescription.h>
#import <libobjc.A.dylib/HDNanoSyncPersistentUserInfoCopying.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, NSData;

@interface HDCodableNanoSyncActivationRestore : PBCodable <HDNanoSyncDescription, HDNanoSyncPersistentUserInfoCopying, NSCopying> {

	long long _sequenceNumber;
	NSString* _defaultSourceBundleIdentifier;
	NSMutableArray* _obliteratedHealthPairingUUIDs;
	NSData* _restoreIdentifier;
	int _statusCode;
	SCD_Struct_HD12 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasRestoreIdentifier; 
@property (nonatomic,retain) NSData * restoreIdentifier;                                  //@synthesize restoreIdentifier=_restoreIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasSequenceNumber; 
@property (assign,nonatomic) long long sequenceNumber;                                    //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,nonatomic) BOOL hasStatusCode; 
@property (assign,nonatomic) int statusCode;                                              //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,readonly) BOOL hasDefaultSourceBundleIdentifier; 
@property (nonatomic,retain) NSString * defaultSourceBundleIdentifier;                    //@synthesize defaultSourceBundleIdentifier=_defaultSourceBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * obliteratedHealthPairingUUIDs;              //@synthesize obliteratedHealthPairingUUIDs=_obliteratedHealthPairingUUIDs - In the implementation block
+(Class)obliteratedHealthPairingUUIDsType;
+(id)activationRestoreWithRestoreUUID:(id)arg1 sequenceNumber:(long long)arg2 statusCode:(int)arg3 ;
+(id)retreiveFromPersistentUserInfo:(id)arg1 ;
+(id)persistentUserInfoKey;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)statusCode;
-(id)dictionaryRepresentation;
-(void)setSequenceNumber:(long long)arg1 ;
-(long long)sequenceNumber;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasSequenceNumber:(BOOL)arg1 ;
-(BOOL)hasSequenceNumber;
-(void)setStatusCode:(int)arg1 ;
-(void)setHasStatusCode:(BOOL)arg1 ;
-(BOOL)hasStatusCode;
-(id)statusCodeAsString:(int)arg1 ;
-(int)StringAsStatusCode:(id)arg1 ;
-(BOOL)hasRequiredFields;
-(NSString *)defaultSourceBundleIdentifier;
-(void)addObliteratedHealthPairingUUIDs:(id)arg1 ;
-(void)setRestoreIdentifier:(NSData *)arg1 ;
-(void)setDefaultSourceBundleIdentifier:(NSString *)arg1 ;
-(unsigned long long)obliteratedHealthPairingUUIDsCount;
-(void)clearObliteratedHealthPairingUUIDs;
-(id)obliteratedHealthPairingUUIDsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasRestoreIdentifier;
-(BOOL)hasDefaultSourceBundleIdentifier;
-(NSData *)restoreIdentifier;
-(NSMutableArray *)obliteratedHealthPairingUUIDs;
-(void)setObliteratedHealthPairingUUIDs:(NSMutableArray *)arg1 ;
-(id)nanoSyncDescription;
-(void)encodeObliteratedHealthPairingUUIDs:(id)arg1 ;
-(id)decodedObliteratedHealthPairingUUIDs;
-(id)decodedRestoreUUID;
-(void)addToPersistentUserInfo:(id)arg1 ;
-(id)copyForPersistentUserInfo;
@end

