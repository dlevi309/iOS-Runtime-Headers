/*
* Generated on Monday, March 1, 2021 at 2:35:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)bundleName;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setBundleName:(NSString *)arg1 ;
-(BOOL)hasBundleName;
-(unsigned)numConnections;
-(void)setNumConnections:(unsigned)arg1 ;
-(unsigned long long)cellIn;
-(void)setCellIn:(unsigned long long)arg1 ;
-(unsigned long long)cellOut;
-(void)setCellOut:(unsigned long long)arg1 ;
-(unsigned long long)wifiIn;
-(void)setWifiIn:(unsigned long long)arg1 ;
-(unsigned long long)wifiOut;
-(void)setWifiOut:(unsigned long long)arg1 ;
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

