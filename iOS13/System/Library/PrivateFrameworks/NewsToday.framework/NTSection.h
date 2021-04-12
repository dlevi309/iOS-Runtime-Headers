/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NTSectionDisplayDescriptor.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NTPBDiscoverMoreVideosInfo, NSOrderedSet, NSArray, SFRankingFeedback, NTPBSectionDisplayDescriptor;

@interface NTSection : NSObject <NTSectionDisplayDescriptor, NSCopying, NSSecureCoding> {

	BOOL _openVideoPlaylistInApp;
	NSString* _identifier;
	NSString* _personalizationFeatureID;
	NSOrderedSet* _items;
	NSArray* _videoPlaylistHeadlines;
	SFRankingFeedback* _rankingFeedback;
	NSString* _referralBarName;
	NSString* _actionTitle;
	NSURL* _actionURL;
	NTPBSectionDisplayDescriptor* _displayDescriptor;

}

@property (nonatomic,copy) NSString * identifier;                                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * actionTitle;                                                    //@synthesize actionTitle=_actionTitle - In the implementation block
@property (nonatomic,copy) NSURL * actionURL;                                                         //@synthesize actionURL=_actionURL - In the implementation block
@property (nonatomic,copy) NSOrderedSet * items;                                                      //@synthesize items=_items - In the implementation block
@property (nonatomic,copy) SFRankingFeedback * rankingFeedback;                                       //@synthesize rankingFeedback=_rankingFeedback - In the implementation block
@property (nonatomic,copy) NTPBSectionDisplayDescriptor * displayDescriptor;                          //@synthesize displayDescriptor=_displayDescriptor - In the implementation block
@property (nonatomic,copy) NSString * referralBarName;                                                //@synthesize referralBarName=_referralBarName - In the implementation block
@property (assign,nonatomic) BOOL openVideoPlaylistInApp;                                             //@synthesize openVideoPlaylistInApp=_openVideoPlaylistInApp - In the implementation block
@property (nonatomic,copy,readonly) NSString * personalizationFeatureID;                              //@synthesize personalizationFeatureID=_personalizationFeatureID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * videoPlaylistHeadlines;                                 //@synthesize videoPlaylistHeadlines=_videoPlaylistHeadlines - In the implementation block
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * nameColor; 
@property (nonatomic,readonly) BOOL displaysAsVideoPlaylist; 
@property (nonatomic,readonly) BOOL useNameColorInWidget; 
@property (nonatomic,copy,readonly) NTPBDiscoverMoreVideosInfo * discoverMoreVideosInfo; 
@property (nonatomic,copy,readonly) NSString * backgroundGradientColor; 
@property (nonatomic,readonly) BOOL videoPlaysMutedByDefault; 
+(BOOL)supportsSecureCoding;
+(id)_itemClassesByType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSOrderedSet *)items;
-(void)setItems:(NSOrderedSet *)arg1 ;
-(NSURL *)actionURL;
-(void)setActionURL:(NSURL *)arg1 ;
-(NSString *)actionTitle;
-(void)setActionTitle:(NSString *)arg1 ;
-(NTPBDiscoverMoreVideosInfo *)discoverMoreVideosInfo;
-(NSArray *)videoPlaylistHeadlines;
-(void)setRankingFeedback:(SFRankingFeedback *)arg1 ;
-(SFRankingFeedback *)rankingFeedback;
-(void)setReferralBarName:(NSString *)arg1 ;
-(void)setOpenVideoPlaylistInApp:(BOOL)arg1 ;
-(BOOL)displaysAsVideoPlaylist;
-(NSString *)nameColor;
-(NSString *)personalizationFeatureID;
-(NSString *)backgroundGradientColor;
-(BOOL)videoPlaysMutedByDefault;
-(NSString *)referralBarName;
-(BOOL)useNameColorInWidget;
-(BOOL)openVideoPlaylistInApp;
-(id)initWithIdentifier:(id)arg1 actionTitle:(id)arg2 actionURL:(id)arg3 personalizationFeatureID:(id)arg4 items:(id)arg5 videoPlaylistHeadlines:(id)arg6 rankingFeedback:(id)arg7 displayDescriptor:(id)arg8 referralBarName:(id)arg9 openVideoPlaylistInApp:(BOOL)arg10 ;
-(NTPBSectionDisplayDescriptor *)displayDescriptor;
-(void)setDisplayDescriptor:(NTPBSectionDisplayDescriptor *)arg1 ;
@end

