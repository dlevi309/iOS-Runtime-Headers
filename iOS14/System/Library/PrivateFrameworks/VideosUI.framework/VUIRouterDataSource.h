/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class VUIEventDataSource;

@interface VUIRouterDataSource : NSObject {

	VUIEventDataSource* _selectEventDataSource;
	VUIEventDataSource* _playEventDataSource;
	VUIEventDataSource* _contextMenuEventDataSource;

}

@property (nonatomic,retain) VUIEventDataSource * selectEventDataSource;                   //@synthesize selectEventDataSource=_selectEventDataSource - In the implementation block
@property (nonatomic,retain) VUIEventDataSource * playEventDataSource;                     //@synthesize playEventDataSource=_playEventDataSource - In the implementation block
@property (nonatomic,retain) VUIEventDataSource * contextMenuEventDataSource;              //@synthesize contextMenuEventDataSource=_contextMenuEventDataSource - In the implementation block
-(id)initWithRouterData:(id)arg1 viewElement:(id)arg2 appContext:(id)arg3 ;
-(VUIEventDataSource *)playEventDataSource;
-(VUIEventDataSource *)selectEventDataSource;
-(VUIEventDataSource *)contextMenuEventDataSource;
-(id)initWithRouterData:(id)arg1 prefetchedData:(id)arg2 ;
-(void)setSelectEventDataSource:(VUIEventDataSource *)arg1 ;
-(void)setPlayEventDataSource:(VUIEventDataSource *)arg1 ;
-(void)setContextMenuEventDataSource:(VUIEventDataSource *)arg1 ;
@end

