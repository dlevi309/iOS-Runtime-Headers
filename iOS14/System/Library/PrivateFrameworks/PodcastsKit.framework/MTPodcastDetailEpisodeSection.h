/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

#import <libobjc.A.dylib/NSFetchedResultsControllerDelegate.h>

@protocol MTPodcastDetailEpisodeSectionDelegate, MTFetchedResultsControllerProtocol;
@class NSString, NSPredicate, NSArray;

@interface MTPodcastDetailEpisodeSection : NSObject <NSFetchedResultsControllerDelegate> {

	BOOL _showTitleWithNoEpisodes;
	NSString* _title;
	NSPredicate* _predicate;
	NSArray* _sortDescriptors;
	unsigned long long _sectionType;
	id<MTPodcastDetailEpisodeSectionDelegate> _delegate;
	id<MTFetchedResultsControllerProtocol> _frc;

}

@property (nonatomic,retain) id<MTFetchedResultsControllerProtocol> frc;                             //@synthesize frc=_frc - In the implementation block
@property (nonatomic,copy) NSString * title;                                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSPredicate * predicate;                                                //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) NSArray * sortDescriptors;                                              //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (assign,nonatomic) unsigned long long sectionType;                                         //@synthesize sectionType=_sectionType - In the implementation block
@property (assign,nonatomic) BOOL showTitleWithNoEpisodes;                                           //@synthesize showTitleWithNoEpisodes=_showTitleWithNoEpisodes - In the implementation block
@property (assign,nonatomic,__weak) id<MTPodcastDetailEpisodeSectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dependentPropertyKeys;
-(id<MTFetchedResultsControllerProtocol>)frc;
-(void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(NSPredicate *)predicate;
-(id<MTPodcastDetailEpisodeSectionDelegate>)delegate;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setFrc:(id<MTFetchedResultsControllerProtocol>)arg1 ;
-(NSArray *)sortDescriptors;
-(void)loadData;
-(void)setDelegate:(id<MTPodcastDetailEpisodeSectionDelegate>)arg1 ;
-(unsigned long long)sectionType;
-(NSString *)description;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(void)controllerWillChangeContent:(id)arg1 ;
-(void)setSectionType:(unsigned long long)arg1 ;
-(id)episodes;
-(NSString *)title;
-(void)initializeFrc;
-(unsigned long long)indexOfEpisode:(id)arg1 ;
-(BOOL)showTitleWithNoEpisodes;
-(void)setShowTitleWithNoEpisodes:(BOOL)arg1 ;
@end

