/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPassImageSet.h>

@class PKImage;

@interface PKPassLogoImageSet : PKPassImageSet {

	PKImage* _logoImage;
	PKImage* _backgroundImage;
	PKImage* _thumbnailImage;
	PKImage* _stripImage;
	PKImage* _footerImage;
	PKImage* _bankLogoImage;
	PKImage* _networkLogoImage;
	PKImage* _cobrandLogoImage;
	PKImage* _cardBackgroundImage;
	PKImage* _cardBackgroundCombinedImage;
	PKImage* _compactBankLogoDarkImage;
	PKImage* _compactBankLogoLightImage;

}

@property (nonatomic,retain) PKImage * logoImage;                                //@synthesize logoImage=_logoImage - In the implementation block
@property (nonatomic,retain) PKImage * backgroundImage;                          //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain) PKImage * thumbnailImage;                           //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
@property (nonatomic,retain) PKImage * stripImage;                               //@synthesize stripImage=_stripImage - In the implementation block
@property (nonatomic,retain) PKImage * footerImage;                              //@synthesize footerImage=_footerImage - In the implementation block
@property (nonatomic,retain) PKImage * bankLogoImage;                            //@synthesize bankLogoImage=_bankLogoImage - In the implementation block
@property (nonatomic,retain) PKImage * networkLogoImage;                         //@synthesize networkLogoImage=_networkLogoImage - In the implementation block
@property (nonatomic,retain) PKImage * cobrandLogoImage;                         //@synthesize cobrandLogoImage=_cobrandLogoImage - In the implementation block
@property (nonatomic,retain) PKImage * cardBackgroundImage;                      //@synthesize cardBackgroundImage=_cardBackgroundImage - In the implementation block
@property (nonatomic,retain) PKImage * cardBackgroundCombinedImage;              //@synthesize cardBackgroundCombinedImage=_cardBackgroundCombinedImage - In the implementation block
@property (nonatomic,retain) PKImage * compactBankLogoDarkImage;                 //@synthesize compactBankLogoDarkImage=_compactBankLogoDarkImage - In the implementation block
@property (nonatomic,retain) PKImage * compactBankLogoLightImage;                //@synthesize compactBankLogoLightImage=_compactBankLogoLightImage - In the implementation block
+(BOOL)shouldCache;
+(BOOL)supportsSecureCoding;
+(unsigned)currentVersion;
+(id)archiveName;
+(long long)imageSetType;
-(void)preheatImages;
-(id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setFooterImage:(PKImage *)arg1 ;
-(void)setBackgroundImage:(PKImage *)arg1 ;
-(void)setLogoImage:(PKImage *)arg1 ;
-(void)setStripImage:(PKImage *)arg1 ;
-(void)setCardBackgroundCombinedImage:(PKImage *)arg1 ;
-(PKImage *)cardBackgroundCombinedImage;
-(void)setBankLogoImage:(PKImage *)arg1 ;
-(void)setNetworkLogoImage:(PKImage *)arg1 ;
-(void)setCobrandLogoImage:(PKImage *)arg1 ;
-(void)setCardBackgroundImage:(PKImage *)arg1 ;
-(void)setCompactBankLogoDarkImage:(PKImage *)arg1 ;
-(PKImage *)bankLogoImage;
-(void)setCompactBankLogoLightImage:(PKImage *)arg1 ;
-(PKImage *)networkLogoImage;
-(PKImage *)cobrandLogoImage;
-(PKImage *)cardBackgroundImage;
-(PKImage *)thumbnailImage;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(PKImage *)stripImage;
-(PKImage *)logoImage;
-(PKImage *)backgroundImage;
-(PKImage *)footerImage;
-(PKImage *)compactBankLogoDarkImage;
-(PKImage *)compactBankLogoLightImage;
-(void)setThumbnailImage:(PKImage *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

