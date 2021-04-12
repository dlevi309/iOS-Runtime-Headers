/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPAsyncOperation.h>

@class MPModelObject, MPMediaLibraryView, NSNumber;

@interface MPModelLibraryKeepLocalStatusRequestOperation : MPAsyncOperation {

	/*^block*/id _downloadablePlaylistItemEntityQueryBlock;
	long long _enableState;
	MPModelObject* _identifyingModelObject;
	MPMediaLibraryView* _libraryView;
	NSNumber* _redownloadableItemCount;
	/*^block*/id _responseHandler;
	shared_ptr<mlcore::EntityQuery>* _downloadableItemsQuery;

}

@property (assign,nonatomic) shared_ptr<mlcore::EntityQuery>* downloadableItemsQuery;              //@synthesize downloadableItemsQuery=_downloadableItemsQuery - In the implementation block
@property (nonatomic,copy) id downloadablePlaylistItemEntityQueryBlock;                            //@synthesize downloadablePlaylistItemEntityQueryBlock=_downloadablePlaylistItemEntityQueryBlock - In the implementation block
@property (assign,nonatomic) long long enableState;                                                //@synthesize enableState=_enableState - In the implementation block
@property (nonatomic,retain) MPModelObject * identifyingModelObject;                               //@synthesize identifyingModelObject=_identifyingModelObject - In the implementation block
@property (nonatomic,copy) MPMediaLibraryView * libraryView;                                       //@synthesize libraryView=_libraryView - In the implementation block
@property (nonatomic,copy) NSNumber * redownloadableItemCount;                                     //@synthesize redownloadableItemCount=_redownloadableItemCount - In the implementation block
@property (nonatomic,copy) id responseHandler;                                                     //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)execute;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
-(MPMediaLibraryView *)libraryView;
-(void)setLibraryView:(MPMediaLibraryView *)arg1 ;
-(long long)enableState;
-(void)setEnableState:(long long)arg1 ;
-(void)setDownloadablePlaylistItemEntityQueryBlock:(id)arg1 ;
-(id)downloadablePlaylistItemEntityQueryBlock;
-(void)setDownloadableItemsQuery:(shared_ptr<mlcore::EntityQuery>*)arg1 ;
-(shared_ptr<mlcore::EntityQuery>*)downloadableItemsQuery;
-(MPModelObject *)identifyingModelObject;
-(void)setIdentifyingModelObject:(MPModelObject *)arg1 ;
-(NSNumber *)redownloadableItemCount;
-(void)setRedownloadableItemCount:(NSNumber *)arg1 ;
@end

