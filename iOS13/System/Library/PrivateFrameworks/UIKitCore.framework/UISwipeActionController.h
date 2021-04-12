/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIScrollViewScrollObserver.h>

@protocol UISwipeActionHost;
@class UISwipeActionsConfiguration, UIScrollView, _UISwipeHandler, NSMutableSet, UISwipeOccurrence, NSIndexPath, UIView, NSString;

@interface UISwipeActionController : NSObject <_UIScrollViewScrollObserver> {

	id<UISwipeActionHost> _swipeActionHost;
	unsigned long long _style;
	UISwipeActionsConfiguration* _incomingSwipeActionsConfiguration;
	UIScrollView* _containerView;
	_UISwipeHandler* _swipeHandler;
	NSMutableSet* _swipeOccurrences;
	UISwipeOccurrence* _currentSwipeOccurrence;

}

@property (nonatomic,retain) UISwipeActionsConfiguration * incomingSwipeActionsConfiguration;                                       //@synthesize incomingSwipeActionsConfiguration=_incomingSwipeActionsConfiguration - In the implementation block
@property (assign,nonatomic,__weak) id<UISwipeActionHost> swipeActionHost;                                                          //@synthesize swipeActionHost=_swipeActionHost - In the implementation block
@property (assign,nonatomic,__weak) UIScrollView * containerView;                                                                   //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) _UISwipeHandler * swipeHandler;                                                                        //@synthesize swipeHandler=_swipeHandler - In the implementation block
@property (getter=_internalSwipeActionHost,nonatomic,readonly) id<UISwipeActionHost_Internal> internalSwipeActionHost; 
@property (getter=_prefersRTL,nonatomic,readonly) BOOL prefersRTL; 
@property (nonatomic,retain) NSMutableSet * swipeOccurrences;                                                                       //@synthesize swipeOccurrences=_swipeOccurrences - In the implementation block
@property (assign,nonatomic,__weak) UISwipeOccurrence * currentSwipeOccurrence;                                                     //@synthesize currentSwipeOccurrence=_currentSwipeOccurrence - In the implementation block
@property (nonatomic,readonly) NSIndexPath * swipedIndexPath; 
@property (nonatomic,readonly) UIView * swipedItemView; 
@property (assign,nonatomic) unsigned long long style;                                                                              //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL swipeEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(UIScrollView *)containerView;
-(void)setContainerView:(UIScrollView *)arg1 ;
-(void)updateLayout;
-(void)moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(id)initWithSwipeActionHost:(id)arg1 style:(unsigned long long)arg2 ;
-(void)setSwipeEnabled:(BOOL)arg1 ;
-(void)resetSwipedItemAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(UISwipeOccurrence *)currentSwipeOccurrence;
-(unsigned long long)_swipeDirectionForLeadingEdge:(BOOL)arg1 ;
-(void)swipeItemAtIndexPath:(id)arg1 configuration:(id)arg2 direction:(unsigned long long)arg3 animated:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)_observeScrollViewDidScroll:(id)arg1 ;
-(void)setSwipeActionHost:(id<UISwipeActionHost>)arg1 ;
-(void)setSwipeHandler:(_UISwipeHandler *)arg1 ;
-(void)setSwipeOccurrences:(NSMutableSet *)arg1 ;
-(id<UISwipeActionHost>)swipeActionHost;
-(_UISwipeHandler *)swipeHandler;
-(NSIndexPath *)swipedIndexPath;
-(BOOL)_prefersRTL;
-(id)_existingSwipeOccurrenceForIndexPath:(id)arg1 ;
-(void)setCurrentSwipeOccurrence:(UISwipeOccurrence *)arg1 ;
-(UIView *)swipedItemView;
-(id)_internalSwipeActionHost;
-(void)setIncomingSwipeActionsConfiguration:(UISwipeActionsConfiguration *)arg1 ;
-(BOOL)swipeEnabled;
-(void)updateSwipedIndexPath:(id)arg1 ;
-(void)deleteSectionAtIndex:(unsigned long long)arg1 ;
-(void)deleteRowAtIndexPath:(id)arg1 ;
-(void)insertSectionAtIndex:(unsigned long long)arg1 ;
-(void)insertRowAtIndexPath:(id)arg1 ;
-(void)moveSectionAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(SCD_Struct_UI114)configureForSwipeDirection:(unsigned long long)arg1 configuration:(id)arg2 startingAtTouchLocation:(CGPoint)arg3 ;
-(BOOL)touchAtLocationShouldDismissSwipedItem:(CGPoint)arg1 isTouchUp:(BOOL)arg2 ;
-(void)swipeOccurrence:(id)arg1 willFinishWithDeletion:(BOOL)arg2 ;
-(void)swipeOccurrenceDidFinish:(id)arg1 ;
-(void)swipeOccurrence:(id)arg1 didChangeStateFrom:(long long)arg2 ;
-(BOOL)swipeHandler:(id)arg1 mayBeginSwipeAtLocation:(CGPoint)arg2 withProposedDirection:(unsigned long long)arg3 ;
-(void)swipeHandlerDidBeginSwipe:(id)arg1 ;
-(void)swipeHandler:(id)arg1 didGenerateSwipeWithInfo:(SCD_Struct_UI35)arg2 isTracking:(BOOL)arg3 ;
-(void)swipeHandler:(id)arg1 didConfirmSwipeWithInfo:(SCD_Struct_UI35)arg2 ;
-(CGRect)swipeHandlerRestingFrame:(id)arg1 ;
-(UISwipeActionsConfiguration *)incomingSwipeActionsConfiguration;
-(NSMutableSet *)swipeOccurrences;
@end

