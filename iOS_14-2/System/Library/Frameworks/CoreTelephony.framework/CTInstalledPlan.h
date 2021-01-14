/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CTPlanIdentifier, CTPlanTransferAttributes;

@interface CTInstalledPlan : NSObject <NSSecureCoding> {

	BOOL _isSelected;
	CTPlanIdentifier* _planID;
	CTPlanTransferAttributes* _transferAttributes;

}

@property (nonatomic,retain) CTPlanIdentifier * planID;                                  //@synthesize planID=_planID - In the implementation block
@property (assign,nonatomic) BOOL isSelected;                                            //@synthesize isSelected=_isSelected - In the implementation block
@property (nonatomic,retain) CTPlanTransferAttributes * transferAttributes;              //@synthesize transferAttributes=_transferAttributes - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)iccid;
-(CTPlanIdentifier *)planID;
-(void)setPlanID:(CTPlanIdentifier *)arg1 ;
-(id)init;
-(CTPlanTransferAttributes *)transferAttributes;
-(void)setTransferAttributes:(CTPlanTransferAttributes *)arg1 ;
-(id)carrierName;
-(BOOL)isSelected;
-(id)phoneNumber;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setIsSelected:(BOOL)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

