/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setViewElement:(IKViewElement *)arg1 ;
-(NSDictionary *)dataDictionary;
-(id)initWithDataDictionary:(id)arg1 viewElement:(id)arg2 ;
-(VUIRouterDataSource *)routerDataSource;
-(void)setDataDictionary:(NSDictionary *)arg1 ;
-(void)setRouterDataSource:(VUIRouterDataSource *)arg1 ;
@end

