/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <NewsUI/NewsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NTPBWidgetEngagement, NSData;

@interface NUNewsAnalyticsVideoPlayerEventTrackerConfiguration : NSObject <NSCopying> {

	int _adType;
	int _adLocation;
	int _newsProductType;
	int _mediaEngagePlayLocation;
	int _mediaEngageCompletePlayLocation;
	int _articleHostViewType;
	int _groupType;
	int _linkTapLocationType;
	int _articleViewPresentationReason;
	int _autoPlayArticleViewPresentationReason;
	int _parentFeedType;
	unsigned long long _supplementalEventOptions;
	NSString* _groupViewExposureID;
	NTPBWidgetEngagement* _widgetEngagement;
	NSString* _referringURLString;
	NSString* _referringSourceApplication;
	NSData* _leadingVideoItemSessionID;

}

@property (nonatomic,readonly) int adType;                                                //@synthesize adType=_adType - In the implementation block
@property (nonatomic,readonly) int adLocation;                                            //@synthesize adLocation=_adLocation - In the implementation block
@property (nonatomic,readonly) int newsProductType;                                       //@synthesize newsProductType=_newsProductType - In the implementation block
@property (nonatomic,readonly) int mediaEngagePlayLocation;                               //@synthesize mediaEngagePlayLocation=_mediaEngagePlayLocation - In the implementation block
@property (nonatomic,readonly) int mediaEngageCompletePlayLocation;                       //@synthesize mediaEngageCompletePlayLocation=_mediaEngageCompletePlayLocation - In the implementation block
@property (nonatomic,readonly) int articleHostViewType;                                   //@synthesize articleHostViewType=_articleHostViewType - In the implementation block
@property (nonatomic,readonly) unsigned long long supplementalEventOptions;               //@synthesize supplementalEventOptions=_supplementalEventOptions - In the implementation block
@property (nonatomic,readonly) int groupType;                                             //@synthesize groupType=_groupType - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupViewExposureID;                       //@synthesize groupViewExposureID=_groupViewExposureID - In the implementation block
@property (nonatomic,readonly) int linkTapLocationType;                                   //@synthesize linkTapLocationType=_linkTapLocationType - In the implementation block
@property (nonatomic,readonly) int articleViewPresentationReason;                         //@synthesize articleViewPresentationReason=_articleViewPresentationReason - In the implementation block
@property (nonatomic,readonly) int autoPlayArticleViewPresentationReason;                 //@synthesize autoPlayArticleViewPresentationReason=_autoPlayArticleViewPresentationReason - In the implementation block
@property (nonatomic,copy,readonly) NTPBWidgetEngagement * widgetEngagement;              //@synthesize widgetEngagement=_widgetEngagement - In the implementation block
@property (nonatomic,copy,readonly) NSString * referringURLString;                        //@synthesize referringURLString=_referringURLString - In the implementation block
@property (nonatomic,copy,readonly) NSString * referringSourceApplication;                //@synthesize referringSourceApplication=_referringSourceApplication - In the implementation block
@property (nonatomic,copy,readonly) NSData * leadingVideoItemSessionID;                   //@synthesize leadingVideoItemSessionID=_leadingVideoItemSessionID - In the implementation block
@property (nonatomic,readonly) int parentFeedType;                                        //@synthesize parentFeedType=_parentFeedType - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)groupType;
-(int)adType;
-(int)parentFeedType;
-(NTPBWidgetEngagement *)widgetEngagement;
-(NSString *)referringSourceApplication;
-(int)articleHostViewType;
-(int)articleViewPresentationReason;
-(int)adLocation;
-(int)newsProductType;
-(id)initWithAdType:(int)arg1 adLocation:(int)arg2 newsProductType:(int)arg3 mediaEngagePlayLocation:(int)arg4 mediaEngageCompletePlayLocation:(int)arg5 articleHostViewType:(int)arg6 supplementalEventOptions:(unsigned long long)arg7 groupType:(int)arg8 groupViewExposureID:(id)arg9 linkTapLocationType:(int)arg10 articleViewPresentationReason:(int)arg11 autoPlayArticleViewPresentationReason:(int)arg12 widgetEngagement:(id)arg13 referringURLString:(id)arg14 referringSourceApplication:(id)arg15 leadingVideoItemSessionID:(id)arg16 parentFeedType:(int)arg17 ;
-(int)mediaEngagePlayLocation;
-(int)mediaEngageCompletePlayLocation;
-(unsigned long long)supplementalEventOptions;
-(NSString *)groupViewExposureID;
-(int)linkTapLocationType;
-(int)autoPlayArticleViewPresentationReason;
-(NSString *)referringURLString;
-(NSData *)leadingVideoItemSessionID;
@end

