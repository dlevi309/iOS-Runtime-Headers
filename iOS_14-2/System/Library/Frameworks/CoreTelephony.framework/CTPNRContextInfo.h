/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTPNRContextInfo : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isReady;
	NSString* _plmn;
	NSString* _imsi;
	NSString* _phoneNumber;
	NSString* _phoneNumberOnSIM;

}

@property (assign,nonatomic) BOOL isReady;                             //@synthesize isReady=_isReady - In the implementation block
@property (nonatomic,retain) NSString * plmn;                          //@synthesize plmn=_plmn - In the implementation block
@property (nonatomic,retain) NSString * imsi;                          //@synthesize imsi=_imsi - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;                   //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSString * phoneNumberOnSIM;              //@synthesize phoneNumberOnSIM=_phoneNumberOnSIM - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)plmn;
-(NSString *)imsi;
-(void)setPlmn:(NSString *)arg1 ;
-(void)setImsi:(NSString *)arg1 ;
-(NSString *)phoneNumberOnSIM;
-(BOOL)isEqualToPNRContextInfo:(id)arg1 ;
-(id)init;
-(void)setPhoneNumberOnSIM:(NSString *)arg1 ;
-(NSString *)phoneNumber;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setIsReady:(BOOL)arg1 ;
-(id)description;
-(BOOL)isReady;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

