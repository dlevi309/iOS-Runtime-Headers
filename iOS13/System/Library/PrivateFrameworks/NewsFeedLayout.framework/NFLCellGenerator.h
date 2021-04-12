/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/


@class NFLAbstractRanker, NFLAbstractCellSizer, NFLAbstractCellPropertyProvider;

@interface NFLCellGenerator : NSObject {

	Class _headlineTemplateClass;
	NFLAbstractRanker* _ranker;
	NFLAbstractCellSizer* _sizer;
	NFLAbstractCellPropertyProvider* _propertyProvider;

}

@property (assign,nonatomic) Class headlineTemplateClass;                                       //@synthesize headlineTemplateClass=_headlineTemplateClass - In the implementation block
@property (nonatomic,readonly) NFLAbstractRanker * ranker;                                      //@synthesize ranker=_ranker - In the implementation block
@property (nonatomic,readonly) NFLAbstractCellSizer * sizer;                                    //@synthesize sizer=_sizer - In the implementation block
@property (nonatomic,readonly) NFLAbstractCellPropertyProvider * propertyProvider;              //@synthesize propertyProvider=_propertyProvider - In the implementation block
-(NFLAbstractCellSizer *)sizer;
-(NFLAbstractRanker *)ranker;
-(id)initWithSizer:(id)arg1 ranker:(id)arg2 propertyProvider:(id)arg3 ;
-(id)rankedLayoutsForTileInfo:(id)arg1 feedTemplate:(id)arg2 columnSpan:(unsigned long long)arg3 showAccessoryText:(BOOL)arg4 ;
-(Class)headlineTemplateClass;
-(void)setHeadlineTemplateClass:(Class)arg1 ;
-(NFLAbstractCellPropertyProvider *)propertyProvider;
@end

