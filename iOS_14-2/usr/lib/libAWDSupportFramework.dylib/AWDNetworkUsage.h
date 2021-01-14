/*
* Generated on Thursday, January 14, 2021 at 2:29:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDNetworkUsage : PBCodable <NSCopying> {

	unsigned long long _cellIn;
	unsigned long long _cellOut;
	unsigned long long _wifiIn;
	unsigned long long _wifiOut;
	NSString* _bundleName;
	unsigned _numConnections;
	SCD_Struct_AW2 _has;

}

@property (nonatomic,readonly) BOOL hasBundleName; 
@property (nonatomic,retain) NSString * bundleName;                   //@synthesize bundleName=_bundleName - In the implementation block
@property (assign,nonatomic) BOOL hasWifiIn; 
@property (assign,nonatomic) unsigned long long wifiIn;               //@synthesize wifiIn=_wifiIn - In the implementation block
@property (assign,nonatomic) BOOL hasWifiOut; 
@property (assign,nonatomic) unsigned long long wifiOut;              //@synthesize wifiOut=_wifiOut - In the implementation block
@property (assign,nonatomic) BOOL hasCellIn; 
@property (assign,nonatomic) unsigned long long cellIn;               //@synthesize cellIn=_cellIn - In the implementation block
@property (assign,nonatomic) BOOL hasCellOut; 
@property (assign,nonatomic) unsigned long long cellOut;              //@synthesize cellOut=_cellOut - In the implementation block
@property (assign,nonatomic) BOOL hasNumConnections; 
@property (assign,nonatomic) unsigned numConnections;                 //@synthesize numConnections=_numConnections - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)cellIn;
-(unsigned long long)wifiIn;
-(NSString *)bundleName;
-(id)description;
-(unsigned long long)cellOut;
-(unsigned long long)wifiOut;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned)numConnections;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setNumConnections:(unsigned)arg1 ;
-(void)setBundleName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setCellIn:(unsigned long long)arg1 ;
-(void)setCellOut:(unsigned long long)arg1 ;
-(void)setWifiIn:(unsigned long long)arg1 ;
-(void)setWifiOut:(unsigned long long)arg1 ;
-(BOOL)hasBundleName;
-(void)setHasWifiIn:(BOOL)arg1 ;
-(BOOL)hasWifiIn;
-(void)setHasWifiOut:(BOOL)arg1 ;
-(BOOL)hasWifiOut;
-(void)setHasCellIn:(BOOL)arg1 ;
-(BOOL)hasCellIn;
-(void)setHasCellOut:(BOOL)arg1 ;
-(BOOL)hasCellOut;
-(void)setHasNumConnections:(BOOL)arg1 ;
-(BOOL)hasNumConnections;
@end

