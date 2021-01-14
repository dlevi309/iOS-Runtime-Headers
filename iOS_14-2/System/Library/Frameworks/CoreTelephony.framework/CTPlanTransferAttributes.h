/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CTPlanTransferAttributes : NSObject <NSSecureCoding> {

	unsigned long long _transferCapability;
	unsigned long long _transferStatus;

}

@property (assign,nonatomic) unsigned long long transferCapability;              //@synthesize transferCapability=_transferCapability - In the implementation block
@property (assign,nonatomic) unsigned long long transferStatus;                  //@synthesize transferStatus=_transferStatus - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithTransferCapability:(unsigned long long)arg1 transferStatus:(unsigned long long)arg2 ;
-(unsigned long long)transferStatus;
-(unsigned long long)transferCapability;
-(void)setTransferStatus:(unsigned long long)arg1 ;
-(void)setTransferCapability:(unsigned long long)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

