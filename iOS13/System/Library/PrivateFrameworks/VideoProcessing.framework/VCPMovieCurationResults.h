/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@class PHAsset, NSMutableArray;

@interface VCPMovieCurationResults : NSObject {

	PHAsset* _phAsset;
	NSMutableArray* _highlights;

}

@property (nonatomic,readonly) PHAsset * phAsset;                               //@synthesize phAsset=_phAsset - In the implementation block
@property (nonatomic,retain,readonly) NSMutableArray * highlights;              //@synthesize highlights=_highlights - In the implementation block
-(NSMutableArray *)highlights;
-(id)initWithPHAsset:(id)arg1 ;
-(PHAsset *)phAsset;
@end

