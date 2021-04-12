/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPAsyncOperation.h>

@class MPMediaLibraryView;

@interface _MPModelLibraryRequestItemsQueryOperation : MPAsyncOperation {

	MPMediaLibraryView* _libraryView;
	/*^block*/id _resultHandler;
	shared_ptr<mlcore::Query>* _query;

}

@property (nonatomic,retain) MPMediaLibraryView * libraryView;              //@synthesize libraryView=_libraryView - In the implementation block
@property (assign,nonatomic) shared_ptr<mlcore::Query>* query;              //@synthesize query=_query - In the implementation block
@property (nonatomic,copy) id resultHandler;                                //@synthesize resultHandler=_resultHandler - In the implementation block
-(shared_ptr<mlcore::Query>*)query;
-(void)setQuery:(shared_ptr<mlcore::Query>*)arg1 ;
-(void)execute;
-(id)resultHandler;
-(MPMediaLibraryView *)libraryView;
-(void)setLibraryView:(MPMediaLibraryView *)arg1 ;
-(void)setResultHandler:(id)arg1 ;
@end

