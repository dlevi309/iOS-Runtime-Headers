/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSMutableDictionary, NSDateComponentsFormatter, NSNumberFormatter;

@interface VUIMediaTagsViewHelper : NSObject {

	NSMutableDictionary* _tagsViewDictionary;
	NSDateComponentsFormatter* _dateComponentFormatter;
	NSNumberFormatter* _tomatoPercentFormatter;

}
-(id)initWithMediaItem:(id)arg1 ;
-(id)_releaseDateDescriptionFromDate:(id)arg1 ;
-(id)_durationDescriptionFromDuration:(id)arg1 ;
-(BOOL)_isValidNumber:(id)arg1 ;
-(id)_commonSenseString:(id)arg1 ;
-(void)addSeperatorKey:(id)arg1 ;
-(void)_mediaBagdesWithVUIMediaEntity:(id)arg1 ;
-(id)initWithContentMetadata:(id)arg1 additionalMetadata:(id)arg2 ;
-(id)initWithVUIMediaItem:(id)arg1 ;
-(id)initWithVUIMediaEntity:(id)arg1 ;
-(id)tagsViewDictionary;
@end

