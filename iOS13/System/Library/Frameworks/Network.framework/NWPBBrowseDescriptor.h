/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NWPBServiceBrowse;

@interface NWPBBrowseDescriptor : PBCodable <NSCopying> {

	NWPBServiceBrowse* _service;

}

@property (nonatomic,readonly) BOOL hasService; 
@property (nonatomic,retain) NWPBServiceBrowse * service;              //@synthesize service=_service - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NWPBServiceBrowse *)service;
-(void)setService:(NWPBServiceBrowse *)arg1 ;
-(BOOL)hasService;
@end

