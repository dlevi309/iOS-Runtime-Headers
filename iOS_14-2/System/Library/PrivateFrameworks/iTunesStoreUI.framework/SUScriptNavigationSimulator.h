/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class WebScriptObject, UINavigationController, NSMutableArray, NSString;

@interface SUScriptNavigationSimulator : SUScriptObject <UINavigationControllerDelegate> {

	WebScriptObject* _transitionCallback;
	long long _initialIndex;
	long long _lastVisibleIndex;
	UINavigationController* _navigationController;
	NSMutableArray* _enqueuedTransitions;

}

@property (assign,nonatomic) long long initialIndex;                                            //@synthesize initialIndex=_initialIndex - In the implementation block
@property (assign,nonatomic) long long lastVisibleIndex;                                        //@synthesize lastVisibleIndex=_lastVisibleIndex - In the implementation block
@property (assign,nonatomic,__weak) UINavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,retain) NSMutableArray * enqueuedTransitions;                              //@synthesize enqueuedTransitions=_enqueuedTransitions - In the implementation block
@property (nonatomic,retain) WebScriptObject * transitionCallback; 
@property (nonatomic,readonly) long long visibleIndex; 
@property (nonatomic,readonly) long long indexCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)transitioning;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(void)startTransition;
+(id)webScriptNameForKeyName:(id)arg1 ;
+(void)stopTransition;
-(id)attributeKeys;
-(long long)indexCount;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(long long)visibleIndex;
-(void)setIndexCount:(long long)arg1 ;
-(void)setVisibleIndex:(long long)arg1 ;
-(id)_className;
-(id)initWithNavigationController:(id)arg1 ;
-(UINavigationController *)navigationController;
-(id)scriptAttributeKeys;
-(/*^block*/id)_popHandler;
-(long long)_relativeIndexFromIndex:(long long)arg1 ;
-(void)popToViewAtIndex:(long long)arg1 completion:(id)arg2 ;
-(long long)initialIndex;
-(void)setLastVisibleIndex:(long long)arg1 ;
-(void)_enqueueLoadingState:(id)arg1 ;
-(NSMutableArray *)enqueuedTransitions;
-(void)_startNextTransition;
-(long long)lastVisibleIndex;
-(void)_handlePopFromIndex:(long long)arg1 toIndex:(long long)arg2 ;
-(void)_callCallbackWithWithTransition:(id)arg1 ;
-(WebScriptObject *)transitionCallback;
-(void)popViewWithCompletion:(id)arg1 ;
-(void)pushViewWithCompletion:(id)arg1 ;
-(void)setTransitionCallback:(WebScriptObject *)arg1 ;
-(void)setInitialIndex:(long long)arg1 ;
-(void)setEnqueuedTransitions:(NSMutableArray *)arg1 ;
@end

