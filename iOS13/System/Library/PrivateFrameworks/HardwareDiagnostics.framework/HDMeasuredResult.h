/*
* Generated on Monday, March 1, 2021 at 2:34:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HardwareDiagnostics.framework/HardwareDiagnostics
*/

#import <HardwareDiagnostics/HardwareDiagnostics-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HDLimit, NSMeasurement;

@interface HDMeasuredResult : NSObject <NSSecureCoding, NSCopying> {

	BOOL _valueWithinLimits;
	NSString* _name;
	HDLimit* _limit;
	NSMeasurement* _measurement;

}

@property (nonatomic,copy) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) HDLimit * limit;                                   //@synthesize limit=_limit - In the implementation block
@property (nonatomic,copy,readonly) NSMeasurement * measurement;              //@synthesize measurement=_measurement - In the implementation block
@property (nonatomic,readonly) BOOL valueWithinLimits;                        //@synthesize valueWithinLimits=_valueWithinLimits - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(HDLimit *)limit;
-(void)setLimit:(HDLimit *)arg1 ;
-(NSMeasurement *)measurement;
-(BOOL)valueWithinLimits;
-(id)initWithName:(id)arg1 measurement:(id)arg2 ;
-(BOOL)isEqualToMeasuredResult:(id)arg1 ;
@end

