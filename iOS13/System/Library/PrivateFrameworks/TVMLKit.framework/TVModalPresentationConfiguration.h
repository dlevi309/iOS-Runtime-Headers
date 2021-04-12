/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/


#import <TVMLKit/TVMLKit-Structs.h>
@class UIBarButtonItem, UIView, NSArray;

@interface TVModalPresentationConfiguration : NSObject {

	BOOL _allowsModalOverModal;
	BOOL _menuDismissable;
	BOOL _navigationBarHidden;
	BOOL _animated;
	long long _type;
	UIBarButtonItem* _popOverSourceBarButtonItem;
	UIView* _popOverSourceView;
	unsigned long long _popOverArrowDirection;
	NSArray* _alertActions;
	CGRect _popOverSourceRect;

}

@property (assign,nonatomic) long long type;                                                     //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL allowsModalOverModal;                                          //@synthesize allowsModalOverModal=_allowsModalOverModal - In the implementation block
@property (assign,getter=isMenuDismissable,nonatomic) BOOL menuDismissable;                      //@synthesize menuDismissable=_menuDismissable - In the implementation block
@property (assign,getter=isNavigationBarHidden,nonatomic) BOOL navigationBarHidden;              //@synthesize navigationBarHidden=_navigationBarHidden - In the implementation block
@property (assign,getter=isAnimated,nonatomic) BOOL animated;                                    //@synthesize animated=_animated - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * popOverSourceBarButtonItem;                       //@synthesize popOverSourceBarButtonItem=_popOverSourceBarButtonItem - In the implementation block
@property (nonatomic,retain) UIView * popOverSourceView;                                         //@synthesize popOverSourceView=_popOverSourceView - In the implementation block
@property (assign,nonatomic) CGRect popOverSourceRect;                                           //@synthesize popOverSourceRect=_popOverSourceRect - In the implementation block
@property (assign,nonatomic) unsigned long long popOverArrowDirection;                           //@synthesize popOverArrowDirection=_popOverArrowDirection - In the implementation block
@property (nonatomic,retain) NSArray * alertActions;                                             //@synthesize alertActions=_alertActions - In the implementation block
+(id)presentationTypeKeyMap;
-(id)init;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(id)initWithOptions:(id)arg1 ;
-(BOOL)isAnimated;
-(BOOL)isNavigationBarHidden;
-(void)setNavigationBarHidden:(BOOL)arg1 ;
-(void)setAnimated:(BOOL)arg1 ;
-(NSArray *)alertActions;
-(void)setAlertActions:(NSArray *)arg1 ;
-(void)_applyAlertActionsForController:(id)arg1 ;
-(BOOL)allowsModalOverModal;
-(void)setAllowsModalOverModal:(BOOL)arg1 ;
-(CGRect)popOverSourceRect;
-(UIView *)popOverSourceView;
-(UIBarButtonItem *)popOverSourceBarButtonItem;
-(void)setPopOverSourceView:(UIView *)arg1 ;
-(unsigned long long)popOverArrowDirection;
-(BOOL)isMenuDismissable;
-(void)setMenuDismissable:(BOOL)arg1 ;
-(void)setPopOverSourceBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setPopOverSourceRect:(CGRect)arg1 ;
-(void)setPopOverArrowDirection:(unsigned long long)arg1 ;
@end

