/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


#import <Silex/Silex-Structs.h>
@class NSMutableArray, NSArray, SXMosaicGalleryCluster, SXMosaicGalleryColumnLayout;

@interface SXMosaicGalleryGroupLayout : NSObject {

	double _height;
	NSMutableArray* _columnRanges;
	NSArray* _frames;
	unsigned long long _numberOfColumns;
	SXMosaicGalleryCluster* _cluster;
	SXMosaicGalleryColumnLayout* _columnLayout;

}

@property (nonatomic,readonly) NSArray * frames;                                        //@synthesize frames=_frames - In the implementation block
@property (nonatomic,readonly) NSMutableArray * columnRanges;                           //@synthesize columnRanges=_columnRanges - In the implementation block
@property (nonatomic,readonly) double height;                                           //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) SXMosaicGalleryCluster * cluster;                        //@synthesize cluster=_cluster - In the implementation block
@property (nonatomic,readonly) SXMosaicGalleryColumnLayout * columnLayout;              //@synthesize columnLayout=_columnLayout - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfColumns;                      //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
-(id)init;
-(NSArray *)frames;
-(double)height;
-(unsigned long long)numberOfColumns;
-(SXMosaicGalleryCluster *)cluster;
-(CGRect)frameForItemAtIndex:(unsigned long long)arg1 ;
-(SXMosaicGalleryColumnLayout *)columnLayout;
-(NSRange)columnRangeForItem:(id)arg1 ;
-(double)desiredHeightForItem:(id)arg1 ;
-(NSMutableArray *)columnRanges;
-(double)calculateHeight;
-(id)calculateFrames;
-(id)initWithCluster:(id)arg1 numberOfColumns:(unsigned long long)arg2 columnLayout:(id)arg3 ;
@end

