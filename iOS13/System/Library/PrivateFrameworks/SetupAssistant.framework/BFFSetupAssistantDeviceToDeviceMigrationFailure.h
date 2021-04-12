/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
*/

#import <SetupAssistant/SetupAssistant-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BFFSetupAssistantDeviceToDeviceMigrationFailure : PBCodable <NSCopying> {

	long long _errorCode;
	unsigned long long _timestamp;
	long long _underlyingErrorCode;
	int _connectionType;
	NSString* _errorDomain;
	NSString* _sourceDeviceModel;
	NSString* _sourceDeviceProductVersion;
	NSString* _targetDeviceModel;
	NSString* _targetDeviceProductVersion;
	NSString* _underlyingErrorDomain;
	BOOL _inAppleStore;
	SCD_Struct_BF4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain;                             //@synthesize errorDomain=_errorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) long long errorCode;                                //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,readonly) BOOL hasUnderlyingErrorDomain; 
@property (nonatomic,retain) NSString * underlyingErrorDomain;                   //@synthesize underlyingErrorDomain=_underlyingErrorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasUnderlyingErrorCode; 
@property (assign,nonatomic) long long underlyingErrorCode;                      //@synthesize underlyingErrorCode=_underlyingErrorCode - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceDeviceModel; 
@property (nonatomic,retain) NSString * sourceDeviceModel;                       //@synthesize sourceDeviceModel=_sourceDeviceModel - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceDeviceProductVersion; 
@property (nonatomic,retain) NSString * sourceDeviceProductVersion;              //@synthesize sourceDeviceProductVersion=_sourceDeviceProductVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasTargetDeviceModel; 
@property (nonatomic,retain) NSString * targetDeviceModel;                       //@synthesize targetDeviceModel=_targetDeviceModel - In the implementation block
@property (nonatomic,readonly) BOOL hasTargetDeviceProductVersion; 
@property (nonatomic,retain) NSString * targetDeviceProductVersion;              //@synthesize targetDeviceProductVersion=_targetDeviceProductVersion - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) int connectionType;                                 //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) BOOL hasInAppleStore; 
@property (assign,nonatomic) BOOL inAppleStore;                                  //@synthesize inAppleStore=_inAppleStore - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(int)connectionType;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setUnderlyingErrorDomain:(NSString *)arg1 ;
-(long long)errorCode;
-(NSString *)errorDomain;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setConnectionType:(int)arg1 ;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(BOOL)hasConnectionType;
-(void)setErrorDomain:(NSString *)arg1 ;
-(void)setErrorCode:(long long)arg1 ;
-(BOOL)hasErrorDomain;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(void)setSourceDeviceModel:(NSString *)arg1 ;
-(void)setSourceDeviceProductVersion:(NSString *)arg1 ;
-(void)setTargetDeviceModel:(NSString *)arg1 ;
-(void)setTargetDeviceProductVersion:(NSString *)arg1 ;
-(BOOL)hasSourceDeviceModel;
-(BOOL)hasSourceDeviceProductVersion;
-(BOOL)hasTargetDeviceModel;
-(BOOL)hasTargetDeviceProductVersion;
-(void)setInAppleStore:(BOOL)arg1 ;
-(void)setHasInAppleStore:(BOOL)arg1 ;
-(BOOL)hasInAppleStore;
-(NSString *)sourceDeviceModel;
-(NSString *)sourceDeviceProductVersion;
-(NSString *)targetDeviceModel;
-(NSString *)targetDeviceProductVersion;
-(BOOL)inAppleStore;
-(BOOL)hasUnderlyingErrorDomain;
-(void)setUnderlyingErrorCode:(long long)arg1 ;
-(void)setHasUnderlyingErrorCode:(BOOL)arg1 ;
-(BOOL)hasUnderlyingErrorCode;
-(NSString *)underlyingErrorDomain;
-(long long)underlyingErrorCode;
@end

