/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/

#import <TrackingAvoidance/TrackingAvoidance-Structs.h>
#import <libobjc.A.dylib/OSLogCoding.h>
#import <libobjc.A.dylib/TAEventProtocol.h>

@class NSDate, NSString;

@interface TASystemState : NSObject <OSLogCoding, TAEventProtocol> {

	BOOL _isOn;
	unsigned long long _systemStateType;
	NSDate* _date;

}

@property (nonatomic,readonly) unsigned long long systemStateType;              //@synthesize systemStateType=_systemStateType - In the implementation block
@property (nonatomic,readonly) BOOL isOn;                                       //@synthesize isOn=_isOn - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date;                              //@synthesize date=_date - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)descriptionDictionary;
-(unsigned long long)getEventSubtype;
-(BOOL)isOn;
-(void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithSystemStateType:(unsigned long long)arg1 isOn:(BOOL)arg2 date:(id)arg3 ;
-(id)getDate;
-(unsigned long long)systemStateType;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

