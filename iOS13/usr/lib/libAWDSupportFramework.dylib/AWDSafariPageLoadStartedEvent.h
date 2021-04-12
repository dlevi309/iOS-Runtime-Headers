/*
* Generated on Monday, March 1, 2021 at 2:35:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDSafariPageLoadStartedEvent : PBCodable <NSCopying> {

	unsigned long long _configurationID;
	unsigned long long _pageID;
	unsigned long long _timestamp;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasConfigurationID; 
@property (assign,nonatomic) unsigned long long configurationID;              //@synthesize configurationID=_configurationID - In the implementation block
@property (assign,nonatomic) BOOL hasPageID; 
@property (assign,nonatomic) unsigned long long pageID;                       //@synthesize pageID=_pageID - In the implementation block
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
-(unsigned long long)configurationID;
-(void)setConfigurationID:(unsigned long long)arg1 ;
-(unsigned long long)pageID;
-(void)setPageID:(unsigned long long)arg1 ;
-(void)setHasConfigurationID:(BOOL)arg1 ;
-(BOOL)hasConfigurationID;
-(void)setHasPageID:(BOOL)arg1 ;
-(BOOL)hasPageID;
@end

