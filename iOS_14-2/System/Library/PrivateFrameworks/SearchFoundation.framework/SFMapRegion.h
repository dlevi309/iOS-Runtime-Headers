/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFMapRegion.h>
@class NSDictionary, NSData;


@protocol SFMapRegion <NSObject>
@property (assign,nonatomic) double southLat; 
@property (assign,nonatomic) double westLng; 
@property (assign,nonatomic) double northLat; 
@property (assign,nonatomic) double eastLng; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(double)westLng;
-(NSData *)jsonData;
-(double)eastLng;
-(void)setSouthLat:(double)arg1;
-(void)setWestLng:(double)arg1;
-(void)setNorthLat:(double)arg1;
-(void)setEastLng:(double)arg1;
-(double)southLat;
-(double)northLat;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSData, NSString;

@interface SFMapRegion : NSObject <SFMapRegion, NSSecureCoding, NSCopying> {

	SCD_Struct_SF4 _has;
	double _southLat;
	double _westLng;
	double _northLat;
	double _eastLng;

}

@property (assign,nonatomic) double southLat;                                        //@synthesize southLat=_southLat - In the implementation block
@property (assign,nonatomic) double westLng;                                         //@synthesize westLng=_westLng - In the implementation block
@property (assign,nonatomic) double northLat;                                        //@synthesize northLat=_northLat - In the implementation block
@property (assign,nonatomic) double eastLng;                                         //@synthesize eastLng=_eastLng - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSDictionary *)dictionaryRepresentation;
-(BOOL)hasEastLng;
-(double)westLng;
-(BOOL)hasWestLng;
-(NSData *)jsonData;
-(double)eastLng;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSouthLat:(double)arg1 ;
-(void)setWestLng:(double)arg1 ;
-(void)setNorthLat:(double)arg1 ;
-(void)setEastLng:(double)arg1 ;
-(BOOL)hasNorthLat;
-(BOOL)hasSouthLat;
-(double)southLat;
-(double)northLat;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

