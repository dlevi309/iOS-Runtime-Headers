/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@class PHAsset, NSMutableArray;

@interface VCPMovieCurationResults : NSObject {

	PHAsset* _phAsset;
	NSMutableArray* _highlights;

}

@property (nonatomic,readonly) PHAsset * phAsset;                               //@synthesize phAsset=_phAsset - In the implementation block
@property (nonatomic,retain,readonly) NSMutableArray * highlights;              //@synthesize highlights=_highlights - In the implementation block
-(PHAsset *)phAsset;
-(id)initWithPHAsset:(id)arg1 ;
-(NSMutableArray *)highlights;
@end

