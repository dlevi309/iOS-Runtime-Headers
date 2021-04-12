/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPassImageSet.h>

@class PKImage;

@interface PKPassPersonalizationImageSet : PKPassImageSet {

	PKImage* _logoImage;

}

@property (nonatomic,retain) PKImage * logoImage;              //@synthesize logoImage=_logoImage - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)shouldCache;
+(long long)imageSetType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PKImage *)logoImage;
-(id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4 ;
-(void)preheatImages;
-(void)setLogoImage:(PKImage *)arg1 ;
@end

