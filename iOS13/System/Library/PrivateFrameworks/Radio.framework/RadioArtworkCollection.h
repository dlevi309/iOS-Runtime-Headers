/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)artworks;
-(id)bestArtworkForPixelSize:(CGSize)arg1 ;
-(id)initWithArtworkVariants:(id)arg1 ;
-(id)initWithArtworks:(id)arg1 ;
-(id)bestArtworkForPointSize:(CGSize)arg1 ;
-(id)_artworksBySortingArtworks:(id)arg1 ;
@end

