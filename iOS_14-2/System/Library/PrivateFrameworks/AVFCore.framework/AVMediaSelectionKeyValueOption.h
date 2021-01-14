/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVMediaSelectionOption.h>

@class NSString, NSDictionary, AVWeakReference;

@interface AVMediaSelectionKeyValueOption : AVMediaSelectionOption {

	id _groupID;
	id _groupMediaType;
	NSString* _optionMediaType;
	NSDictionary* _dictionary;
	AVWeakReference* _weakReferenceToGroup;
	BOOL _displaysNonForcedSubtitles;

}
-(id)group;
-(BOOL)isPlayable;
-(id)locale;
-(id)commonMetadata;
-(id)mediaType;
-(id)metadataForFormat:(id)arg1 ;
-(id)availableMetadataFormats;
-(id)_groupMediaType;
-(id)initWithAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3 ;
-(id)_groupID;
-(id)dictionary;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

