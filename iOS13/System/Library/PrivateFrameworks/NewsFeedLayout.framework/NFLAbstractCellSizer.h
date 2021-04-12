/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/


@class NFLAbstractCellPropertyProvider, NFLFeedSettings;

@interface NFLAbstractCellSizer : NSObject {

	NFLAbstractCellPropertyProvider* _propertyProvider;
	NFLFeedSettings* _feedSettings;

}

@property (assign,nonatomic,__weak) NFLFeedSettings * feedSettings;                           //@synthesize feedSettings=_feedSettings - In the implementation block
@property (nonatomic,retain) NFLAbstractCellPropertyProvider * propertyProvider;              //@synthesize propertyProvider=_propertyProvider - In the implementation block
-(id)init;
-(NFLFeedSettings *)feedSettings;
-(void)setFeedSettings:(NFLFeedSettings *)arg1 ;
-(void)setPropertyProvider:(NFLAbstractCellPropertyProvider *)arg1 ;
-(id)layoutDataForTileInfo:(id)arg1 template:(id)arg2 columnSpan:(unsigned long long)arg3 showAccessoryText:(BOOL)arg4 ;
-(NFLAbstractCellPropertyProvider *)propertyProvider;
-(id)initWithFeedSettings:(id)arg1 ;
@end

