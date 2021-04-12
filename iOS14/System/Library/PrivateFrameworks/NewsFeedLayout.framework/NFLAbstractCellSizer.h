/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/


@class NFLAbstractCellPropertyProvider, NFLFeedSettings;

@interface NFLAbstractCellSizer : NSObject {

	NFLAbstractCellPropertyProvider* _propertyProvider;
	NFLFeedSettings* _feedSettings;

}

@property (assign,nonatomic,__weak) NFLFeedSettings * feedSettings;                           //@synthesize feedSettings=_feedSettings - In the implementation block
@property (nonatomic,retain) NFLAbstractCellPropertyProvider * propertyProvider;              //@synthesize propertyProvider=_propertyProvider - In the implementation block
-(NFLFeedSettings *)feedSettings;
-(void)setFeedSettings:(NFLFeedSettings *)arg1 ;
-(id)init;
-(NFLAbstractCellPropertyProvider *)propertyProvider;
-(id)layoutDataForTileInfo:(id)arg1 template:(id)arg2 columnSpan:(unsigned long long)arg3 showAccessoryText:(BOOL)arg4 ;
-(void)setPropertyProvider:(NFLAbstractCellPropertyProvider *)arg1 ;
-(id)initWithFeedSettings:(id)arg1 ;
@end

