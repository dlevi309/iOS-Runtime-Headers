/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIBanner.h>

@protocol _UIBanner <NSObject>
@required
-(void)present;
-(void)addTapHandler:(/*^block*/id)arg1;
-(void)addDismissalAnimations:(/*^block*/id)arg1;
-(void)addDismissalCompletionHandler:(/*^block*/id)arg1;
-(void)dismiss;

@end


@class _UIBannerView, _UIBannerContent, _UIBannerManager, NSLayoutConstraint, NSMutableArray, NSString;

@interface _UIBanner : NSObject <_UIBanner> {

	_UIBannerView* _view;
	_UIBannerContent* _content;
	_UIBannerManager* _manager;
	NSLayoutConstraint* _visibleConstraint;
	NSLayoutConstraint* _hiddenConstraint;
	long long _state;
	NSMutableArray* _dismissalAnimations;
	NSMutableArray* _dismissalCompletionHandlers;
	NSMutableArray* _tapHandlers;

}

@property (nonatomic,retain) _UIBannerView * view;                                      //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) long long state;                                           //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSMutableArray * dismissalAnimations;                      //@synthesize dismissalAnimations=_dismissalAnimations - In the implementation block
@property (nonatomic,retain) NSMutableArray * dismissalCompletionHandlers;              //@synthesize dismissalCompletionHandlers=_dismissalCompletionHandlers - In the implementation block
@property (nonatomic,retain) NSMutableArray * tapHandlers;                              //@synthesize tapHandlers=_tapHandlers - In the implementation block
@property (nonatomic,retain) _UIBannerContent * content;                                //@synthesize content=_content - In the implementation block
@property (assign,nonatomic,__weak) _UIBannerManager * manager;                         //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * visibleConstraint;                    //@synthesize visibleConstraint=_visibleConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * hiddenConstraint;                     //@synthesize hiddenConstraint=_hiddenConstraint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(_UIBannerContent *)content;
-(void)setContent:(_UIBannerContent *)arg1 ;
-(void)present;
-(void)setManager:(_UIBannerManager *)arg1 ;
-(void)handleLongPressGesture:(id)arg1 ;
-(void)setView:(_UIBannerView *)arg1 ;
-(_UIBannerView *)view;
-(void)setState:(long long)arg1 ;
-(_UIBannerManager *)manager;
-(void)addTapHandler:(/*^block*/id)arg1 ;
-(long long)state;
-(NSMutableArray *)tapHandlers;
-(NSLayoutConstraint *)hiddenConstraint;
-(void)setVisibleConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setHiddenConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)visibleConstraint;
-(void)addDismissalAnimations:(/*^block*/id)arg1 ;
-(void)addDismissalCompletionHandler:(/*^block*/id)arg1 ;
-(NSMutableArray *)dismissalAnimations;
-(void)setDismissalAnimations:(NSMutableArray *)arg1 ;
-(void)setTapHandlers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)dismissalCompletionHandlers;
-(void)setDismissalCompletionHandlers:(NSMutableArray *)arg1 ;
-(void)dismiss;
@end

