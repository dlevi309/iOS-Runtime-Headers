/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/


@protocol SLFacebookAlbumManagerDelegate;
@class NSOperationQueue, ACAccount, SLFacebookAlbum;

@interface SLFacebookAlbumManager : NSObject {

	BOOL _isCanceled;
	NSOperationQueue* photoQueue;
	ACAccount* _account;
	id<SLFacebookAlbumManagerDelegate> _delegate;
	SLFacebookAlbum* _selectedAlbum;

}

@property (retain) ACAccount * account;                                      //@synthesize account=_account - In the implementation block
@property (__weak) id<SLFacebookAlbumManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) SLFacebookAlbum * selectedAlbum;                          //@synthesize selectedAlbum=_selectedAlbum - In the implementation block
-(id<SLFacebookAlbumManagerDelegate>)delegate;
-(void)setDelegate:(id<SLFacebookAlbumManagerDelegate>)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(void)refreshAlbums;
-(void)setSelectedAlbum:(SLFacebookAlbum *)arg1 ;
-(SLFacebookAlbum *)selectedAlbum;
-(void)loadCoverImageForAlbum:(id)arg1 ;
-(id)checkErrorResponse:(id)arg1 ;
-(id)parseAlbumsWithResponse:(id)arg1 ;
-(id)defaultAlbumWithDefaultAlbumResponse:(id)arg1 ;
-(void)handleAlbumResponse:(id)arg1 error:(id)arg2 ;
-(void)performAlbumRequestWithBatchRequests:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)handleDefaultAlbumFetchResponse:(id)arg1 handler:(/*^block*/id)arg2 error:(id)arg3 ;
-(void)fetchDefaultAlbum:(/*^block*/id)arg1 ;
@end

