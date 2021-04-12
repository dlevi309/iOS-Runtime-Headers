/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/SKUIArtworkProviding.h>

@class SKUIArtwork, NSMutableArray, NSArray, NSString, NSMutableDictionary;

@interface SKUIArtworkList : NSObject <SKUIArtworkProviding> {

	NSMutableArray* _artworks;

}

@property (getter=_lookupArray,nonatomic,readonly) NSArray * _lookupArray; 
@property (nonatomic,copy) NSArray * artworks;                                          //@synthesize artworks=_artworks - In the implementation block
@property (nonatomic,readonly) SKUIArtwork * largestArtwork; 
@property (nonatomic,readonly) SKUIArtwork * smallestArtwork; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSMutableDictionary * cacheRepresentation; 
+(BOOL)supportsSecureCoding;
+(id)artworkForSize:(long long)arg1 artworkDictionaries:(id)arg2 ;
+(BOOL)canHandleArtworkFormat:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(NSArray *)artworks;
-(id)initWithCacheRepresentation:(id)arg1 ;
-(id)artworkURLForSize:(long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)hasArtwork;
-(void)setArtworks:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)artworkForSize:(long long)arg1 ;
-(NSMutableDictionary *)cacheRepresentation;
-(SKUIArtwork *)largestArtwork;
-(NSArray *)_lookupArray;
-(id)bestArtworkForSize:(CGSize)arg1 ;
-(id)artworkWithWidth:(long long)arg1 ;
-(id)bestArtworkForScaledSize:(CGSize)arg1 ;
-(id)preferredExactArtworkForSize:(CGSize)arg1 ;
-(SKUIArtwork *)smallestArtwork;
-(id)initWithArtworkListArray:(id)arg1 ;
-(id)initWithLookupArray:(id)arg1 ;
@end

