/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)execute;
-(id)resultHandler;
-(shared_ptr<mlcore::Query>*)query;
-(MPMediaLibraryView *)libraryView;
-(void)setLibraryView:(MPMediaLibraryView *)arg1 ;
-(void)setQuery:(shared_ptr<mlcore::Query>*)arg1 ;
-(void)setResultHandler:(id)arg1 ;
@end

