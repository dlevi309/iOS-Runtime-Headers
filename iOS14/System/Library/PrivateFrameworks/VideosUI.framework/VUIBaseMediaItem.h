/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <TVPlayback/TVPBaseMediaItem.h>

@class VUIMediaStartTimeCollection;

@interface VUIBaseMediaItem : TVPBaseMediaItem {

	VUIMediaStartTimeCollection* _startTimeCollection;

}

@property (nonatomic,retain) VUIMediaStartTimeCollection * startTimeCollection;              //@synthesize startTimeCollection=_startTimeCollection - In the implementation block
+(void)initialize;
-(id)mediaItemMetadataForProperty:(id)arg1 ;
-(VUIMediaStartTimeCollection *)startTimeCollection;
-(void)setStartTimeCollection:(VUIMediaStartTimeCollection *)arg1 ;
@end

