/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@interface _MPMediaLibraryArtworkDataSourceCacheKey : NSObject {

	id _catalogIdentifier;
	CGSize _representationSize;

}

@property (nonatomic,copy) id catalogIdentifier;                     //@synthesize catalogIdentifier=_catalogIdentifier - In the implementation block
@property (assign,nonatomic) CGSize representationSize;              //@synthesize representationSize=_representationSize - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(CGSize)representationSize;
-(void)setRepresentationSize:(CGSize)arg1 ;
-(id)initWithArtworkCatalog:(id)arg1 representativeSize:(CGSize)arg2 ;
-(id)catalogIdentifier;
-(void)setCatalogIdentifier:(id)arg1 ;
@end

