/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isAnimated;
-(id)initWithOptions:(id)arg1 ;
-(void)setAnimated:(BOOL)arg1 ;
-(id)init;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(NSArray *)alertActions;
-(void)setNavigationBarHidden:(BOOL)arg1 ;
-(BOOL)isNavigationBarHidden;
-(unsigned long long)popOverArrowDirection;
-(void)setPopOverArrowDirection:(unsigned long long)arg1 ;
-(UIBarButtonItem *)popOverSourceBarButtonItem;
-(void)setPopOverSourceBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setAlertActions:(NSArray *)arg1 ;
-(void)_applyAlertActionsForController:(id)arg1 ;
-(BOOL)allowsModalOverModal;
-(void)setAllowsModalOverModal:(BOOL)arg1 ;
-(CGRect)popOverSourceRect;
-(UIView *)popOverSourceView;
-(void)setPopOverSourceView:(UIView *)arg1 ;
-(BOOL)isMenuDismissable;
-(void)setMenuDismissable:(BOOL)arg1 ;
-(void)setPopOverSourceRect:(CGRect)arg1 ;
@end

