/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(unsigned long long)vehicularState;
-(unsigned long long)vehicularHints;
-(id)descriptionDictionary;
-(id)getDate;
-(unsigned long long)operatorState;
-(id)initWithVehicularState:(unsigned long long)arg1 andVehicularHints:(unsigned long long)arg2 andOperatorState:(unsigned long long)arg3 date:(id)arg4 ;
@end

