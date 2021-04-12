/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVMediaSelectionOption.h>

@class AVAssetWriterInput, NSString, NSDictionary, NSArray;

@interface AVAssetWriterInputSelectionOption : AVMediaSelectionOption {

	AVAssetWriterInput* _input;
	NSString* _mediaType;
	NSDictionary* _outputSettings;
	opaqueCMFormatDescriptionRef _sourceFormatHint;
	NSString* _languageCode;
	NSString* _extendedLanguageTag;
	NSArray* _metadata;
	NSDictionary* _trackReferences;
	BOOL _displaysNonForcedSubtitles;
	BOOL _enabled;

}

@property (nonatomic,readonly) NSString * mediaType;                                       //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) NSDictionary * outputSettings;                              //@synthesize outputSettings=_outputSettings - In the implementation block
@property (nonatomic,readonly) opaqueCMFormatDescriptionRef sourceFormatHint;              //@synthesize sourceFormatHint=_sourceFormatHint - In the implementation block
@property (nonatomic,readonly) NSString * languageCode;                                    //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,readonly) NSString * extendedLanguageTag;                             //@synthesize extendedLanguageTag=_extendedLanguageTag - In the implementation block
@property (nonatomic,readonly) NSArray * metadata;                                         //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) NSDictionary * trackReferences;                             //@synthesize trackReferences=_trackReferences - In the implementation block
@property (nonatomic,readonly) BOOL displaysNonForcedSubtitles;                            //@synthesize displaysNonForcedSubtitles=_displaysNonForcedSubtitles - In the implementation block
@property (nonatomic,readonly) AVAssetWriterInput * input;                                 //@synthesize input=_input - In the implementation block
+(id)assetWriterInputSelectionOptionWithAssetWriterInput:(id)arg1 ;
+(id)assetWriterInputSelectionOptionWithAssetWriterInput:(id)arg1 displaysNonForcedSubtitles:(BOOL)arg2 ;
-(opaqueCMFormatDescriptionRef)sourceFormatHint;
-(BOOL)isPlayable;
-(NSDictionary *)trackReferences;
-(id)locale;
-(id)commonMetadata;
-(NSString *)mediaType;
-(BOOL)_hasEqualValueForKey:(id)arg1 asObject:(id)arg2 ;
-(id)_taggedCharacteristics;
-(BOOL)_isAuxiliaryContent;
-(BOOL)_isDesignatedDefault;
-(id)initWithAssetWriterInput:(id)arg1 ;
-(id)initWithAssetWriterInput:(id)arg1 displaysNonForcedSubtitles:(BOOL)arg2 ;
-(id)_ancillaryDescription;
-(BOOL)displaysNonForcedSubtitles;
-(AVAssetWriterInput *)input;
-(id)mediaSubTypes;
-(id)metadataForFormat:(id)arg1 ;
-(id)availableMetadataFormats;
-(NSString *)languageCode;
-(NSDictionary *)outputSettings;
-(id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1 ;
-(NSString *)extendedLanguageTag;
-(unsigned long long)hash;
-(id)propertyList;
-(NSArray *)metadata;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

