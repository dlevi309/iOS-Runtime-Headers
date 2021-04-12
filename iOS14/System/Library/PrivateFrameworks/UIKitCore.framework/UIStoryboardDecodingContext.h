/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIStoryboardSegueTemplate, UIClassSwapper, UIViewController;

@interface UIStoryboardDecodingContext : NSObject {

	UIStoryboardSegueTemplate* _sourceSegueTemplate;
	id _sender;
	UIClassSwapper* _classSwapperTemplate;
	UIViewController* _parentViewController;
	long long _childViewControllerIndex;
	/*^block*/id _creator;

}

@property (nonatomic,retain) UIClassSwapper * classSwapperTemplate;                        //@synthesize classSwapperTemplate=_classSwapperTemplate - In the implementation block
@property (nonatomic,retain) UIStoryboardSegueTemplate * sourceSegueTemplate;              //@synthesize sourceSegueTemplate=_sourceSegueTemplate - In the implementation block
@property (nonatomic,retain) UIViewController * parentViewController;                      //@synthesize parentViewController=_parentViewController - In the implementation block
@property (assign,nonatomic) long long childViewControllerIndex;                           //@synthesize childViewControllerIndex=_childViewControllerIndex - In the implementation block
@property (nonatomic,retain) id sender;                                                    //@synthesize sender=_sender - In the implementation block
@property (nonatomic,copy) id creator;                                                     //@synthesize creator=_creator - In the implementation block
-(id)sender;
-(void)setSender:(id)arg1 ;
-(long long)childViewControllerIndex;
-(UIViewController *)parentViewController;
-(UIStoryboardSegueTemplate *)sourceSegueTemplate;
-(void)setSourceSegueTemplate:(UIStoryboardSegueTemplate *)arg1 ;
-(void)setClassSwapperTemplate:(UIClassSwapper *)arg1 ;
-(id)creator;
-(void)setChildViewControllerIndex:(long long)arg1 ;
-(UIClassSwapper *)classSwapperTemplate;
-(void)setCreator:(id)arg1 ;
-(void)setParentViewController:(UIViewController *)arg1 ;
@end

