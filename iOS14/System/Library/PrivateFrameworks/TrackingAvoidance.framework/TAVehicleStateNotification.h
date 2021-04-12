/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/

#import <TrackingAvoidance/TrackingAvoidance-Structs.h>
#import <libobjc.A.dylib/OSLogCoding.h>
#import <libobjc.A.dylib/TAEventProtocol.h>

@class NSDate, NSString;

@interface TAVehicleStateNotification : NSObject <OSLogCoding, TAEventProtocol> {

	NSDate* _date;
	unsigned long long _vehicularState;
	unsigned long long _vehicularHints;
	unsigned long long _operatorState;

}

@property (nonatomic,copy,readonly) NSDate * date;                             //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) unsigned long long vehicularState;              //@synthesize vehicularState=_vehicularState - In the implementation block
@property (nonatomic,readonly) unsigned long long vehicularHints;              //@synthesize vehicularHints=_vehicularHints - In the implementation block
@property (nonatomic,readonly) unsigned long long operatorState;               //@synthesize operatorState=_operatorState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)descriptionDictionary;
-(id)initWithVehicularState:(unsigned long long)arg1 andVehicularHints:(unsigned long long)arg2 andOperatorState:(unsigned long long)arg3 date:(id)arg4 ;
-(void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)operatorState;
-(NSString *)description;
-(unsigned long long)vehicularState;
-(id)getDate;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(unsigned long long)vehicularHints;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

