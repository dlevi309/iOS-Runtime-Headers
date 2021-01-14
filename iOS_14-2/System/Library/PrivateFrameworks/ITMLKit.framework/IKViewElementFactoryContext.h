/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@class IKViewElementStyleFactory, IKViewElement;

@interface IKViewElementFactoryContext : NSObject {

	IKViewElementStyleFactory* _styleFactory;
	IKViewElement* _headViewElement;
	IKViewElement* _navigationBarViewElement;
	IKViewElement* _toolBarViewElement;
	IKViewElement* _templateViewElement;
	unsigned long long _updateType;

}

@property (nonatomic,retain) IKViewElementStyleFactory * styleFactory;              //@synthesize styleFactory=_styleFactory - In the implementation block
@property (nonatomic,retain) IKViewElement * headViewElement;                       //@synthesize headViewElement=_headViewElement - In the implementation block
@property (nonatomic,retain) IKViewElement * navigationBarViewElement;              //@synthesize navigationBarViewElement=_navigationBarViewElement - In the implementation block
@property (nonatomic,retain) IKViewElement * toolBarViewElement;                    //@synthesize toolBarViewElement=_toolBarViewElement - In the implementation block
@property (nonatomic,retain) IKViewElement * templateViewElement;                   //@synthesize templateViewElement=_templateViewElement - In the implementation block
@property (assign,nonatomic) unsigned long long updateType;                         //@synthesize updateType=_updateType - In the implementation block
-(unsigned long long)updateType;
-(void)setUpdateType:(unsigned long long)arg1 ;
-(IKViewElementStyleFactory *)styleFactory;
-(IKViewElement *)templateViewElement;
-(void)setTemplateViewElement:(IKViewElement *)arg1 ;
-(IKViewElement *)navigationBarViewElement;
-(void)setNavigationBarViewElement:(IKViewElement *)arg1 ;
-(void)setStyleFactory:(IKViewElementStyleFactory *)arg1 ;
-(void)setHeadViewElement:(IKViewElement *)arg1 ;
-(IKViewElement *)headViewElement;
-(IKViewElement *)toolBarViewElement;
-(void)setToolBarViewElement:(IKViewElement *)arg1 ;
@end

