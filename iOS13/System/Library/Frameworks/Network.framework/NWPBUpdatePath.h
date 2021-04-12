/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasResponsePath;
-(NWPBPath *)responsePath;
-(void)setResponsePath:(NWPBPath *)arg1 ;
@end

