/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/SKUIArtworkProviding.h>

@class NSString, NSMutableSet, SKUIArtwork, NSMutableDictionary;

@interface SKUIArtworkTemplate : NSObject <SKUIArtworkProviding> {

	long long _height;
	long long _width;
	NSString* _urlTemplateString;
	NSMutableSet* _servedArtworks;

}

@property (nonatomic,readonly) long long height;                                       //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) long long width;                                        //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) NSString * urlTemplateString;                           //@synthesize urlTemplateString=_urlTemplateString - In the implementation block
@property (nonatomic,readonly) NSMutableSet * servedArtworks;                          //@synthesize servedArtworks=_servedArtworks - In the implementation block
@property (nonatomic,readonly) SKUIArtwork * largestArtwork; 
@property (nonatomic,readonly) SKUIArtwork * smallestArtwork; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSMutableDictionary * cacheRepresentation; 
+(BOOL)supportsSecureCoding;
+(BOOL)canHandleArtworkFormat:(id)arg1 ;
-(long long)width;
-(id)_lookupDictionary;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)height;
-(NSString *)description;
-(id)initWithCacheRepresentation:(id)arg1 ;
-(id)artworkURLForSize:(long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)hasArtwork;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)artworkForSize:(long long)arg1 ;
-(NSMutableDictionary *)cacheRepresentation;
-(SKUIArtwork *)largestArtwork;
-(NSString *)urlTemplateString;
-(id)bestArtworkForSize:(CGSize)arg1 ;
-(id)artworkWithWidth:(long long)arg1 ;
-(id)bestArtworkForScaledSize:(CGSize)arg1 ;
-(id)preferredExactArtworkForSize:(CGSize)arg1 ;
-(SKUIArtwork *)smallestArtwork;
-(id)initWithTemplateDictionary:(id)arg1 ;
-(NSMutableSet *)servedArtworks;
-(id)_artworkWithWidth:(long long)arg1 ;
-(id)_urlStringWithTargetSize:(CGSize)arg1 ;
-(CGSize)_sizeForWidth:(long long)arg1 ;
-(id)_artworkURLWithWidth:(long long)arg1 ;
@end

