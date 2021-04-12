/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithEnabled:(BOOL)arg1 type:(long long)arg2 isEmergencyText:(BOOL)arg3 ;
-(BOOL)isEmergencyText;
-(BOOL)isEqualToCTEmergencyMode:(id)arg1 ;
-(void)setIsEmergencyText:(BOOL)arg1 ;
@end

