/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVMediaSelectionGroupInternal, NSArray, AVMediaSelectionOption;

@interface AVMediaSelectionGroup : NSObject <NSCopying> {

	AVMediaSelectionGroupInternal* _mediaSelectionGroup;

}

@property (nonatomic,readonly) NSArray * options; 
@property (nonatomic,readonly) AVMediaSelectionOption * defaultOption; 
@property (nonatomic,readonly) BOOL allowsEmptySelection; 
+(id)mediaSelectionOptionsFromArray:(id)arg1 filteredAndSortedAccordingToPreferredLanguages:(id)arg2 ;
+(id)mediaSelectionOptionsFromArray:(id)arg1 withLocale:(id)arg2 ;
+(id)mediaSelectionOptionsFromArray:(id)arg1 withMediaCharacteristics:(id)arg2 ;
+(id)mediaSelectionOptionsFromArray:(id)arg1 withoutMediaCharacteristics:(id)arg2 ;
+(id)playableMediaSelectionOptionsFromArray:(id)arg1 ;
+(id)mediaSelectionGroupWithAsset:(id)arg1 dictionary:(id)arg2 ;
-(id)makeNowPlayingInfoLanguageOptionGroup;
-(id)init;
-(id)asset;
-(NSArray *)options;
-(id)_groupMediaCharacteristics;
-(id)_groupMediaType;
-(id)_primaryMediaCharacteristic;
-(id)_optionWithID:(id)arg1 displaysNonForcedSubtitles:(BOOL)arg2 ;
-(id)description;
-(id)_groupID;
-(id)_weakReference;
-(id)dictionary;
-(id)mediaSelectionOptionWithPropertyList:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_isStreamingGroup;
-(BOOL)_matchesGroupID:(id)arg1 mediaType:(id)arg2 ;
-(void)dealloc;
-(AVMediaSelectionOption *)defaultOption;
-(BOOL)allowsEmptySelection;
@end

