/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class RTLocation, NSUUID, RTMapItem, NSArray, NSString;

@interface RTLocationOfInterest : NSObject <NSCopying, NSSecureCoding> {

	RTLocation* _location;
	double _confidence;
	NSUUID* _identifier;
	long long _type;
	unsigned long long _typeSource;
	RTMapItem* _mapItem;
	NSArray* _visits;
	NSString* _customLabel;

}

@property (nonatomic,readonly) double latitude; 
@property (nonatomic,readonly) double longitude; 
@property (nonatomic,readonly) double uncertainty; 
@property (nonatomic,readonly) RTLocation * location;                            //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) double confidence;                                //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long typeSource;                    //@synthesize typeSource=_typeSource - In the implementation block
@property (nonatomic,readonly) RTMapItem * mapItem;                              //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,readonly) unsigned long long geoMapItemSource; 
@property (nonatomic,readonly) NSArray * visits;                                 //@synthesize visits=_visits - In the implementation block
@property (nonatomic,readonly) NSString * preferredName; 
@property (nonatomic,readonly) NSString * customLabel;                           //@synthesize customLabel=_customLabel - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)geoMapItemSourceToString:(unsigned long long)arg1 ;
+(BOOL)locationOfInterestTypeIsValid:(long long)arg1 ;
+(id)locationOfInterestTypeSourceToString:(unsigned long long)arg1 ;
+(id)locationOfInterestTypeToString:(long long)arg1 ;
-(double)confidence;
-(double)latitude;
-(id)init;
-(RTLocation *)location;
-(double)longitude;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(RTMapItem *)mapItem;
-(NSString *)preferredName;
-(void)setLatitude:(double)arg1 ;
-(id)pruneVisitsWithDateInterval:(id)arg1 ;
-(unsigned long long)typeSource;
-(id)initWithLocation:(id)arg1 confidence:(double)arg2 identifier:(id)arg3 type:(long long)arg4 typeSource:(unsigned long long)arg5 visits:(id)arg6 customLabel:(id)arg7 mapItem:(id)arg8 ;
-(id)nameFromType:(long long)arg1 ;
-(unsigned long long)geoMapItemSource;
-(long long)recentCompare:(id)arg1 ;
-(id)description;
-(NSString *)customLabel;
-(long long)type;
-(unsigned long long)hash;
-(NSArray *)visits;
-(id)initWithCoder:(id)arg1 ;
-(void)setUncertainty:(double)arg1 ;
-(NSUUID *)identifier;
-(double)uncertainty;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

