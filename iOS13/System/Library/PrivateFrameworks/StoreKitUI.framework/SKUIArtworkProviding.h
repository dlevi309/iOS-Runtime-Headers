/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

@class SKUIArtwork;


@protocol SKUIArtworkProviding <NSObject,NSSecureCoding,SKUICacheCoding,NSCopying>
@property (nonatomic,readonly) SKUIArtwork * largestArtwork; 
@property (nonatomic,readonly) SKUIArtwork * smallestArtwork; 
@required
+(BOOL)canHandleArtworkFormat:(id)arg1;
-(BOOL)hasArtwork;
-(id)artworkForSize:(long long)arg1;
-(id)artworkURLForSize:(long long)arg1;
-(SKUIArtwork *)largestArtwork;
-(id)bestArtworkForSize:(CGSize)arg1;
-(id)artworkWithWidth:(long long)arg1;
-(id)bestArtworkForScaledSize:(CGSize)arg1;
-(id)preferredExactArtworkForSize:(CGSize)arg1;
-(SKUIArtwork *)smallestArtwork;

@end

