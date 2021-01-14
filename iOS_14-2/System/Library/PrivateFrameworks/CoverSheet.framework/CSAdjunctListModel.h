/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <libobjc.A.dylib/SBFActionHandling.h>

@protocol CSAdjunctListModelDelegate, SBFActionProviding;
@class NSMutableDictionary, NSMutableSet, NSString;

@interface CSAdjunctListModel : NSObject <SBFActionHandling> {

	NSMutableDictionary* _identifiersToItems;
	NSMutableSet* _pendingActions;
	BOOL _suspended;
	id<CSAdjunctListModelDelegate> _delegate;
	id<SBFActionProviding> _contentActionProvider;

}

@property (assign,nonatomic,__weak) id<CSAdjunctListModelDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SBFActionProviding> contentActionProvider;              //@synthesize contentActionProvider=_contentActionProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setContentActionProvider:(id<SBFActionProviding>)arg1 ;
-(id<SBFActionProviding>)contentActionProvider;
-(void)_removeItemForAction:(id)arg1 ;
-(BOOL)_actionIsInRelevantSlot:(id)arg1 ;
-(void)_handleLockScreenContentActionInvalidation:(id)arg1 ;
-(id)init;
-(id)_itemForAction:(id)arg1 ;
-(id<CSAdjunctListModelDelegate>)delegate;
-(void)_handleLockScreenContentActionAddition:(id)arg1 ;
-(id)_createItemForAction:(id)arg1 ;
-(void)_replayPendingChanges;
-(void)suspendItemHandling;
-(void)setDelegate:(id<CSAdjunctListModelDelegate>)arg1 ;
-(BOOL)handlesActionWithClass:(Class)arg1 ;
-(void)resumeItemHandling;
-(BOOL)handleAction:(id)arg1 forProvider:(id)arg2 ;
-(BOOL)_handleLockScreenContentAction:(id)arg1 ;
-(void)dealloc;
@end

