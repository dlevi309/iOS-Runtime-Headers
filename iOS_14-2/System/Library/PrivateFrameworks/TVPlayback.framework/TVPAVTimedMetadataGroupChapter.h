/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

