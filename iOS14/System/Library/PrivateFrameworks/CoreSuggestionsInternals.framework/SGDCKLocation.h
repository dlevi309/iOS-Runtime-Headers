/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface SGDCKLocation : PBCodable <NSCopying> {

	double _accuracy;
	double _latitude;
	double _longitude;
	double _quality;
	NSString* _address;
	NSString* _airportCode;
	NSData* _handle;
	NSString* _label;
	int _locationType;
	SCD_Struct_SG5 _has;

}

@property (assign,nonatomic) BOOL hasLocationType; 
@property (assign,nonatomic) int locationType;                    //@synthesize locationType=_locationType - In the implementation block
@property (nonatomic,readonly) BOOL hasLabel; 
@property (nonatomic,retain) NSString * label;                    //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) BOOL hasAddress; 
@property (nonatomic,retain) NSString * address;                  //@synthesize address=_address - In the implementation block
@property (assign,nonatomic) BOOL hasLatitude; 
@property (assign,nonatomic) double latitude;                     //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) BOOL hasLongitude; 
@property (assign,nonatomic) double longitude;                    //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) BOOL hasAccuracy; 
@property (assign,nonatomic) double accuracy;                     //@synthesize accuracy=_accuracy - In the implementation block
@property (assign,nonatomic) BOOL hasQuality; 
@property (assign,nonatomic) double quality;                      //@synthesize quality=_quality - In the implementation block
@property (nonatomic,readonly) BOOL hasHandle; 
@property (nonatomic,retain) NSData * handle;                     //@synthesize handle=_handle - In the implementation block
@property (nonatomic,readonly) BOOL hasAirportCode; 
@property (nonatomic,retain) NSString * airportCode;              //@synthesize airportCode=_airportCode - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHandle:(NSData *)arg1 ;
-(double)latitude;
-(void)setHasLatitude:(BOOL)arg1 ;
-(BOOL)hasLatitude;
-(BOOL)hasLongitude;
-(NSData *)handle;
-(void)setHasLongitude:(BOOL)arg1 ;
-(BOOL)hasLabel;
-(BOOL)hasAddress;
-(double)longitude;
-(void)setAccuracy:(double)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setLocationType:(int)arg1 ;
-(id)locationTypeAsString:(int)arg1 ;
-(double)quality;
-(void)setLatitude:(double)arg1 ;
-(NSString *)airportCode;
-(void)setAirportCode:(NSString *)arg1 ;
-(BOOL)hasAirportCode;
-(BOOL)hasHandle;
-(id)description;
-(NSString *)address;
-(void)setAddress:(NSString *)arg1 ;
-(int)locationType;
-(void)setHasQuality:(BOOL)arg1 ;
-(BOOL)hasQuality;
-(int)StringAsLocationType:(id)arg1 ;
-(double)accuracy;
-(BOOL)hasLocationType;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setQuality:(double)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasLocationType:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasAccuracy:(BOOL)arg1 ;
-(BOOL)hasAccuracy;
@end

