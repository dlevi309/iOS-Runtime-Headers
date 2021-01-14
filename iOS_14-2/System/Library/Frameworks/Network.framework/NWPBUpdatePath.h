/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NWPBPath;

@interface NWPBUpdatePath : PBCodable <NSCopying> {

	NWPBPath* _responsePath;

}

@property (nonatomic,readonly) BOOL hasResponsePath; 
@property (nonatomic,retain) NWPBPath * responsePath;              //@synthesize responsePath=_responsePath - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasResponsePath;
-(NWPBPath *)responsePath;
-(void)setResponsePath:(NWPBPath *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

