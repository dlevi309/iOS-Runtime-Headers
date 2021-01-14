/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPLocationBound, CKDPLocationCoordinate;

@interface CKDPLocation : PBCodable <NSCopying> {

	CKDPLocationBound* _bounds;
	CKDPLocationCoordinate* _coordinate;

}

@property (nonatomic,readonly) BOOL hasCoordinate; 
@property (nonatomic,retain) CKDPLocationCoordinate * coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) BOOL hasBounds; 
@property (nonatomic,retain) CKDPLocationBound * bounds;                       //@synthesize bounds=_bounds - In the implementation block
-(id)dictionaryRepresentation;
-(CKDPLocationBound *)bounds;
-(BOOL)hasCoordinate;
-(CKDPLocationCoordinate *)coordinate;
-(void)mergeFrom:(id)arg1 ;
-(void)setBounds:(CKDPLocationBound *)arg1 ;
-(id)description;
-(void)setCoordinate:(CKDPLocationCoordinate *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasBounds;
-(BOOL)isEqual:(id)arg1 ;
@end

