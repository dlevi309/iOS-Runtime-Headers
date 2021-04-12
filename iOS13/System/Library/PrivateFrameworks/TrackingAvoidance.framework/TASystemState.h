/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(BOOL)isOn;
-(id)descriptionDictionary;
-(id)getDate;
-(unsigned long long)getEventSubtype;
-(unsigned long long)systemStateType;
-(id)initWithSystemStateType:(unsigned long long)arg1 isOn:(BOOL)arg2 date:(id)arg3 ;
@end

