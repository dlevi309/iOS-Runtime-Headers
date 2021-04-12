/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <libobjc.A.dylib/SBFActionHandling.h>

@protocol SBFActionProviding, CSAdjunctListModelDelegate;
@class NSMutableDictionary, NSMutableSet, NSString;

@interface CSAdjunctListModel : NSObject <SBFActionHandling> {

	NSMutableDictionary* _identifiersToItems;
	NSMutableSet* _pendingActions;
	BOOL _suspended;
	id<SBFActionProviding> _contentActionProvider;
	id<CSAdjunctListModelDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSAdjunctListModelDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SBFActionProviding> contentActionProvider;              //@synthesize contentActionProvider=_contentActionProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<CSAdjunctListModelDelegate>)delegate;
-(void)setDelegate:(id<CSAdjunctListModelDelegate>)arg1 ;
-(id<SBFActionProviding>)contentActionProvider;
-(void)setContentActionProvider:(id<SBFActionProviding>)arg1 ;
-(void)resumeItemHandling;
-(void)suspendItemHandling;
-(void)_replayPendingChanges;
-(BOOL)_actionIsInRelevantSlot:(id)arg1 ;
-(BOOL)_handleLockScreenContentAction:(id)arg1 ;
-(void)_handleLockScreenContentActionInvalidation:(id)arg1 ;
-(void)_handleLockScreenContentActionAddition:(id)arg1 ;
-(id)_itemForAction:(id)arg1 ;
-(id)_createItemForAction:(id)arg1 ;
-(void)_removeItemForAction:(id)arg1 ;
-(BOOL)handlesActionWithClass:(Class)arg1 ;
-(BOOL)handleAction:(id)arg1 forProvider:(id)arg2 ;
@end

