/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NTPBTocHandleTap : PBCodable <NSCopying> {

	NSData* _tocExposureId;

}

@property (nonatomic,readonly) BOOL hasTocExposureId; 
@property (nonatomic,retain) NSData * tocExposureId;               //@synthesize tocExposureId=_tocExposureId - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setTocExposureId:(NSData *)arg1 ;
-(BOOL)hasTocExposureId;
-(NSData *)tocExposureId;
@end

