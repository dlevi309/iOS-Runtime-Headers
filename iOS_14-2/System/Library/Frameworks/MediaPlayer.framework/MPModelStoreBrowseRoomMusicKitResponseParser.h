/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class MPModelStoreBrowseSectionBuilder, MPModelStoreBrowseContentItemBuilder, NSIndexSet, MPSectionedCollection, ICUserIdentity;

@interface MPModelStoreBrowseRoomMusicKitResponseParser : NSObject {

	long long _parseOnceToken;
	id _rawResponseOutput;
	MPModelStoreBrowseSectionBuilder* _sectionBuilder;
	MPModelStoreBrowseContentItemBuilder* _contentItemBuilder;
	NSIndexSet* _filteredFCKinds;
	MPSectionedCollection* _results;
	ICUserIdentity* _userIdentity;

}

@property (nonatomic,readonly) MPSectionedCollection * results; 
-(MPSectionedCollection *)results;
-(id)_parsedElements:(id)arg1 ;
-(id)_parsedContentNode:(id)arg1 additionalAttributesFromParent:(id)arg2 ;
-(id)initWithRawResponseOutput:(id)arg1 sectionBuilder:(id)arg2 contentItemBuilder:(id)arg3 filteredFCKinds:(id)arg4 userIdentity:(id)arg5 ;
-(id)_parsedSectionedCollection;
@end

