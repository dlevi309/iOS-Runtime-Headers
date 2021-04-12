/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CKDPLocationCoordinate *)coordinate;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(CKDPLocationBound *)bounds;
-(void)setBounds:(CKDPLocationBound *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCoordinate:(CKDPLocationCoordinate *)arg1 ;
-(BOOL)hasCoordinate;
-(BOOL)hasBounds;
@end

