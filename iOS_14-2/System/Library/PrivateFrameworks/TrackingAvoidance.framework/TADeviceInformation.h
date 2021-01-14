/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/

#import <TrackingAvoidance/TrackingAvoidance-Structs.h>
#import <libobjc.A.dylib/OSLogCoding.h>
#import <libobjc.A.dylib/TAEventProtocol.h>

@class TASPAdvertisement, NSDate, NSString;

@interface TADeviceInformation : NSObject <OSLogCoding, TAEventProtocol> {

	TASPAdvertisement* _advertisement;
	unsigned long long _deviceType;
	unsigned long long _notificationState;
	NSDate* _date;

}

@property (nonatomic,readonly) TASPAdvertisement * advertisement;                 //@synthesize advertisement=_advertisement - In the implementation block
@property (nonatomic,readonly) unsigned long long deviceType;                     //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,readonly) unsigned long long notificationState;              //@synthesize notificationState=_notificationState - In the implementation block
@property (nonatomic,readonly) NSDate * date;                                     //@synthesize date=_date - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)deviceTypeToString:(unsigned long long)arg1 ;
+(id)notificationStateToString:(unsigned long long)arg1 ;
-(unsigned long long)deviceType;
-(id)descriptionDictionary;
-(void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)notificationState;
-(NSString *)description;
-(id)getDate;
-(TASPAdvertisement *)advertisement;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithTASPAdvertisement:(id)arg1 deviceType:(unsigned long long)arg2 notificationState:(unsigned long long)arg3 date:(id)arg4 ;
@end

