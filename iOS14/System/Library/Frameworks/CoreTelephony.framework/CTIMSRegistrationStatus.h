/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CTIMSRegistrationStatus : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isRegisteredForVoice;
	BOOL _isRegisteredForSMS;

}

@property (assign,nonatomic) BOOL isRegisteredForVoice;              //@synthesize isRegisteredForVoice=_isRegisteredForVoice - In the implementation block
@property (assign,nonatomic) BOOL isRegisteredForSMS;                //@synthesize isRegisteredForSMS=_isRegisteredForSMS - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isRegisteredForVoice;
-(void)setIsRegisteredForVoice:(BOOL)arg1 ;
-(void)setIsRegisteredForSMS:(BOOL)arg1 ;
-(BOOL)isRegisteredForSMS;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

