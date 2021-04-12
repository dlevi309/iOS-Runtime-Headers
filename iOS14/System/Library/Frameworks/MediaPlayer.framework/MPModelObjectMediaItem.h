/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPNondurableMediaItem.h>

@class NSDictionary, MPModelObject;

@interface MPModelObjectMediaItem : MPNondurableMediaItem {

	NSDictionary* _propertyValues;
	MPModelObject* _modelObject;
	/*^block*/id _fallbackArtworkCatalogBlock;

}

@property (nonatomic,readonly) MPModelObject * modelObject;              //@synthesize modelObject=_modelObject - In the implementation block
@property (nonatomic,copy) id fallbackArtworkCatalogBlock;               //@synthesize fallbackArtworkCatalogBlock=_fallbackArtworkCatalogBlock - In the implementation block
+(BOOL)supportsSecureCoding;
-(MPModelObject *)modelObject;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithModelObject:(id)arg1 ;
-(id)fallbackArtworkCatalogBlock;
-(void)setFallbackArtworkCatalogBlock:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

