/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVMediaSelectionOptionInternal, NSString, NSArray, NSLocale;

@interface AVMediaSelectionOption : NSObject <NSCopying> {

	AVMediaSelectionOptionInternal* _mediaSelectionOption;

}

@property (nonatomic,readonly) BOOL mpIsOnlyAC3; 
@property (nonatomic,readonly) BOOL mpIsSDH; 
@property (nonatomic,readonly) int trackID; 
@property (nonatomic,readonly) NSString * unicodeLanguageIdentifier; 
@property (nonatomic,readonly) NSString * unicodeLanguageCode; 
@property (nonatomic,readonly) NSString * mediaType; 
@property (nonatomic,readonly) NSArray * mediaSubTypes; 
@property (getter=isPlayable,nonatomic,readonly) BOOL playable; 
@property (nonatomic,readonly) NSString * extendedLanguageTag; 
@property (nonatomic,readonly) NSLocale * locale; 
@property (nonatomic,readonly) NSArray * commonMetadata; 
@property (nonatomic,readonly) NSArray * availableMetadataFormats; 
@property (nonatomic,readonly) NSString * displayName; 
+(id)mediaSelectionOptionForAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3 hasUnderlyingTrack:(BOOL)arg4 ;
+(BOOL)_plistHasOptionIdentifier:(id)arg1 ;
+(id)mediaSelectionNilOptionForGroup:(id)arg1 ;
-(BOOL)mpIsSDH;
-(BOOL)mpIsOnlyAC3;
-(id)makeNowPlayingInfoLanguageOption;
-(id)_languageOptionIdentifier;
-(id)_title;
-(id)group;
-(BOOL)isPlayable;
-(id)_preferredMetadataTitleAccordingToPreferredLanguages:(id)arg1 fallingBackToMatchingEmptyLocale:(BOOL)arg2 excludeM3U8Metadata:(BOOL)arg3 ;
-(NSLocale *)locale;
-(NSArray *)commonMetadata;
-(id)track;
-(NSString *)mediaType;
-(id)init;
-(BOOL)_isAuxiliaryContent;
-(BOOL)_isDesignatedDefault;
-(id)_ancillaryDescription;
-(BOOL)displaysNonForcedSubtitles;
-(NSArray *)mediaSubTypes;
-(id)optionID;
-(id)_track;
-(id)metadataForFormat:(id)arg1 ;
-(id)fallbackIDs;
-(NSArray *)availableMetadataFormats;
-(id)languageCode;
-(int)trackID;
-(id)_groupMediaCharacteristics;
-(id)_groupMediaType;
-(id)outOfBandSource;
-(id)outOfBandIdentifier;
-(id)_taggedMediaCharacteristics;
-(id)associatedExtendedLanguageTag;
-(id)associatedPersistentIDs;
-(BOOL)_isMainProgramContent;
-(id)associatedUnicodeLanguageIdentifier;
-(id)_languageDisplayNameFromMetadataAccordingToPreferredLanguages:(id)arg1 fallingBackToMatchingEmptyLocale:(BOOL)arg2 ;
-(id)_displayNameWithLocale:(id)arg1 fallingBackToMatchingUndeterminedAndMultilingual:(BOOL)arg2 ;
-(id)displayNameWithLocale:(id)arg1 ;
-(BOOL)hasMediaCharacteristic:(id)arg1 ;
-(id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1 ;
-(id)description;
-(id)_groupID;
-(NSString *)extendedLanguageTag;
-(id)dictionary;
-(NSString *)unicodeLanguageIdentifier;
-(NSString *)unicodeLanguageCode;
-(id)propertyList;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(BOOL)_representsNilSelection;
-(id)initWithGroup:(id)arg1 ;
-(void)dealloc;
-(id)mediaCharacteristics;
@end

