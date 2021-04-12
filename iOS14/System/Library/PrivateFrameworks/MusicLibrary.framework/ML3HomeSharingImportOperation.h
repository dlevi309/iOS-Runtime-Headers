/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <MusicLibrary/ML3DAAPImportOperation.h>

@class ML3EntityReplacer;

@interface ML3HomeSharingImportOperation : ML3DAAPImportOperation {

	ML3EntityReplacer* _containerReplacer;
	int _playlistNameOrder;

}
-(void)main;
-(unsigned long long)importSource;
-(shared_ptr<ML3DAAPImportItem>*)importItemFromDAAPElement:(shared_ptr<ML3CPP::Element>*)arg1 ;
-(void)updateImportProgress:(float)arg1 ;
-(shared_ptr<ML3DAAPImportItem>*)containerImportItemFromDAAPElement:(shared_ptr<ML3CPP::Element>*)arg1 withTrackIds:(vector<long long, std::__1::allocator<long long> >*)arg2 trackPersonIdentifiers:(vector<std::__1::unordered_set<std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > >, std::__1::allocator<std::__1::unordered_set<std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > > >*)arg3 ;
-(BOOL)_performHomeSharingImportWithTransaction:(id)arg1 ;
@end

