/*
* Generated on Thursday, January 14, 2021 at 2:23:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NTPBTocCardDrag : PBCodable <NSCopying> {

	NSData* _tocExposureId;

}

@property (nonatomic,readonly) BOOL hasTocExposureId; 
@property (nonatomic,retain) NSData * tocExposureId;               //@synthesize tocExposureId=_tocExposureId - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setTocExposureId:(NSData *)arg1 ;
-(BOOL)hasTocExposureId;
-(NSData *)tocExposureId;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

