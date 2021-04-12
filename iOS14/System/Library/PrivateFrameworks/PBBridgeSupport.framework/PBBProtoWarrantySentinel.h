/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface PBBProtoWarrantySentinel : PBCodable <NSCopying> {

	NSMutableArray* _appleLanguages;
	NSString* _appleLocale;
	NSString* _deviceName;
	BOOL _removeSentinel;
	BOOL _sentinelExists;
	SCD_Struct_PB1 _has;

}

@property (assign,nonatomic) BOOL hasSentinelExists; 
@property (assign,nonatomic) BOOL sentinelExists;                          //@synthesize sentinelExists=_sentinelExists - In the implementation block
@property (assign,nonatomic) BOOL hasRemoveSentinel; 
@property (assign,nonatomic) BOOL removeSentinel;                          //@synthesize removeSentinel=_removeSentinel - In the implementation block
@property (nonatomic,retain) NSMutableArray * appleLanguages;              //@synthesize appleLanguages=_appleLanguages - In the implementation block
@property (nonatomic,readonly) BOOL hasAppleLocale; 
@property (nonatomic,retain) NSString * appleLocale;                       //@synthesize appleLocale=_appleLocale - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceName; 
@property (nonatomic,retain) NSString * deviceName;                        //@synthesize deviceName=_deviceName - In the implementation block
+(Class)appleLanguagesType;
-(id)dictionaryRepresentation;
-(NSString *)deviceName;
-(BOOL)hasDeviceName;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addAppleLanguages:(id)arg1 ;
-(unsigned long long)appleLanguagesCount;
-(void)clearAppleLanguages;
-(id)appleLanguagesAtIndex:(unsigned long long)arg1 ;
-(void)setAppleLocale:(NSString *)arg1 ;
-(BOOL)hasAppleLocale;
-(NSMutableArray *)appleLanguages;
-(void)setAppleLanguages:(NSMutableArray *)arg1 ;
-(NSString *)appleLocale;
-(void)setSentinelExists:(BOOL)arg1 ;
-(void)setHasSentinelExists:(BOOL)arg1 ;
-(BOOL)hasSentinelExists;
-(void)setRemoveSentinel:(BOOL)arg1 ;
-(void)setHasRemoveSentinel:(BOOL)arg1 ;
-(BOOL)hasRemoveSentinel;
-(BOOL)sentinelExists;
-(BOOL)removeSentinel;
@end

