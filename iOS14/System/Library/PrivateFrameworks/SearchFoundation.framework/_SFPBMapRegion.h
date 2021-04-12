/*
* Generated on Thursday, January 14, 2021 at 2:22:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBMapRegion.h>
@class NSData;


@protocol _SFPBMapRegion <NSObject>
@property (assign,nonatomic) double southLat; 
@property (assign,nonatomic) double westLng; 
@property (assign,nonatomic) double northLat; 
@property (assign,nonatomic) double eastLng; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(double)westLng;
-(NSData *)jsonData;
-(double)eastLng;
-(void)setSouthLat:(double)arg1;
-(void)setWestLng:(double)arg1;
-(void)setNorthLat:(double)arg1;
-(void)setEastLng:(double)arg1;
-(id)initWithDictionary:(id)arg1;
-(double)southLat;
-(double)northLat;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface _SFPBMapRegion : PBCodable <_SFPBMapRegion, NSSecureCoding> {

	double _southLat;
	double _westLng;
	double _northLat;
	double _eastLng;

}

@property (assign,nonatomic) double southLat;                       //@synthesize southLat=_southLat - In the implementation block
@property (assign,nonatomic) double westLng;                        //@synthesize westLng=_westLng - In the implementation block
@property (assign,nonatomic) double northLat;                       //@synthesize northLat=_northLat - In the implementation block
@property (assign,nonatomic) double eastLng;                        //@synthesize eastLng=_eastLng - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(id)initWithFacade:(id)arg1 ;
-(double)westLng;
-(NSData *)jsonData;
-(double)eastLng;
-(void)setSouthLat:(double)arg1 ;
-(void)setWestLng:(double)arg1 ;
-(void)setNorthLat:(double)arg1 ;
-(void)setEastLng:(double)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(double)southLat;
-(double)northLat;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

