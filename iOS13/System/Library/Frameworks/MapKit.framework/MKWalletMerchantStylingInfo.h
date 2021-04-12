/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface MKWalletMerchantStylingInfo : NSObject <NSSecureCoding> {

	NSData* _styleAttributesData;

}
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStyleAttributes:(id)arg1 ;
-(id)imageForSize:(unsigned long long)arg1 scale:(double)arg2 ;
-(id)_featureStyleAttributes;
-(id)imageForSize:(unsigned long long)arg1 scale:(double)arg2 transparent:(BOOL)arg3 ;
-(id)tintColorForScale:(double)arg1 ;
@end

