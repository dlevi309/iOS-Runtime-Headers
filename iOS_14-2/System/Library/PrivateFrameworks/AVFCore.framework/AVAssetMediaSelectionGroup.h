/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVMediaSelectionGroup.h>

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
-(id)asset;
-(id)options;
-(id)initWithAsset:(id)arg1 dictionary:(id)arg2 ;
-(id)_groupMediaCharacteristics;
-(id)_optionWithID:(id)arg1 displaysNonForcedSubtitles:(BOOL)arg2 ;
-(id)_optionWithID:(id)arg1 identifier:(id)arg2 source:(id)arg3 displaysNonForcedSubtitles:(BOOL)arg4 ;
-(id)dictionary;
-(id)mediaSelectionOptionWithPropertyList:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)_isStreamingGroup;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)defaultOption;
@end

