/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setHeadlineTemplateClass:(Class)arg1 ;
-(Class)headlineTemplateClass;
-(id)initWithSizer:(id)arg1 ranker:(id)arg2 propertyProvider:(id)arg3 ;
-(id)rankedLayoutsForTileInfo:(id)arg1 feedTemplate:(id)arg2 columnSpan:(unsigned long long)arg3 showAccessoryText:(BOOL)arg4 ;
-(NFLAbstractCellSizer *)sizer;
-(NFLAbstractCellPropertyProvider *)propertyProvider;
-(NFLAbstractRanker *)ranker;
@end

