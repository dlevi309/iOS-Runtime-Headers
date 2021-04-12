/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface REMStructuredLocation : NSObject <NSCopying, NSSecureCoding> {

	NSString* _title;
	double _latitude;
	double _longitude;
	double _radius;
	NSString* _address;
	NSString* _routing;
	NSString* _referenceFrameString;
	NSString* _contactLabel;
	NSData* _mapKitHandle;
	NSString* _locationUID;

}

@property (nonatomic,readonly) NSString * locationUID;                   //@synthesize locationUID=_locationUID - In the implementation block
@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) double latitude;                            //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) double longitude;                           //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) double radius;                              //@synthesize radius=_radius - In the implementation block
@property (nonatomic,copy) NSString * address;                           //@synthesize address=_address - In the implementation block
@property (nonatomic,copy) NSString * routing;                           //@synthesize routing=_routing - In the implementation block
@property (nonatomic,copy) NSString * referenceFrameString;              //@synthesize referenceFrameString=_referenceFrameString - In the implementation block
@property (nonatomic,copy) NSString * contactLabel;                      //@synthesize contactLabel=_contactLabel - In the implementation block
@property (nonatomic,copy) NSData * mapKitHandle;                        //@synthesize mapKitHandle=_mapKitHandle - In the implementation block
+(BOOL)supportsSecureCoding;
+(double)minimumRegionMonitoringDistance;
-(double)latitude;
-(id)initWithTitle:(id)arg1 ;
-(void)setRouting:(NSString *)arg1 ;
-(void)setRadius:(double)arg1 ;
-(NSData *)mapKitHandle;
-(double)longitude;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)debugDescription;
-(void)setLongitude:(double)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(double)radius;
-(id)description;
-(NSString *)address;
-(void)setAddress:(NSString *)arg1 ;
-(void)setContactLabel:(NSString *)arg1 ;
-(NSString *)referenceFrameString;
-(id)initWithTitle:(id)arg1 locationUID:(id)arg2 latitude:(double)arg3 longitude:(double)arg4 radius:(double)arg5 address:(id)arg6 routing:(id)arg7 referenceFrameString:(id)arg8 contactLabel:(id)arg9 mapKitHandle:(id)arg10 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setReferenceFrameString:(NSString *)arg1 ;
-(NSString *)locationUID;
-(NSString *)routing;
-(id)initWithTitle:(id)arg1 locationUID:(id)arg2 ;
-(BOOL)isContentEqual:(id)arg1 ;
-(void)setMapKitHandle:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)displayName;
-(NSString *)contactLabel;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

