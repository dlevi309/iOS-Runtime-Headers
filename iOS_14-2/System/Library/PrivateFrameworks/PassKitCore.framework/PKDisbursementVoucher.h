/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSURL *)redemptionURL;
-(void)setRedemptionURL:(NSURL *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(id)description;
-(NSData *)data;
-(BOOL)isEqualToDisbursementVoucher:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

