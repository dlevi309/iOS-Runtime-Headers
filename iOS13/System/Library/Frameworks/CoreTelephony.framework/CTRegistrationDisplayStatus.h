/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)registrationDisplayStatus;
-(BOOL)isInHomeCountry;
-(BOOL)changedDueToSimRemoval;
-(BOOL)isRegistrationForcedHome;
-(void)setRegistrationDisplayStatus:(NSString *)arg1 ;
-(void)setIsInHomeCountry:(BOOL)arg1 ;
-(void)setChangedDueToSimRemoval:(BOOL)arg1 ;
-(void)setIsRegistrationForcedHome:(BOOL)arg1 ;
@end

