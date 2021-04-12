/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

#import <CarPlay/CarPlay-Structs.h>
#import <UIKitCore/UIWindow.h>

@class CPTemplateApplicationScene, UILayoutGuide, NSLayoutConstraint, UIWindowScene;

@interface CPWindow : UIWindow {

	CPTemplateApplicationScene* _templateApplicationScene;
	UILayoutGuide* _mapButtonSafeAreaLayoutGuide;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _bottomConstraint;
	NSLayoutConstraint* _leftConstraint;
	NSLayoutConstraint* _rightConstraint;

}

@property (nonatomic,retain) NSLayoutConstraint * topConstraint;                                        //@synthesize topConstraint=_topConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomConstraint;                                     //@synthesize bottomConstraint=_bottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * leftConstraint;                                       //@synthesize leftConstraint=_leftConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * rightConstraint;                                      //@synthesize rightConstraint=_rightConstraint - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * mapButtonSafeAreaLayoutGuide;                            //@synthesize mapButtonSafeAreaLayoutGuide=_mapButtonSafeAreaLayoutGuide - In the implementation block
@property (assign,nonatomic,__weak) UIWindowScene * windowScene; 
@property (assign,nonatomic,__weak) CPTemplateApplicationScene * templateApplicationScene;              //@synthesize templateApplicationScene=_templateApplicationScene - In the implementation block
-(void)setTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)topConstraint;
-(NSLayoutConstraint *)bottomConstraint;
-(void)setBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)leftConstraint;
-(NSLayoutConstraint *)rightConstraint;
-(void)setLeftConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setRightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)updateLayoutGuideWithInsets:(UIEdgeInsets)arg1 ;
-(id)initWithFrame:(CGRect)arg1 templateScene:(id)arg2 ;
-(CPTemplateApplicationScene *)templateApplicationScene;
-(void)setTemplateApplicationScene:(CPTemplateApplicationScene *)arg1 ;
-(UILayoutGuide *)mapButtonSafeAreaLayoutGuide;
@end

