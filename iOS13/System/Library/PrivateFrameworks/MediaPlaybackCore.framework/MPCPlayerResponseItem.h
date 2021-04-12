/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/_MPCStateDumpPropertyListTransformable.h>

@class NSString, NSArray, MPCPlayerResponse, NSIndexPath, MPModelGenericObject;

@interface MPCPlayerResponseItem : NSObject <_MPCStateDumpPropertyListTransformable> {

	unsigned long long _seekSupport;
	BOOL _placeholder;
	NSString* _contentItemIdentifier;
	long long _revision;
	NSString* _localizedDurationString;
	NSString* _explicitBadge;
	NSArray* _languageOptionGroups;
	MPCPlayerResponse* _response;
	NSIndexPath* _indexPath;
	MPModelGenericObject* _metadataObject;
	SCD_Struct_MP12 _duration;

}

@property (nonatomic,__weak,readonly) MPCPlayerResponse * response;                //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPath;                            //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,readonly) MPModelGenericObject * metadataObject;              //@synthesize metadataObject=_metadataObject - In the implementation block
@property (getter=isPlaceholder,nonatomic,readonly) BOOL placeholder;              //@synthesize placeholder=_placeholder - In the implementation block
@property (nonatomic,readonly) NSString * contentItemIdentifier;                   //@synthesize contentItemIdentifier=_contentItemIdentifier - In the implementation block
@property (nonatomic,readonly) long long revision;                                 //@synthesize revision=_revision - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MP12 duration;                           //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) NSString * localizedDurationString;                 //@synthesize localizedDurationString=_localizedDurationString - In the implementation block
@property (nonatomic,readonly) NSString * explicitBadge;                           //@synthesize explicitBadge=_explicitBadge - In the implementation block
@property (nonatomic,readonly) NSArray * languageOptionGroups;                     //@synthesize languageOptionGroups=_languageOptionGroups - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSIndexPath *)indexPath;
-(id)remove;
-(SCD_Struct_MP12)duration;
-(BOOL)isPlaceholder;
-(MPCPlayerResponse *)response;
-(long long)revision;
-(id)startPictureInPicture;
-(id)_stateDumpObject;
-(NSString *)explicitBadge;
-(id)likeCommand;
-(id)dislikeCommand;
-(NSString *)localizedDurationString;
-(MPModelGenericObject *)metadataObject;
-(id)initWithModelGenericObject:(id)arg1 indexPath:(id)arg2 response:(id)arg3 ;
-(NSString *)contentItemIdentifier;
-(id)_buildLanguageOptionGroups:(id)arg1 currentLanguageOptions:(id)arg2 ;
-(unsigned long long)_determineSeekSupport;
-(id)_feedbackCommandWithMediaRemoteCommand:(unsigned)arg1 ;
-(id)seekCommand;
-(id)playbackRateCommand;
-(id)wishlistCommand;
-(id)rateCommand;
-(NSArray *)languageOptionGroups;
@end

