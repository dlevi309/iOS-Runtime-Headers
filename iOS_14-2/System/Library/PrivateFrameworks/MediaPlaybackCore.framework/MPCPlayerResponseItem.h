/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/_MPCStateDumpPropertyListTransformable.h>

@class NSString, NSArray, MPCPlayerResponse, NSIndexPath, MPModelGenericObject;

@interface MPCPlayerResponseItem : NSObject <_MPCStateDumpPropertyListTransformable> {

	unsigned long long _seekSupport;
	BOOL _placeholder;
	BOOL _autoPlay;
	NSString* _contentItemIdentifier;
	long long _revision;
	NSString* _localizedDurationString;
	NSString* _explicitBadge;
	NSArray* _languageOptionGroups;
	MPCPlayerResponse* _response;
	NSIndexPath* _indexPath;
	MPModelGenericObject* _metadataObject;
	SCD_Struct_MP13 _duration;

}

@property (nonatomic,__weak,readonly) MPCPlayerResponse * response;                //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPath;                            //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,readonly) MPModelGenericObject * metadataObject;              //@synthesize metadataObject=_metadataObject - In the implementation block
@property (getter=isPlaceholder,nonatomic,readonly) BOOL placeholder;              //@synthesize placeholder=_placeholder - In the implementation block
@property (getter=isAutoPlay,nonatomic,readonly) BOOL autoPlay;                    //@synthesize autoPlay=_autoPlay - In the implementation block
@property (nonatomic,readonly) NSString * contentItemIdentifier;                   //@synthesize contentItemIdentifier=_contentItemIdentifier - In the implementation block
@property (nonatomic,readonly) long long revision;                                 //@synthesize revision=_revision - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MP13 duration;                           //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) NSString * localizedDurationString;                 //@synthesize localizedDurationString=_localizedDurationString - In the implementation block
@property (nonatomic,readonly) NSString * explicitBadge;                           //@synthesize explicitBadge=_explicitBadge - In the implementation block
@property (nonatomic,readonly) NSArray * languageOptionGroups;                     //@synthesize languageOptionGroups=_languageOptionGroups - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)remove;
-(id)dislikeCommand;
-(NSString *)localizedDurationString;
-(id)rateCommand;
-(BOOL)isPlaceholder;
-(id)_feedbackCommandWithMediaRemoteCommand:(unsigned)arg1 ;
-(id)_buildLanguageOptionGroups:(id)arg1 currentLanguageOptions:(id)arg2 ;
-(NSIndexPath *)indexPath;
-(id)initWithModelGenericObject:(id)arg1 indexPath:(id)arg2 response:(id)arg3 ;
-(id)seekCommand;
-(BOOL)isAutoPlay;
-(id)wishlistCommand;
-(NSString *)description;
-(id)likeCommand;
-(MPCPlayerResponse *)response;
-(id)_stateDumpObject;
-(NSString *)explicitBadge;
-(id)startPictureInPicture;
-(NSString *)contentItemIdentifier;
-(MPModelGenericObject *)metadataObject;
-(unsigned long long)_determineSeekSupport;
-(SCD_Struct_MP13)duration;
-(id)playbackRateCommand;
-(NSArray *)languageOptionGroups;
-(long long)revision;
@end

