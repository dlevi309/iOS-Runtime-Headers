/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


#import <WatchListKit/WatchListKit-Structs.h>
@class NSArray;

@interface WLKArtworkVariantListing : NSObject {

	NSArray* _artworkVariants;

}

@property (nonatomic,copy,readonly) NSArray * artworkVariants;              //@synthesize artworkVariants=_artworkVariants - In the implementation block
-(id)initWithArtworkDictionary:(id)arg1 ;
-(id)bestArtworkVariantOfType:(long long)arg1 forSize:(CGSize)arg2 ;
-(id)bestArtworkVariantForSize:(CGSize)arg1 ;
-(id)artworkVariantOfType:(long long)arg1 ;
-(NSArray *)artworkVariants;
@end

