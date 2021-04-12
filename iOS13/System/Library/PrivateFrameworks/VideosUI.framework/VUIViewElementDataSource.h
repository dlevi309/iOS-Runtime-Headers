/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSDictionary, VUIRouterDataSource, IKViewElement;

@interface VUIViewElementDataSource : NSObject {

	NSDictionary* _dataDictionary;
	VUIRouterDataSource* _routerDataSource;
	IKViewElement* _viewElement;

}

@property (nonatomic,copy) NSDictionary * dataDictionary;                         //@synthesize dataDictionary=_dataDictionary - In the implementation block
@property (nonatomic,retain) VUIRouterDataSource * routerDataSource;              //@synthesize routerDataSource=_routerDataSource - In the implementation block
@property (assign,nonatomic,__weak) IKViewElement * viewElement;                  //@synthesize viewElement=_viewElement - In the implementation block
-(IKViewElement *)viewElement;
-(NSDictionary *)dataDictionary;
-(void)setDataDictionary:(NSDictionary *)arg1 ;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(id)initWithDataDictionary:(id)arg1 viewElement:(id)arg2 ;
-(VUIRouterDataSource *)routerDataSource;
-(void)setRouterDataSource:(VUIRouterDataSource *)arg1 ;
@end

