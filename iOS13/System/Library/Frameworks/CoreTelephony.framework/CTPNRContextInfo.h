/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/IDSCTSIMContext.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTPNRContextInfo : NSObject <IDSCTSIMContext, NSCopying, NSSecureCoding> {

	BOOL _isReady;
	NSString* _plmn;
	NSString* _imsi;
	NSString* _phoneNumber;
	NSString* _phoneNumberOnSIM;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * phoneNumber; 
@property (nonatomic,readonly) NSString * phoneNumberOnSIM; 
@property (assign,nonatomic) BOOL isReady;                               //@synthesize isReady=_isReady - In the implementation block
@property (nonatomic,retain) NSString * plmn;                            //@synthesize plmn=_plmn - In the implementation block
@property (nonatomic,retain) NSString * imsi;                            //@synthesize imsi=_imsi - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;                     //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSString * phoneNumberOnSIM;                //@synthesize phoneNumberOnSIM=_phoneNumberOnSIM - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isReady;
-(NSString *)phoneNumber;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(NSString *)plmn;
-(void)setPlmn:(NSString *)arg1 ;
-(NSString *)imsi;
-(NSString *)phoneNumberOnSIM;
-(void)setIsReady:(BOOL)arg1 ;
-(BOOL)isEqualToPNRContextInfo:(id)arg1 ;
-(void)setImsi:(NSString *)arg1 ;
-(void)setPhoneNumberOnSIM:(NSString *)arg1 ;
@end

