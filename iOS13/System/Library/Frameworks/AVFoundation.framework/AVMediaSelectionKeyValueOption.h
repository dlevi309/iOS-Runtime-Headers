/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVMediaSelectionOption.h>

@class NSString, NSDictionary, AVWeakReference;

@interface AVMediaSelectionKeyValueOption : AVMediaSelectionOption {

	id _groupID;
	id _groupMediaType;
	NSString* _optionMediaType;
	NSDictionary* _dictionary;
	AVWeakReference* _weakReferenceToGroup;
	BOOL _displaysNonForcedSubtitles;

}
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)dictionary;
-(id)locale;
-(id)mediaType;
-(id)group;
-(id)_groupID;
-(id)metadataForFormat:(id)arg1 ;
-(id)commonMetadata;
-(id)availableMetadataFormats;
-(BOOL)isPlayable;
-(id)_groupMediaType;
-(id)initWithAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3 ;
@end

