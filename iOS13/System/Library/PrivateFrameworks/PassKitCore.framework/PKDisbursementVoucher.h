/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSURL;

@interface PKDisbursementVoucher : NSObject <NSSecureCoding, NSCopying> {

	NSData* _data;
	NSURL* _redemptionURL;

}

@property (nonatomic,copy) NSData * data;                      //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSURL * redemptionURL;              //@synthesize redemptionURL=_redemptionURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSURL *)redemptionURL;
-(void)setRedemptionURL:(NSURL *)arg1 ;
-(BOOL)isEqualToDisbursementVoucher:(id)arg1 ;
@end

