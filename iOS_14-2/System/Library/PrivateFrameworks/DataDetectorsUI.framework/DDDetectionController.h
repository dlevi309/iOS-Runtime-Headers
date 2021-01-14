/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <UIKit/UIActionSheetDelegate.h>

@protocol OS_dispatch_queue, DDDetectionControllerDelegate;
@class NSOperationQueue, NSObject, NSMapTable, DDActionController, BCSBusinessQueryService, NSString;

@interface DDDetectionController : NSObject <UIActionSheetDelegate> {

	NSOperationQueue* _fullScannerQueue;
	NSOperationQueue* _urlScannerQueue;
	NSObject*<OS_dispatch_queue> _protectQueue;
	NSMapTable* _containerToOperationsTable;
	NSMapTable* _containerToResultsTable;
	NSMapTable* _containerToContextsTable;
	DDActionController* _actionController;
	BCSBusinessQueryService* _bizService;
	NSObject*<DDDetectionControllerDelegate> _delegate;

}

@property (nonatomic,retain) BCSBusinessQueryService * _bizService;                                 //@synthesize bizService=_bizService - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<DDDetectionControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tapAndHoldSchemes;
+(id)sharedController;
+(unsigned long long)allPublicTypes;
+(id)filterResults:(id)arg1 forTypes:(unsigned long long)arg2 referenceDate:(id)arg3 referenceTimeZone:(id)arg4 ;
+(id)lightUnderlineColorFromTextColor:(id)arg1 ;
+(/*^block*/id)messagesActionHandler;
+(BOOL)_shouldConsiderResultForCoreRecents:(_DDResult*)arg1 ;
+(id)barcodeContext:(id)arg1 preview:(BOOL)arg2 contact:(id)arg3 ics:(id)arg4 ;
+(void)setMessagesActionHandler:(/*^block*/id)arg1 ;
+(id)updateContext:(id)arg1 forResult:(DDResultRef)arg2 atIndex:(unsigned long long)arg3 ofStorage:(id)arg4 ;
-(BOOL)shouldImmediatelyShowActionSheetForTapAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2 ;
-(id)init;
-(NSObject*<DDDetectionControllerDelegate>)delegate;
-(void)performAction:(id)arg1 fromView:(id)arg2 alertController:(id)arg3 interactionDelegate:(id)arg4 ;
-(void)performAction:(id)arg1 inView:(id)arg2 interactionDelegate:(id)arg3 ;
-(id)defaultActionForDOMNode:(id)arg1 forFrame:(id)arg2 ;
-(id)titleForResultAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2 context:(id)arg3 ;
-(id)defaultActionAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2 context:(id)arg3 ;
-(void)startURLificationForFrame:(id)arg1 detectedTypes:(unsigned long long)arg2 options:(int)arg3 ;
-(void)setDelegate:(NSObject*<DDDetectionControllerDelegate>)arg1 ;
-(id)actionsAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2 context:(id)arg3 ;
-(void)cancelAction;
-(void)interactionDidStartForURL:(id)arg1 ;
-(BOOL)shouldImmediatelyLaunchDefaultActionForURL:(id)arg1 ;
-(id)defaultActionForURL:(id)arg1 results:(id)arg2 context:(id)arg3 ;
-(id)actionsForURL:(id)arg1 identifier:(id)arg2 selectedText:(id)arg3 results:(id)arg4 context:(id)arg5 ;
-(DDResultRef)resultForURL:(id)arg1 identifier:(id)arg2 selectedText:(id)arg3 results:(id)arg4 context:(id)arg5 extendedContext:(id*)arg6 ;
-(void)frameWillBeRemoved:(id)arg1 ;
-(void)resetResultsForFrame:(id)arg1 ;
-(void)cancelURLificationForFrame:(id)arg1 ;
-(void)startURLificationForFrame:(id)arg1 detectedTypes:(unsigned long long)arg2 ;
-(id)preferredTextAttributesForLinkAtCharacterIndex:(unsigned long long)arg1 ofStorage:(id)arg2 ;
-(void)resetResultsForContainer:(id)arg1 ;
-(void)cancelURLificationForContainer:(id)arg1 ;
-(void)startURLificationForContainer:(id)arg1 detectedTypes:(unsigned long long)arg2 ;
-(void)_enqueueOperation:(id)arg1 ;
-(BOOL)isPerformingAction;
-(id)copyContextForContainer:(id)arg1 ;
-(DDResultRef)resultForNode:(id)arg1 url:(id)arg2 frame:(id)arg3 contextRef:(id*)arg4 ;
-(id)actionsForDOMNode:(id)arg1 forFrame:(id)arg2 ;
-(void)performAction:(id)arg1 fromAlertController:(id)arg2 interactionDelegate:(id)arg3 ;
-(BOOL)shouldImmediatelyShowActionSheetForURL:(id)arg1 forFrame:(id)arg2 ;
-(void)dealloc;
-(BOOL)shouldIgnoreMessageActionForURL:(id)arg1 ;
-(id)_businessItemForNumber:(id)arg1 messageable:(BOOL*)arg2 ;
-(void)_resetStoredResultsForContainer:(id)arg1 ;
-(void)resetResultsForTextView:(id)arg1 ;
-(void)_startCoalescedURLification:(id)arg1 clearPreviousResults:(BOOL)arg2 ;
-(id)_newOperationForContainer:(id)arg1 ;
-(void)_startCoalescedURLification:(id)arg1 ;
-(void)startURLificationForContainer:(id)arg1 detectedTypes:(unsigned long long)arg2 options:(int)arg3 ;
-(void)_doURLification:(id)arg1 ;
-(BOOL)actionIsCancellable;
-(BOOL)_checkIfBusinessWithURL:(id)arg1 messageable:(BOOL*)arg2 ;
-(BOOL)_checkIfBusinessWithResult:(_DDResult*)arg1 messageable:(BOOL*)arg2 ;
-(void)_interactionDidStartForURL:(id)arg1 ;
-(void)_interactionDidStartForResult:(_DDResult*)arg1 ;
-(_DDResult*)_resultForIdentifier:(id)arg1 forContainer:(id)arg2 context:(id*)arg3 ;
-(void)set_bizService:(BCSBusinessQueryService *)arg1 ;
-(void)_cacheBusinessPhoneNumber:(id)arg1 ;
-(id)_phoneNumberFromResult:(_DDResult*)arg1 ;
-(BCSBusinessQueryService *)_bizService;
-(BOOL)_phoneNumberIsABusinessNumber:(id)arg1 messageable:(BOOL*)arg2 ;
-(void)setResults:(CFArrayRef)arg1 forContainer:(id)arg2 ;
-(void)setContext:(id)arg1 forContainer:(id)arg2 ;
-(void)_commonResetResultsForContainer:(id)arg1 ;
-(void)containerWillBeRemoved:(id)arg1 ;
-(id)actionsForResult:(_DDResult*)arg1 context:(id)arg2 ;
-(BOOL)shouldImmediatelyLaunchDefaultActionForResult:(_DDResult*)arg1 ;
-(void)interactionDidStartForResult:(_DDResult*)arg1 ;
-(_DDResult*)_resultForURL:(id)arg1 forContainer:(id)arg2 context:(id*)arg3 ;
-(BOOL)_shouldImmediatelyShowActionSheetForCoreResult:(_DDResult*)arg1 ;
-(id)_ensureURLIsURL:(id)arg1 ;
-(BOOL)_shouldImmediatelyShowActionSheetForURL:(id)arg1 ;
-(id)barcodeActionsForContext:(id)arg1 URL:(id)arg2 result:(_DDResult*)arg3 contact:(id)arg4 ics:(id)arg5 ;
-(id)barcodePreviewActionForContext:(id)arg1 URL:(id)arg2 result:(_DDResult*)arg3 contact:(id)arg4 ics:(id)arg5 ;
-(id)titleForResult:(DDResultRef)arg1 subResult:(DDResultRef)arg2 withURL:(id)arg3 context:(id)arg4 ;
-(DDResultRef)resultForLinkAtIndex:(unsigned long long)arg1 inTextStorage:(id)arg2 ;
-(id)linkAtIndex:(unsigned long long)arg1 inTextStorage:(id)arg2 ;
-(id)attributedTitleForResultAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2 updaterBlock:(/*^block*/id)arg3 ;
-(id)attributedTitleForResult:(DDResultRef)arg1 updaterBlock:(/*^block*/id)arg2 ;
-(id)attributedTitleForURL:(id)arg1 updaterBlock:(/*^block*/id)arg2 ;
-(DDResultRef)_resultForAnchor:(id)arg1 forFrame:(id)arg2 context:(id*)arg3 ;
-(id)_plainTextAugmentedContext:(id)arg1 withFrame:(id)arg2 ;
-(DDResultRef)_resultForIdentifier:(id)arg1 withResults:(id)arg2 context:(id*)arg3 ;
-(DDResultRef)_resultForURL:(id)arg1 withResults:(id)arg2 context:(id*)arg3 ;
-(id)titleForURL:(id)arg1 results:(id)arg2 context:(id)arg3 ;
-(id)actionsForAnchor:(id)arg1 url:(id)arg2 forFrame:(id)arg3 ;
-(id)defaultActionForAnchor:(id)arg1 url:(id)arg2 forFrame:(id)arg3 ;
-(void)setResults:(CFArrayRef)arg1 forFrame:(id)arg2 ;
-(void)setContext:(id)arg1 forFrame:(id)arg2 ;
-(DDResultRef)resultForDOMNode:(id)arg1 forFrame:(id)arg2 ;
-(id)actionsForURL:(id)arg1 ;
-(id)_subResultAtIndex:(unsigned long long)arg1 ofResult:(id)arg2 ;
-(id)_resultForLinkAtIndex:(unsigned long long)arg1 inTextStorage:(id)arg2 subResult:(id*)arg3 url:(id*)arg4 effectiveRange:(NSRange*)arg5 ;
-(id)_URLForLinkAttributeValue:(id)arg1 ;
-(id)_applyBlock:(/*^block*/id)arg1 withResultsAtIndex:(unsigned long long)arg2 ofStorage:(id)arg3 context:(id)arg4 ;
-(BOOL)shouldUseLightStyleAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2 moreHighlight:(BOOL*)arg3 ;
-(BOOL)shouldImmediatelyLaunchDefaultActionForTapAndHoldAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2 ;
-(void)interactionDidStartAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2 ;
@end

