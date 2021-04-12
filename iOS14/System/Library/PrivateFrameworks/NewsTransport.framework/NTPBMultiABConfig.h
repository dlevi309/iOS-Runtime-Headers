/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NTPBConfig;

@interface NTPBMultiABConfig : PBCodable <NSCopying> {

	long long _moduloForHashing;
	NSMutableArray* _abConfigs;
	NTPBConfig* _defaultConfig;
	SCD_Struct_NT3 _has;

}

@property (nonatomic,readonly) BOOL hasDefaultConfig; 
@property (nonatomic,retain) NTPBConfig * defaultConfig;              //@synthesize defaultConfig=_defaultConfig - In the implementation block
@property (assign,nonatomic) BOOL hasModuloForHashing; 
@property (assign,nonatomic) long long moduloForHashing;              //@synthesize moduloForHashing=_moduloForHashing - In the implementation block
@property (nonatomic,retain) NSMutableArray * abConfigs;              //@synthesize abConfigs=_abConfigs - In the implementation block
+(Class)abConfigsType;
-(id)dictionaryRepresentation;
-(void)addAbConfigs:(id)arg1 ;
-(void)setDefaultConfig:(NTPBConfig *)arg1 ;
-(BOOL)hasDefaultConfig;
-(void)setModuloForHashing:(long long)arg1 ;
-(void)setHasModuloForHashing:(BOOL)arg1 ;
-(BOOL)hasModuloForHashing;
-(void)clearAbConfigs;
-(unsigned long long)abConfigsCount;
-(id)abConfigsAtIndex:(unsigned long long)arg1 ;
-(long long)moduloForHashing;
-(void)setAbConfigs:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NTPBConfig *)defaultConfig;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)abConfigs;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

