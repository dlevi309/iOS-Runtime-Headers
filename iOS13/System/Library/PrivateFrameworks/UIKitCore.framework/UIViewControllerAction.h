/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString, UIViewController;

@interface UIViewControllerAction : NSObject {

	NSString* _name;
	int _transition;
	/*^block*/id _completion;
	double _curlUpRevealedHeight;
	UIViewController* _viewController;

}

@property (assign,nonatomic,__weak) UIViewController * viewController;                                   //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) NSString * name;                                                            //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL animated; 
@property (assign,nonatomic) int transition;                                                             //@synthesize transition=_transition - In the implementation block
@property (nonatomic,copy) id completion;                                                                //@synthesize completion=_completion - In the implementation block
@property (assign,setter=_setCurlUpRevealedHeight:,nonatomic) double _curlUpRevealedHeight;              //@synthesize curlUpRevealedHeight=_curlUpRevealedHeight - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(int)transition;
-(void)setTransition:(int)arg1 ;
-(id)initWithViewController:(id)arg1 name:(id)arg2 transition:(int)arg3 ;
-(BOOL)animated;
-(double)_curlUpRevealedHeight;
-(void)_setCurlUpRevealedHeight:(double)arg1 ;
@end

