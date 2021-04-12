/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXMosaicGalleryGroupLayout.h>

@interface SXMosaicGalleryVerticalLivingRoomLayout : SXMosaicGalleryGroupLayout {

	double _largeItemHeight;
	double _smallItemHeight;

}

@property (nonatomic,readonly) double largeItemHeight;              //@synthesize largeItemHeight=_largeItemHeight - In the implementation block
@property (nonatomic,readonly) double smallItemHeight;              //@synthesize smallItemHeight=_smallItemHeight - In the implementation block
-(double)calculateHeight;
-(NSRange)columnRangeForItem:(id)arg1 ;
-(id)calculateFrames;
-(id)initWithCluster:(id)arg1 numberOfColumns:(unsigned long long)arg2 columnLayout:(id)arg3 ;
-(double)largeItemHeight;
-(double)smallItemHeight;
@end

