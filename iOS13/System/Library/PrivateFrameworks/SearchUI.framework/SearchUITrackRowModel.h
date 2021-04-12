/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUICardSectionRowModel.h>

@class SearchUITrackLayoutManager, SFTrack;

@interface SearchUITrackRowModel : SearchUICardSectionRowModel {

	SearchUITrackLayoutManager* _trackLayoutManager;
	SFTrack* _track;

}

@property (nonatomic,retain) SearchUITrackLayoutManager * trackLayoutManager;              //@synthesize trackLayoutManager=_trackLayoutManager - In the implementation block
@property (nonatomic,retain) SFTrack * track;                                              //@synthesize track=_track - In the implementation block
-(SFTrack *)track;
-(id)initWithResult:(id)arg1 trackManager:(id)arg2 cardSection:(id)arg3 track:(id)arg4 queryId:(unsigned long long)arg5 ;
-(void)setTrackLayoutManager:(SearchUITrackLayoutManager *)arg1 ;
-(void)setTrack:(SFTrack *)arg1 ;
-(SearchUITrackLayoutManager *)trackLayoutManager;
@end

