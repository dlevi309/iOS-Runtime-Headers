/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSRange)columnRangeForItem:(id)arg1 ;
-(double)calculateHeight;
-(id)calculateFrames;
-(id)initWithCluster:(id)arg1 numberOfColumns:(unsigned long long)arg2 columnLayout:(id)arg3 ;
-(double)largeItemHeight;
-(double)smallItemHeight;
@end

