/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
*/

#import <Radio/Radio-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface RadioArtworkCollection : NSObject <NSCopying> {

	NSArray* _artworks;

}

@property (nonatomic,readonly) NSArray * artworks;              //@synthesize artworks=_artworks - In the implementation block
-(id)artworkCatalog;
-(id)description;
-(NSArray *)artworks;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)bestArtworkForPixelSize:(CGSize)arg1 ;
-(id)initWithArtworkVariants:(id)arg1 ;
-(id)initWithArtworks:(id)arg1 ;
-(id)bestArtworkForPointSize:(CGSize)arg1 ;
-(id)_artworksBySortingArtworks:(id)arg1 ;
@end

