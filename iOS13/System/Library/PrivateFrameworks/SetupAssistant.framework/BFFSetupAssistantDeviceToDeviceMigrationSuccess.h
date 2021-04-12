/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
*/

#import <SetupAssistant/SetupAssistant-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BFFSetupAssistantDeviceToDeviceMigrationSuccess : PBCodable <NSCopying> {

	unsigned long long _numberOfFilesTransferred;
	unsigned long long _restoreDuration;
	unsigned long long _size;
	unsigned long long _timestamp;
	unsigned long long _transferDuration;
	int _connectionType;
	NSString* _sourceDeviceModel;
	NSString* _sourceDeviceProductVersion;
	NSString* _targetDeviceModel;
	NSString* _targetDeviceProductVersion;
	BOOL _inAppleStore;
	SCD_Struct_BF1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasSize; 
@property (assign,nonatomic) unsigned long long size;                                  //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) BOOL hasTransferDuration; 
@property (assign,nonatomic) unsigned long long transferDuration;                      //@synthesize transferDuration=_transferDuration - In the implementation block
@property (assign,nonatomic) BOOL hasRestoreDuration; 
@property (assign,nonatomic) unsigned long long restoreDuration;                       //@synthesize restoreDuration=_restoreDuration - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceDeviceModel; 
@property (nonatomic,retain) NSString * sourceDeviceModel;                             //@synthesize sourceDeviceModel=_sourceDeviceModel - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceDeviceProductVersion; 
@property (nonatomic,retain) NSString * sourceDeviceProductVersion;                    //@synthesize sourceDeviceProductVersion=_sourceDeviceProductVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasTargetDeviceModel; 
@property (nonatomic,retain) NSString * targetDeviceModel;                             //@synthesize targetDeviceModel=_targetDeviceModel - In the implementation block
@property (nonatomic,readonly) BOOL hasTargetDeviceProductVersion; 
@property (nonatomic,retain) NSString * targetDeviceProductVersion;                    //@synthesize targetDeviceProductVersion=_targetDeviceProductVersion - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) int connectionType;                                       //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) BOOL hasInAppleStore; 
@property (assign,nonatomic) BOOL inAppleStore;                                        //@synthesize inAppleStore=_inAppleStore - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfFilesTransferred; 
@property (assign,nonatomic) unsigned long long numberOfFilesTransferred;              //@synthesize numberOfFilesTransferred=_numberOfFilesTransferred - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)size;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(int)connectionType;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSize:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasSize;
-(void)setHasSize:(BOOL)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setConnectionType:(int)arg1 ;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(BOOL)hasConnectionType;
-(unsigned long long)transferDuration;
-(void)setSourceDeviceModel:(NSString *)arg1 ;
-(void)setSourceDeviceProductVersion:(NSString *)arg1 ;
-(void)setTargetDeviceModel:(NSString *)arg1 ;
-(void)setTargetDeviceProductVersion:(NSString *)arg1 ;
-(void)setTransferDuration:(unsigned long long)arg1 ;
-(void)setHasTransferDuration:(BOOL)arg1 ;
-(BOOL)hasTransferDuration;
-(void)setRestoreDuration:(unsigned long long)arg1 ;
-(void)setHasRestoreDuration:(BOOL)arg1 ;
-(BOOL)hasRestoreDuration;
-(BOOL)hasSourceDeviceModel;
-(BOOL)hasSourceDeviceProductVersion;
-(BOOL)hasTargetDeviceModel;
-(BOOL)hasTargetDeviceProductVersion;
-(void)setInAppleStore:(BOOL)arg1 ;
-(void)setHasInAppleStore:(BOOL)arg1 ;
-(BOOL)hasInAppleStore;
-(void)setNumberOfFilesTransferred:(unsigned long long)arg1 ;
-(void)setHasNumberOfFilesTransferred:(BOOL)arg1 ;
-(BOOL)hasNumberOfFilesTransferred;
-(unsigned long long)restoreDuration;
-(NSString *)sourceDeviceModel;
-(NSString *)sourceDeviceProductVersion;
-(NSString *)targetDeviceModel;
-(NSString *)targetDeviceProductVersion;
-(BOOL)inAppleStore;
-(unsigned long long)numberOfFilesTransferred;
@end

