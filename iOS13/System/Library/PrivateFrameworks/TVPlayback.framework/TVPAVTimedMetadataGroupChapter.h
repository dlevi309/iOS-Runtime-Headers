/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/

#import <TVPlayback/TVPMutableChapter.h>

@class AVMetadataItem;

@interface TVPAVTimedMetadataGroupChapter : TVPMutableChapter {

	AVMetadataItem* _imageMetadataItem;

}

@property (nonatomic,retain) AVMetadataItem * imageMetadataItem;              //@synthesize imageMetadataItem=_imageMetadataItem - In the implementation block
-(void)setImageMetadataItem:(AVMetadataItem *)arg1 ;
-(void)_loadChapterNameFromMetadataItem:(id)arg1 ;
-(id)initWithAVTimedMetadataGroup:(id)arg1 filterByLanguages:(id)arg2 ;
-(AVMetadataItem *)imageMetadataItem;
@end

