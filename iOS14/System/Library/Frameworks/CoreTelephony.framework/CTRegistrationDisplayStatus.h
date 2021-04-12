/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTRegistrationDisplayStatus : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isInHomeCountry;
	BOOL _changedDueToSimRemoval;
	BOOL _isRegistrationForcedHome;
	NSString* _registrationDisplayStatus;

}

@property (nonatomic,retain) NSString * registrationDisplayStatus;              //@synthesize registrationDisplayStatus=_registrationDisplayStatus - In the implementation block
@property (assign,nonatomic) BOOL isInHomeCountry;                              //@synthesize isInHomeCountry=_isInHomeCountry - In the implementation block
@property (assign,nonatomic) BOOL changedDueToSimRemoval;                       //@synthesize changedDueToSimRemoval=_changedDueToSimRemoval - In the implementation block
@property (assign,nonatomic) BOOL isRegistrationForcedHome;                     //@synthesize isRegistrationForcedHome=_isRegistrationForcedHome - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)changedDueToSimRemoval;
-(id)description;
-(void)setIsInHomeCountry:(BOOL)arg1 ;
-(void)setIsRegistrationForcedHome:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isRegistrationForcedHome;
-(BOOL)isInHomeCountry;
-(NSString *)registrationDisplayStatus;
-(void)setChangedDueToSimRemoval:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRegistrationDisplayStatus:(NSString *)arg1 ;
@end

