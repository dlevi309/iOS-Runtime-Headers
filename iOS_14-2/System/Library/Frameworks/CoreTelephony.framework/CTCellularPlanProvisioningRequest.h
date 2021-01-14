/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTCellularPlanProvisioningRequest : NSObject <NSSecureCoding> {

	NSString* _address;
	NSString* _matchingID;
	NSString* _OID;
	NSString* _confirmationCode;
	NSString* _ICCID;
	NSString* _EID;

}

@property (nonatomic,retain) NSString * address;                       //@synthesize address=_address - In the implementation block
@property (nonatomic,retain) NSString * matchingID;                    //@synthesize matchingID=_matchingID - In the implementation block
@property (nonatomic,retain) NSString * OID;                           //@synthesize OID=_OID - In the implementation block
@property (nonatomic,retain) NSString * confirmationCode;              //@synthesize confirmationCode=_confirmationCode - In the implementation block
@property (nonatomic,retain) NSString * ICCID;                         //@synthesize ICCID=_ICCID - In the implementation block
@property (nonatomic,retain) NSString * EID;                           //@synthesize EID=_EID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)EID;
-(void)setEID:(NSString *)arg1 ;
-(NSString *)matchingID;
-(void)setMatchingID:(NSString *)arg1 ;
-(NSString *)confirmationCode;
-(id)init;
-(NSString *)OID;
-(void)setConfirmationCode:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)ICCID;
-(id)description;
-(NSString *)address;
-(void)setAddress:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setICCID:(NSString *)arg1 ;
-(void)setOID:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

