/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXMutableGadgetProvider.h>
#import <libobjc.A.dylib/PXGadgetDelegate.h>

@protocol PXGadgetProviderDelegate, PXGadgetDelegate;
@class PXGadgetNavigationHelper, NSString, NSArray;

@interface PXGadgetProvider : NSObject <PXMutableGadgetProvider, PXGadgetDelegate> {

	BOOL _isPerformingChanges;
	BOOL _invalidGadgets;
	NSString* _identifier;
	id<PXGadgetProviderDelegate> _delegate;
	id<PXGadgetDelegate> _nextGadgetResponder;
	NSArray* _gadgets;

}

@property (copy) NSArray * gadgets;                                                          //@synthesize gadgets=_gadgets - In the implementation block
@property (assign,nonatomic) BOOL isPerformingChanges;                                       //@synthesize isPerformingChanges=_isPerformingChanges - In the implementation block
@property (assign,nonatomic) BOOL invalidGadgets;                                            //@synthesize invalidGadgets=_invalidGadgets - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                        //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) id<PXGadgetProviderDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<PXGadgetDelegate> nextGadgetResponder;                //@synthesize nextGadgetResponder=_nextGadgetResponder - In the implementation block
@property (nonatomic,readonly) BOOL supportsDynamicRanking; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<PXGadgetTransition> gadgetTransition; 
@property (nonatomic,readonly) PXGadgetNavigationHelper * rootNavigationHelper; 
-(void)generateGadgets;
-(id)init;
-(id<PXGadgetProviderDelegate>)delegate;
-(void)startLoadingRemainingData;
-(void)loadDataForGadgets;
-(void)_updateIfNeeded;
-(unsigned long long)estimatedNumberOfGadgets;
-(void)pauseLoadingRemainingData;
-(void)setDelegate:(id<PXGadgetProviderDelegate>)arg1 ;
-(BOOL)gadget:(id)arg1 transitionToViewController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)gadgetViewControllerHostingGadget:(id)arg1 ;
-(id<PXGadgetTransition>)gadgetTransition;
-(void)gadget:(id)arg1 animateChanges:(/*^block*/id)arg2 ;
-(id<PXGadgetDelegate>)nextGadgetResponder;
-(void)setNextGadgetResponder:(id<PXGadgetDelegate>)arg1 ;
-(PXGadgetNavigationHelper *)rootNavigationHelper;
-(void)removeGadgetsAtIndexes:(id)arg1 ;
-(void)presentGadgetViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissGadgetViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)supportsDynamicRanking;
-(void)loadDataForPriority;
-(void)setGadgets:(NSArray *)arg1 ;
-(BOOL)isPerformingChanges;
-(void)setIsPerformingChanges:(BOOL)arg1 ;
-(BOOL)invalidGadgets;
-(void)setInvalidGadgets:(BOOL)arg1 ;
-(void)removeGadgets:(id)arg1 ;
-(NSString *)identifier;
-(void)addGadgets:(id)arg1 ;
-(void)removeAllGadgets;
-(void)insertGadgets:(id)arg1 atIndexes:(id)arg2 ;
-(void)performChanges:(/*^block*/id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)gadget:(id)arg1 didChange:(unsigned long long)arg2 ;
-(NSArray *)gadgets;
@end

