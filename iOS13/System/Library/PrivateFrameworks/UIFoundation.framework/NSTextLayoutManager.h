/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSTextViewportElementProvider.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSTextLayoutManagerDelegatePrivate;
@class NSTextContentManager, NSArray, NSTextViewportLayoutController, NSLayoutManager, NSTextContainer, NSOperationQueue, NSString;

@interface NSTextLayoutManager : NSObject <NSTextViewportElementProvider, NSSecureCoding> {

	NSTextContentManager* _textContentManager;
	NSArray* _textContainers;
	NSTextViewportLayoutController* _viewportLayoutController;
	long long _applicationFrameworkContext;
	id<NSTextLayoutManagerDelegatePrivate> _delegate;
	NSLayoutManager* _companion;
	SCD_Struct_NS22* _lastTextContainerEntry;
	SCD_Struct_NS23* _textContainerEntries;
	SCD_Struct_NS23* _textContainerEntriesAccessHint;
	unsigned long long _textContainerEntriesSize;
	unsigned long long _textContainerEntriesCount;
	SCD_Struct_NS24* _textLayoutSegments;
	SCD_Struct_NS24* _textLayoutSegmentsAccessHint;
	SCD_Struct_NS24* _softInvalidatedSegmentHead;
	unsigned long long _textLayoutSegmentsSize;
	unsigned long long _textLayoutSegmentsCount;
	BOOL _usesFontLeading;
	BOOL _limitsLayoutForSuspiciousContents;
	NSTextContainer* _templateTextContainer;
	NSOperationQueue* _layoutQueue;

}

@property (__weak) id<NSTextLayoutManagerDelegate> delegate; 
@property (assign) BOOL usesFontLeading;                                            //@synthesize usesFontLeading=_usesFontLeading - In the implementation block
@property (assign) BOOL limitsLayoutForSuspiciousContents;                          //@synthesize limitsLayoutForSuspiciousContents=_limitsLayoutForSuspiciousContents - In the implementation block
@property (__weak,readonly) NSTextContentManager * textContentManager; 
@property (copy,readonly) NSArray * textContainers; 
@property (retain) NSTextContainer * templateTextContainer;                         //@synthesize templateTextContainer=_templateTextContainer - In the implementation block
@property (readonly) CGRect usageBoundsForLastTextContainer; 
@property (retain) NSOperationQueue * layoutQueue;                                  //@synthesize layoutQueue=_layoutQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(Class)viewportLayoutControllerClass;
+(Class)companionLayoutManagerClass;
-(id)init;
-(void)dealloc;
-(void)synchronize;
-(void)replaceCharactersInRange:(id)arg1 withAttributedString:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<NSTextLayoutManagerDelegate>)delegate;
-(void)setDelegate:(id<NSTextLayoutManagerDelegate>)arg1 ;
-(void)setLayoutQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)layoutQueue;
-(id)textContainerForLocation:(id)arg1 ;
-(NSTextContentManager *)textContentManager;
-(void)setUsesFontLeading:(BOOL)arg1 ;
-(void)updateLayoutWithTextLayoutFragment:(id)arg1 ;
-(BOOL)usesFontLeading;
-(long long)applicationFrameworkContext;
-(void)setApplicationFrameworkContext:(long long)arg1 ;
-(BOOL)limitsLayoutForSuspiciousContents;
-(void)setLimitsLayoutForSuspiciousContents:(BOOL)arg1 ;
-(NSArray *)textContainers;
-(void)_commonInit;
-(void)setTextContentManager:(NSTextContentManager *)arg1 ;
-(void)setTemplateTextContainer:(NSTextContainer *)arg1 ;
-(NSTextContainer *)templateTextContainer;
-(void)_addTextContainerFromTemplate:(id)arg1 ;
-(CGRect)usageBoundsInTextContainerAtIndex:(long long)arg1 ;
-(id)enumerateTextLayoutFragmentsFromLocation:(id)arg1 options:(long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)_removeTextContainersUntilCondition:(/*^block*/id)arg1 ;
-(void)ensureLayoutForBounds:(CGRect)arg1 ;
-(void)replaceCharactersInRange:(id)arg1 withElements:(id)arg2 ;
-(void)enumerateViewportElementsFromLocation:(id)arg1 options:(long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)_hasLayoutForLocation:(id)arg1 ;
-(id)viewportLayoutController;
-(id)companionLayoutManager;
-(void)replaceTextContentManager:(id)arg1 ;
-(void)_removeTextContainer;
-(id)rangeForTextContainerAtIndex:(long long)arg1 ;
-(CGRect)usageBoundsForLastTextContainer;
-(void)textContainerChangedGeometry:(id)arg1 ;
-(void)ensureLayoutForRange:(id)arg1 ;
-(void)invalidateLayoutForRange:(id)arg1 ;
-(id)textLayoutFragmentForPosition:(CGPoint)arg1 inTextContainerAtIndex:(long long)arg2 ;
-(id)textLayoutFragmentForLocation:(id)arg1 ;
-(void)finalizeAndPushLastTextContainer;
@end

