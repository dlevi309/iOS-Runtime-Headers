/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@interface MPModelStoreBrowseSectionUniformContentItemTypeResolver : NSObject {

	BOOL _hasValidUniformContentItemType;
	map<MPModelStoreBrowseDetailedContentItemType, unsigned long, std::__1::less<MPModelStoreBrowseDetailedContentItemType>, std::__1::allocator<std::__1::pair<const MPModelStoreBrowseDetailedContentItemType, unsigned long> > >* _contentItemTypeOccurrences;
	unsigned long long _totalNumberOfOccurrences;
	long long _uniformContentItemType;

}
-(void)addContentItemType:(long long)arg1 ;
-(long long)uniformContentItemType;
@end

