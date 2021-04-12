/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLogMsgStateTransit : PBCodable <NSCopying> {

	BOOL _transitNotAvailableAdvisoryShowing;
	struct {
		unsigned has_transitNotAvailableAdvisoryShowing : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasTransitNotAvailableAdvisoryShowing; 
@property (assign,nonatomic) BOOL transitNotAvailableAdvisoryShowing; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)transitNotAvailableAdvisoryShowing;
-(void)setTransitNotAvailableAdvisoryShowing:(BOOL)arg1 ;
-(void)setHasTransitNotAvailableAdvisoryShowing:(BOOL)arg1 ;
-(BOOL)hasTransitNotAvailableAdvisoryShowing;
@end

