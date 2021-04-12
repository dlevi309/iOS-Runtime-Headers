/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPAsyncOperation.h>

@class MPMediaLibraryView;

@interface _MPStoreLibraryPersonalizationAggregateLibraryAddedOperation : MPAsyncOperation {

	MPMediaLibraryView* _libraryView;
	/*^block*/id _responseHandler;
	vector<long long, std::__1::allocator<long long> >* _persistentIDs;

}

@property (assign,nonatomic) MPMediaLibraryView * libraryView;              //@synthesize libraryView=_libraryView - In the implementation block
@property (assign,nonatomic) vector<long long persistentIDs;                //@synthesize persistentIDs=_persistentIDs - In the implementation block
@property (nonatomic,copy) id responseHandler;                              //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)execute;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
-(MPMediaLibraryView *)libraryView;
-(void)setLibraryView:(MPMediaLibraryView *)arg1 ;
-(vector<long long)persistentIDs;
-(void)setPersistentIDs:(vector<long long)arg1 ;
@end

