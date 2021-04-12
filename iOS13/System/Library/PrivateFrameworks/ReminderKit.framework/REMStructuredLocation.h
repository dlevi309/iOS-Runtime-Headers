/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)address;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)displayName;
-(double)radius;
-(void)setRadius:(double)arg1 ;
-(double)latitude;
-(double)longitude;
-(void)setLongitude:(double)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(id)initWithTitle:(id)arg1 ;
-(void)setAddress:(NSString *)arg1 ;
-(NSString *)contactLabel;
-(void)setContactLabel:(NSString *)arg1 ;
-(void)setRouting:(NSString *)arg1 ;
-(void)setMapKitHandle:(NSData *)arg1 ;
-(NSData *)mapKitHandle;
-(NSString *)routing;
-(void)setReferenceFrameString:(NSString *)arg1 ;
-(BOOL)isContentEqual:(id)arg1 ;
-(NSString *)locationUID;
-(NSString *)referenceFrameString;
-(id)initWithTitle:(id)arg1 locationUID:(id)arg2 latitude:(double)arg3 longitude:(double)arg4 radius:(double)arg5 address:(id)arg6 routing:(id)arg7 referenceFrameString:(id)arg8 contactLabel:(id)arg9 mapKitHandle:(id)arg10 ;
-(id)initWithTitle:(id)arg1 locationUID:(id)arg2 ;
@end

