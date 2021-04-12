/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVMediaSelectionOptionInternal, NSString, NSArray, NSLocale;

@interface AVMediaSelectionOption : NSObject <NSCopying> {

	AVMediaSelectionOptionInternal* _mediaSelectionOption;

}

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
+(BOOL)_plistHasOptionIdentifier:(id)arg1 ;
+(id)mediaSelectionNilOptionForGroup:(id)arg1 ;
+(id)mediaSelectionOptionForAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3 hasUnderlyingTrack:(BOOL)arg4 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionary;
-(NSLocale *)locale;
-(id)languageCode;
-(id)propertyList;
-(NSString *)displayName;
-(int)trackID;
-(NSString *)mediaType;
-(id)group;
-(id)_groupID;
-(id)_title;
-(id)initWithGroup:(id)arg1 ;
-(BOOL)hasMediaCharacteristic:(id)arg1 ;
-(id)metadataForFormat:(id)arg1 ;
-(id)optionID;
-(NSArray *)commonMetadata;
-(NSString *)extendedLanguageTag;
-(id)outOfBandIdentifier;
-(id)outOfBandSource;
-(NSString *)unicodeLanguageIdentifier;
-(NSString *)unicodeLanguageCode;
-(NSArray *)availableMetadataFormats;
-(BOOL)isPlayable;
-(id)track;
-(id)mediaCharacteristics;
-(id)_track;
-(BOOL)_representsNilSelection;
-(id)_ancillaryDescription;
-(NSArray *)mediaSubTypes;
-(BOOL)_isAuxiliaryContent;
-(BOOL)_isDesignatedDefault;
-(id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1 ;
-(BOOL)displaysNonForcedSubtitles;
-(id)_groupMediaType;
-(id)_groupMediaCharacteristics;
-(id)fallbackIDs;
-(id)_taggedMediaCharacteristics;
-(id)associatedExtendedLanguageTag;
-(id)associatedPersistentIDs;
-(BOOL)_isMainProgramContent;
-(id)_preferredMetadataTitleAccordingToPreferredLanguages:(id)arg1 fallingBackToMatchingEmptyLocale:(BOOL)arg2 ;
-(id)_displayNameWithLocale:(id)arg1 fallingBackToMatchingUndeterminedAndMultilingual:(BOOL)arg2 ;
-(id)associatedUnicodeLanguageIdentifier;
-(id)displayNameWithLocale:(id)arg1 ;
@end

