/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithRouterData:(id)arg1 viewElement:(id)arg2 ;
-(VUIEventDataSource *)playEventDataSource;
-(VUIEventDataSource *)selectEventDataSource;
-(VUIEventDataSource *)contextMenuEventDataSource;
-(void)setSelectEventDataSource:(VUIEventDataSource *)arg1 ;
-(void)setPlayEventDataSource:(VUIEventDataSource *)arg1 ;
-(void)setContextMenuEventDataSource:(VUIEventDataSource *)arg1 ;
@end

