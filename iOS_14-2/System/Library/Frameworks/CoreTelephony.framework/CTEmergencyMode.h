/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CTEmergencyMode : NSObject <NSCopying, NSSecureCoding> {

	BOOL _enabled;
	BOOL _isEmergencyText;
	long long _type;

}

@property (assign,nonatomic) BOOL enabled;                      //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) long long type;                    //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL isEmergencyText;              //@synthesize isEmergencyText=_isEmergencyText - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)convertFromEmergencyMode:(const EmergencyMode*)arg1 ;
-(BOOL)enabled;
-(id)init;
-(void)setIsEmergencyText:(BOOL)arg1 ;
-(id)initWithEnabled:(BOOL)arg1 type:(long long)arg2 isEmergencyText:(BOOL)arg3 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(BOOL)isEqualToCTEmergencyMode:(id)arg1 ;
-(id)description;
-(BOOL)isEmergencyText;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

