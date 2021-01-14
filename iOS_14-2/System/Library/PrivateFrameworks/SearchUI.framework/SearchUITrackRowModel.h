/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTrack:(SFTrack *)arg1 ;
-(void)setTrackLayoutManager:(SearchUITrackLayoutManager *)arg1 ;
-(SearchUITrackLayoutManager *)trackLayoutManager;
-(id)initWithResult:(id)arg1 trackManager:(id)arg2 cardSection:(id)arg3 track:(id)arg4 queryId:(unsigned long long)arg5 ;
@end

