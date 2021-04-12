/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVMediaSelectionOption.h>

@class AVAssetTrack, NSDictionary, AVWeakReference;

@interface AVMediaSelectionTrackOption : AVMediaSelectionOption {

	id _groupID;
	AVAssetTrack* _track;
	NSDictionary* _dictionary;
	AVWeakReference* _weakReferenceToGroup;
	BOOL _displaysNonForcedSubtitles;

}
-(id)group;
-(BOOL)isPlayable;
-(id)locale;
-(id)commonMetadata;
-(id)track;
-(id)mediaType;
-(BOOL)displaysNonForcedSubtitles;
-(id)mediaSubTypes;
-(id)_track;
-(id)metadataForFormat:(id)arg1 ;
-(id)availableMetadataFormats;
-(int)trackID;
-(id)initWithAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3 ;
-(id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1 ;
-(id)_groupID;
-(id)dictionary;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

