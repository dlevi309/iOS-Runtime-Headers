/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPassImageSet.h>

@class PKImage;

@interface PKPassDetailsImageSet : PKPassImageSet {

	PKImage* _cardHolderPicture;

}

@property (nonatomic,retain) PKImage * cardHolderPicture;              //@synthesize cardHolderPicture=_cardHolderPicture - In the implementation block
+(BOOL)shouldCache;
+(BOOL)supportsSecureCoding;
+(long long)imageSetType;
-(void)preheatImages;
-(id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCardHolderPicture:(PKImage *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(PKImage *)cardHolderPicture;
-(BOOL)isEqual:(id)arg1 ;
@end

