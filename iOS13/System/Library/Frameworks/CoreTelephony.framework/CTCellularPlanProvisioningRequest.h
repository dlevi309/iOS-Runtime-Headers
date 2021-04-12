/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)address;
-(NSString *)matchingID;
-(NSString *)OID;
-(void)setAddress:(NSString *)arg1 ;
-(void)setMatchingID:(NSString *)arg1 ;
-(void)setOID:(NSString *)arg1 ;
-(NSString *)ICCID;
-(void)setICCID:(NSString *)arg1 ;
-(NSString *)confirmationCode;
-(NSString *)EID;
-(void)setConfirmationCode:(NSString *)arg1 ;
-(void)setEID:(NSString *)arg1 ;
@end

