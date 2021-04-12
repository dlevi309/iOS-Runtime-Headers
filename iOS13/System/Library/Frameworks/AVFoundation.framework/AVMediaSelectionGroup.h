/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVMediaSelectionGroupInternal, NSArray, AVMediaSelectionOption;

@interface AVMediaSelectionGroup : NSObject <NSCopying> {

	AVMediaSelectionGroupInternal* _mediaSelectionGroup;

}

@property (nonatomic,readonly) NSArray * options; 
@property (nonatomic,readonly) AVMediaSelectionOption * defaultOption; 
@property (nonatomic,readonly) BOOL allowsEmptySelection; 
+(id)playableMediaSelectionOptionsFromArray:(id)arg1 ;
+(id)mediaSelectionOptionsFromArray:(id)arg1 filteredAndSortedAccordingToPreferredLanguages:(id)arg2 ;
+(id)mediaSelectionOptionsFromArray:(id)arg1 withMediaCharacteristics:(id)arg2 ;
+(id)mediaSelectionGroupWithAsset:(id)arg1 dictionary:(id)arg2 ;
+(id)mediaSelectionOptionsFromArray:(id)arg1 withLocale:(id)arg2 ;
+(id)mediaSelectionOptionsFromArray:(id)arg1 withoutMediaCharacteristics:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)options;
-(id)dictionary;
-(id)_groupID;
-(id)asset;
-(id)_weakReference;
-(id)mediaSelectionOptionWithPropertyList:(id)arg1 ;
-(BOOL)_isStreamingGroup;
-(BOOL)allowsEmptySelection;
-(BOOL)_matchesGroupID:(id)arg1 mediaType:(id)arg2 ;
-(AVMediaSelectionOption *)defaultOption;
-(id)_groupMediaType;
-(id)_groupMediaCharacteristics;
-(id)_optionWithID:(id)arg1 displaysNonForcedSubtitles:(BOOL)arg2 ;
@end

