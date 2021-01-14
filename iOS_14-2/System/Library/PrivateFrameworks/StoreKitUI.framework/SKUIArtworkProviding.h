/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

@class SKUIArtwork;


@protocol SKUIArtworkProviding <NSObject,NSSecureCoding,SKUICacheCoding,NSCopying>
@property (nonatomic,readonly) SKUIArtwork * largestArtwork; 
@property (nonatomic,readonly) SKUIArtwork * smallestArtwork; 
@required
+(BOOL)canHandleArtworkFormat:(id)arg1;
-(id)artworkURLForSize:(long long)arg1;
-(BOOL)hasArtwork;
-(id)artworkForSize:(long long)arg1;
-(SKUIArtwork *)largestArtwork;
-(id)bestArtworkForSize:(CGSize)arg1;
-(id)artworkWithWidth:(long long)arg1;
-(id)bestArtworkForScaledSize:(CGSize)arg1;
-(id)preferredExactArtworkForSize:(CGSize)arg1;
-(SKUIArtwork *)smallestArtwork;

@end

