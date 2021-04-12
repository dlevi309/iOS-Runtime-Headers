/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(unsigned long long)deviceType;
-(unsigned long long)notificationState;
-(TASPAdvertisement *)advertisement;
-(id)descriptionDictionary;
-(id)getDate;
-(id)initWithTASPAdvertisement:(id)arg1 deviceType:(unsigned long long)arg2 notificationState:(unsigned long long)arg3 date:(id)arg4 ;
@end

