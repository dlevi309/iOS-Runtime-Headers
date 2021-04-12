/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@interface _MPMediaLibraryArtworkDataSourceCacheKey : NSObject {

	id _catalogIdentifier;
	CGSize _representationSize;

}

@property (nonatomic,copy) id catalogIdentifier;                     //@synthesize catalogIdentifier=_catalogIdentifier - In the implementation block
@property (assign,nonatomic) CGSize representationSize;              //@synthesize representationSize=_representationSize - In the implementation block
-(void)setRepresentationSize:(CGSize)arg1 ;
-(id)initWithArtworkCatalog:(id)arg1 representativeSize:(CGSize)arg2 ;
-(id)catalogIdentifier;
-(void)setCatalogIdentifier:(id)arg1 ;
-(unsigned long long)hash;
-(CGSize)representationSize;
-(BOOL)isEqual:(id)arg1 ;
@end

