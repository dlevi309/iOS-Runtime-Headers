/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/

#import <TrackingAvoidance/TrackingAvoidance-Structs.h>
#import <libobjc.A.dylib/OSLogCoding.h>
#import <libobjc.A.dylib/TAEventProtocol.h>

@class NSDate, NSString;

@interface TALocationOfInterest : NSObject <OSLogCoding, TAEventProtocol> {

	unsigned long long _type;
	double _latitude;
	double _longitude;
	double _horizontalAccuracy;
	NSDate* _date;

}

@property (nonatomic,readonly) unsigned long long type;                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double latitude;                        //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,readonly) double longitude;                       //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,readonly) double horizontalAccuracy;              //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date;                     //@synthesize date=_date - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(double)latitude;
-(id)descriptionDictionary;
-(void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 ;
-(double)longitude;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)getDate;
-(unsigned long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(double)horizontalAccuracy;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithType:(unsigned long long)arg1 latitude:(double)arg2 longitude:(double)arg3 horizontalAccuracy:(double)arg4 date:(id)arg5 ;
@end

