/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)phoneNumber;
-(id)iccid;
-(id)carrierName;
-(BOOL)isSelected;
-(void)setIsSelected:(BOOL)arg1 ;
-(CTPlanIdentifier *)planID;
-(CTPlanTransferAttributes *)transferAttributes;
-(void)setPlanID:(CTPlanIdentifier *)arg1 ;
-(void)setTransferAttributes:(CTPlanTransferAttributes *)arg1 ;
@end

