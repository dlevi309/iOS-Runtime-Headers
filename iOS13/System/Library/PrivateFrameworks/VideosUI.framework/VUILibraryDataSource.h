/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@protocol VUILibraryDataSourceDelegate;
@interface VUILibraryDataSource : NSObject {

	BOOL _hasCompletedInitialFetch;
	id<VUILibraryDataSourceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<VUILibraryDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL hasCompletedInitialFetch;                                 //@synthesize hasCompletedInitialFetch=_hasCompletedInitialFetch - In the implementation block
-(id<VUILibraryDataSourceDelegate>)delegate;
-(void)setDelegate:(id<VUILibraryDataSourceDelegate>)arg1 ;
-(BOOL)hasCompletedInitialFetch;
-(void)setHasCompletedInitialFetch:(BOOL)arg1 ;
@end

