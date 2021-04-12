/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@class IKTemplateStyleSheet, IKStyleFactory;

@interface IKViewElementStyleFactory : NSObject {

	IKTemplateStyleSheet* _styleSheet;
	IKStyleFactory* _styleFactory;

}

@property (nonatomic,retain,readonly) IKStyleFactory * styleFactory;              //@synthesize styleFactory=_styleFactory - In the implementation block
@property (nonatomic,readonly) IKTemplateStyleSheet * styleSheet;                 //@synthesize styleSheet=_styleSheet - In the implementation block
+(id)styleFactoryWithMarkup:(id)arg1 styleSheet:(id)arg2 ;
-(IKTemplateStyleSheet *)styleSheet;
-(IKStyleFactory *)styleFactory;
-(void)setViewElementStylesDirty;
-(id)styleComposerForElement:(id)arg1 elementStyleOverrides:(id)arg2 ;
-(id)initWithMarkup:(id)arg1 styleSheet:(id)arg2 ;
@end

