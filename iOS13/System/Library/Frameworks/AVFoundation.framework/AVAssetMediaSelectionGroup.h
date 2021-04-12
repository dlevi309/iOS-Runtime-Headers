/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVMediaSelectionGroup.h>

@class AVAsset, NSDictionary, NSArray, AVMediaSelectionOption;

@interface AVAssetMediaSelectionGroup : AVMediaSelectionGroup {

	AVAsset* _asset;
	NSDictionary* _dictionary;
	NSArray* _groupMediaCharacteristics;
	NSArray* _options;
	AVMediaSelectionOption* _defaultOption;
	BOOL _isStreamingGroup;

}
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)options;
-(id)dictionary;
-(id)asset;
-(id)mediaSelectionOptionWithPropertyList:(id)arg1 ;
-(BOOL)_isStreamingGroup;
-(id)defaultOption;
-(id)initWithAsset:(id)arg1 dictionary:(id)arg2 ;
-(id)_groupMediaCharacteristics;
-(id)_optionWithID:(id)arg1 displaysNonForcedSubtitles:(BOOL)arg2 ;
-(id)_optionWithID:(id)arg1 identifier:(id)arg2 source:(id)arg3 displaysNonForcedSubtitles:(BOOL)arg4 ;
@end

