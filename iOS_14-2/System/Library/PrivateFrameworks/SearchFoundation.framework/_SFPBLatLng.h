/*
* Generated on Thursday, January 14, 2021 at 2:22:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBLatLng.h>
@class NSData;


@protocol _SFPBLatLng <NSObject>
@property (assign,nonatomic) double lat; 
@property (assign,nonatomic) double lng; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(double)lng;
-(double)lat;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1;
-(void)setLng:(double)arg1;
-(id)initWithJSON:(id)arg1;
-(void)setLat:(double)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface _SFPBLatLng : PBCodable <_SFPBLatLng, NSSecureCoding> {

	double _lat;
	double _lng;

}

@property (assign,nonatomic) double lat;                            //@synthesize lat=_lat - In the implementation block
@property (assign,nonatomic) double lng;                            //@synthesize lng=_lng - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(double)lng;
-(double)lat;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(void)setLng:(double)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setLat:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

