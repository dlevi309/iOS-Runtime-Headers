/*
* Generated on Thursday, January 14, 2021 at 2:22:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFLatLng.h>
@class NSDictionary, NSData;


@protocol SFLatLng <NSObject>
@property (assign,nonatomic) double lat; 
@property (assign,nonatomic) double lng; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(double)lng;
-(double)lat;
-(NSData *)jsonData;
-(void)setLng:(double)arg1;
-(void)setLat:(double)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSData, NSString;

@interface SFLatLng : NSObject <SFLatLng, NSSecureCoding, NSCopying> {

	SCD_Struct_SF9 _has;
	double _lat;
	double _lng;

}

@property (assign,nonatomic) double lat;                                             //@synthesize lat=_lat - In the implementation block
@property (assign,nonatomic) double lng;                                             //@synthesize lng=_lng - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSDictionary *)dictionaryRepresentation;
-(double)lng;
-(double)lat;
-(BOOL)hasLat;
-(BOOL)hasLng;
-(NSData *)jsonData;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLng:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLat:(double)arg1 ;
@end

