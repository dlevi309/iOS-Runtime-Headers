/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<MTPodcastDetailDataSourceDelegate>)delegate;
-(void)setDelegate:(id<MTPodcastDetailDataSourceDelegate>)arg1 ;
-(void)reloadData;
-(NSArray *)sections;
-(id)podcast;
-(unsigned long long)selectedTab;
-(void)setSelectedTab:(unsigned long long)arg1 ;
-(unsigned long long)indexForSection:(id)arg1 ;
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
-(NSString *)podcastUuid;
-(void)episodeSection:(id)arg1 didChangeObject:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4 newIndex:(unsigned long long)arg5 ;
-(id)initWithPodcastUuid:(id)arg1 ;
-(id)createSectionForDarkPlacard;
@end

