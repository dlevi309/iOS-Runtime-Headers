/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)supportsSecureCoding;
+(unsigned)currentVersion;
+(BOOL)shouldCache;
+(long long)imageSetType;
+(id)archiveName;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PKImage *)backgroundImage;
-(void)setBackgroundImage:(PKImage *)arg1 ;
-(PKImage *)thumbnailImage;
-(void)setThumbnailImage:(PKImage *)arg1 ;
-(PKImage *)footerImage;
-(PKImage *)logoImage;
-(PKImage *)stripImage;
-(id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4 ;
-(void)preheatImages;
-(void)setLogoImage:(PKImage *)arg1 ;
-(void)setStripImage:(PKImage *)arg1 ;
-(void)setFooterImage:(PKImage *)arg1 ;
-(void)setCardBackgroundCombinedImage:(PKImage *)arg1 ;
-(PKImage *)cardBackgroundCombinedImage;
-(void)setBankLogoImage:(PKImage *)arg1 ;
-(void)setNetworkLogoImage:(PKImage *)arg1 ;
-(void)setCobrandLogoImage:(PKImage *)arg1 ;
-(void)setCardBackgroundImage:(PKImage *)arg1 ;
-(PKImage *)bankLogoImage;
-(PKImage *)networkLogoImage;
-(PKImage *)cobrandLogoImage;
-(PKImage *)cardBackgroundImage;
@end

