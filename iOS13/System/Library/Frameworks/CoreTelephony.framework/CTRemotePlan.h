/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CTRemotePlanIdentifier, CTPlanTransferAttributes;

@interface CTRemotePlan : NSObject <NSSecureCoding> {

	CTRemotePlanIdentifier* _planID;
	CTPlanTransferAttributes* _transferAttributes;

}

@property (nonatomic,retain) CTRemotePlanIdentifier * planID;                            //@synthesize planID=_planID - In the implementation block
@property (nonatomic,retain) CTPlanTransferAttributes * transferAttributes;              //@synthesize transferAttributes=_transferAttributes - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)countryCode;
-(id)phoneNumber;
-(id)label;
-(id)iccid;
-(id)carrierName;
-(CTRemotePlanIdentifier *)planID;
-(CTPlanTransferAttributes *)transferAttributes;
-(void)setPlanID:(CTRemotePlanIdentifier *)arg1 ;
-(void)setTransferAttributes:(CTPlanTransferAttributes *)arg1 ;
@end

