/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDHomeKitConfigurationData : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _databaseSize;
	NSMutableArray* _homeConfigurations;
	unsigned _metadataVersion;
	BOOL _hasActiveWatchDevice;
	BOOL _hasWatchDevice;
	BOOL _isDemoConfiguration;
	BOOL _isResidentCapable;
	BOOL _isResidentEnabled;
	SCD_Struct_AW12 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDatabaseSize; 
@property (assign,nonatomic) unsigned databaseSize;                            //@synthesize databaseSize=_databaseSize - In the implementation block
@property (assign,nonatomic) BOOL hasMetadataVersion; 
@property (assign,nonatomic) unsigned metadataVersion;                         //@synthesize metadataVersion=_metadataVersion - In the implementation block
@property (assign,nonatomic) BOOL hasIsResidentCapable; 
@property (assign,nonatomic) BOOL isResidentCapable;                           //@synthesize isResidentCapable=_isResidentCapable - In the implementation block
@property (assign,nonatomic) BOOL hasIsResidentEnabled; 
@property (assign,nonatomic) BOOL isResidentEnabled;                           //@synthesize isResidentEnabled=_isResidentEnabled - In the implementation block
@property (nonatomic,retain) NSMutableArray * homeConfigurations;              //@synthesize homeConfigurations=_homeConfigurations - In the implementation block
@property (assign,nonatomic) BOOL hasIsDemoConfiguration; 
@property (assign,nonatomic) BOOL isDemoConfiguration;                         //@synthesize isDemoConfiguration=_isDemoConfiguration - In the implementation block
@property (assign,nonatomic) BOOL hasHasWatchDevice; 
@property (assign,nonatomic) BOOL hasWatchDevice;                              //@synthesize hasWatchDevice=_hasWatchDevice - In the implementation block
@property (assign,nonatomic) BOOL hasHasActiveWatchDevice; 
@property (assign,nonatomic) BOOL hasActiveWatchDevice;                        //@synthesize hasActiveWatchDevice=_hasActiveWatchDevice - In the implementation block
+(Class)homeConfigurationsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned)databaseSize;
-(unsigned)metadataVersion;
-(void)setMetadataVersion:(unsigned)arg1 ;
-(BOOL)hasMetadataVersion;
-(BOOL)isResidentCapable;
-(void)addHomeConfigurations:(id)arg1 ;
-(unsigned long long)homeConfigurationsCount;
-(void)clearHomeConfigurations;
-(id)homeConfigurationsAtIndex:(unsigned long long)arg1 ;
-(void)setDatabaseSize:(unsigned)arg1 ;
-(void)setHasDatabaseSize:(BOOL)arg1 ;
-(BOOL)hasDatabaseSize;
-(void)setHasMetadataVersion:(BOOL)arg1 ;
-(void)setIsResidentCapable:(BOOL)arg1 ;
-(void)setHasIsResidentCapable:(BOOL)arg1 ;
-(BOOL)hasIsResidentCapable;
-(void)setIsResidentEnabled:(BOOL)arg1 ;
-(void)setHasIsResidentEnabled:(BOOL)arg1 ;
-(BOOL)hasIsResidentEnabled;
-(void)setIsDemoConfiguration:(BOOL)arg1 ;
-(void)setHasIsDemoConfiguration:(BOOL)arg1 ;
-(BOOL)hasIsDemoConfiguration;
-(void)setHasWatchDevice:(BOOL)arg1 ;
-(void)setHasHasWatchDevice:(BOOL)arg1 ;
-(BOOL)hasHasWatchDevice;
-(void)setHasActiveWatchDevice:(BOOL)arg1 ;
-(void)setHasHasActiveWatchDevice:(BOOL)arg1 ;
-(BOOL)hasHasActiveWatchDevice;
-(BOOL)isResidentEnabled;
-(NSMutableArray *)homeConfigurations;
-(void)setHomeConfigurations:(NSMutableArray *)arg1 ;
-(BOOL)isDemoConfiguration;
-(BOOL)hasWatchDevice;
-(BOOL)hasActiveWatchDevice;
@end

