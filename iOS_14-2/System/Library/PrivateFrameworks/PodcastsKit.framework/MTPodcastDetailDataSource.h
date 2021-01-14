/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

#import <libobjc.A.dylib/MTPodcastDetailEpisodeSectionDelegate.h>

@protocol MTPodcastDetailDataSourceDelegate;
@class NSString, NSArray;

@interface MTPodcastDetailDataSource : NSObject <MTPodcastDetailEpisodeSectionDelegate> {

	NSString* _podcastUuid;
	id<MTPodcastDetailDataSourceDelegate> _delegate;
	unsigned long long _selectedTab;
	NSArray* _sections;

}

@property (nonatomic,copy,readonly) NSString * podcastUuid;                                      //@synthesize podcastUuid=_podcastUuid - In the implementation block
@property (assign,nonatomic,__weak) id<MTPodcastDetailDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long selectedTab;                                     //@synthesize selectedTab=_selectedTab - In the implementation block
@property (nonatomic,readonly) NSArray * sections;                                               //@synthesize sections=_sections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sortDescriptorsForPodcastUuid:(id)arg1 ;
+(id)predicateForPodcast:(id)arg1 sectionType:(unsigned long long)arg2 ;
+(id)predicateForPlayingPodcast:(id)arg1 sectionType:(unsigned long long)arg2 ;
-(unsigned long long)indexForSection:(id)arg1 ;
-(id<MTPodcastDetailDataSourceDelegate>)delegate;
-(NSArray *)sections;
-(id)podcast;
-(void)setDelegate:(id<MTPodcastDetailDataSourceDelegate>)arg1 ;
-(void)reloadData;
-(unsigned long long)selectedTab;
-(void)setSelectedTab:(unsigned long long)arg1 ;
-(NSString *)podcastUuid;
-(id)unplayedSections;
-(id)feedSections;
-(id)savedSections;
-(id)createSectionForLimitedUnplayed;
-(id)createSectionForOtherEpisodes;
-(id)createSectionForEmptyOverlay;
-(id)createSectionForPlayedToBeDeleted;
-(id)createSectionForFeed;
-(id)createSectionForSaved;
-(id)createSectionForIsFromiTunesSync;
-(void)sectionWillChangeContent:(id)arg1 ;
-(void)sectionDidChangeContent:(id)arg1 ;
-(void)episodeSection:(id)arg1 didChangeObject:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4 newIndex:(unsigned long long)arg5 ;
-(id)initWithPodcastUuid:(id)arg1 ;
-(id)createSectionForDarkPlacard;
@end

