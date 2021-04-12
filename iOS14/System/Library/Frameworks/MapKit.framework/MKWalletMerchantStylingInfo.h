/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface MKWalletMerchantStylingInfo : NSObject <NSSecureCoding> {

	NSData* _styleAttributesData;

}
+(BOOL)supportsSecureCoding;
-(id)imageForSize:(unsigned long long)arg1 scale:(double)arg2 ;
-(id)_featureStyleAttributes;
-(id)initWithStyleAttributes:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)imageForSize:(unsigned long long)arg1 scale:(double)arg2 transparent:(BOOL)arg3 ;
-(id)tintColorForScale:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

