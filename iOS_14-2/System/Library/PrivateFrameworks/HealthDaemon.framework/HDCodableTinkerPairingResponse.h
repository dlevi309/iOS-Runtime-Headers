/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableError, NSString, HDCodableSharingSetupMetadata;

@interface HDCodableTinkerPairingResponse : PBCodable <NSCopying> {

	HDCodableError* _error;
	NSString* _requestIdentifier;
	HDCodableSharingSetupMetadata* _setupMetadata;

}

@property (nonatomic,readonly) BOOL hasRequestIdentifier; 
@property (nonatomic,retain) NSString * requestIdentifier;                               //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasSetupMetadata; 
@property (nonatomic,retain) HDCodableSharingSetupMetadata * setupMetadata;              //@synthesize setupMetadata=_setupMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasError; 
@property (nonatomic,retain) HDCodableError * error;                                     //@synthesize error=_error - In the implementation block
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)requestIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(void)setError:(HDCodableError *)arg1 ;
-(HDCodableError *)error;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasError;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSetupMetadata:(HDCodableSharingSetupMetadata *)arg1 ;
-(BOOL)hasRequestIdentifier;
-(BOOL)hasSetupMetadata;
-(HDCodableSharingSetupMetadata *)setupMetadata;
@end

