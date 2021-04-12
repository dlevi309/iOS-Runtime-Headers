/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CTPlan.h>

@class CTRemotePlanIdentifier, CTPlanTransferAttributes;

@interface CTRemotePlan : CTPlan {

	CTRemotePlanIdentifier* _planID;
	CTPlanTransferAttributes* _transferAttributes;

}

@property (nonatomic,retain) CTRemotePlanIdentifier * planID;                            //@synthesize planID=_planID - In the implementation block
@property (nonatomic,retain) CTPlanTransferAttributes * transferAttributes;              //@synthesize transferAttributes=_transferAttributes - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)iccid;
-(CTRemotePlanIdentifier *)planID;
-(void)setPlanID:(CTRemotePlanIdentifier *)arg1 ;
-(id)countryCode;
-(id)init;
-(CTPlanTransferAttributes *)transferAttributes;
-(void)setTransferAttributes:(CTPlanTransferAttributes *)arg1 ;
-(id)carrierName;
-(id)phoneNumber;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)label;
-(BOOL)isEqual:(id)arg1 ;
@end

