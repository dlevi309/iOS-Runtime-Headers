/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/

#import <TrackingAvoidance/TrackingAvoidance-Structs.h>
#import <libobjc.A.dylib/OSLogCoding.h>
#import <libobjc.A.dylib/TAEventProtocol.h>

@class NSDate, NSString;

@interface TAGeoNavigationNotification : NSObject <OSLogCoding, TAEventProtocol> {

	NSDate* _date;
	unsigned long long _transportType;
	unsigned long long _navState;

}

@property (nonatomic,copy,readonly) NSDate * date;                            //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) unsigned long long transportType;              //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) unsigned long long navState;                   //@synthesize navState=_navState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)descriptionDictionary;
-(void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 ;
-(unsigned long long)navState;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)transportType;
-(NSString *)description;
-(id)getDate;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithTransportType:(unsigned long long)arg1 andNavigationState:(unsigned long long)arg2 date:(id)arg3 ;
@end

