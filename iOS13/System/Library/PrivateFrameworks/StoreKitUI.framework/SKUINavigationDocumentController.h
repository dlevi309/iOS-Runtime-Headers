/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <libobjc.A.dylib/IKAppNavigationController.h>

@protocol SKUINavigationDocumentDelegate;
@class NSMutableArray, UINavigationController, SKUIClientContext, NSArray, NSString;

@interface SKUINavigationDocumentController : NSObject <IKAppNavigationController> {

	NSMutableArray* _pendingNavigationStackEnsureConsistencyRequests;
	NSMutableArray* _stackItems;
	UINavigationController* _navigationController;
	SKUIClientContext* _clientContext;
	id<SKUINavigationDocumentDelegate> _delegate;
	UINavigationController* _overrideNavigationController;
	UINavigationController* _moreNavigationController;

}

@property (nonatomic,retain) UINavigationController * moreNavigationController;                  //@synthesize moreNavigationController=_moreNavigationController - In the implementation block
@property (nonatomic,readonly) UINavigationController * navigationController;                    //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                                  //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) id<SKUINavigationDocumentDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UINavigationController * overrideNavigationController;              //@synthesize overrideNavigationController=_overrideNavigationController - In the implementation block
@property (nonatomic,copy,readonly) NSArray * documentStackItems;                                //@synthesize stackItems=_stackItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)clear;
-(id<SKUINavigationDocumentDelegate>)delegate;
-(void)setDelegate:(id<SKUINavigationDocumentDelegate>)arg1 ;
-(UINavigationController *)navigationController;
-(UINavigationController *)moreNavigationController;
-(SKUIClientContext *)clientContext;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(id)initWithNavigationController:(id)arg1 ;
-(void)pushDocument:(id)arg1 options:(id)arg2 ;
-(void)insertDocument:(id)arg1 beforeDocument:(id)arg2 options:(id)arg3 ;
-(void)replaceDocument:(id)arg1 withDocument:(id)arg2 options:(id)arg3 ;
-(void)popDocument;
-(void)popToDocument:(id)arg1 ;
-(void)popToRootDocument;
-(void)removeDocument:(id)arg1 ;
-(id)documents;
-(NSArray *)documentStackItems;
-(void)_scheduleFlushingPendingNavigationStackEnsureConsistencyRequestsWithTransitionCoordinator:(id)arg1 ;
-(void)_ensureStackConsistencyForNavigationControllerOperation:(long long)arg1 operationDidComplete:(BOOL)arg2 ;
-(void)_unloadAllStackItems;
-(void)_handleStackDidChange;
-(id)_activeNavigationController;
-(void)popAllDocuments;
-(void)_applyDocumentReplacementForOldStackItem:(id)arg1 atOldIndex:(long long)arg2 withStackItem:(id)arg3 ;
-(void)ensureStackConsistencyForNavigationControllerOperation:(long long)arg1 operationDidComplete:(BOOL)arg2 ;
-(void)setStackItems:(id)arg1 animated:(BOOL)arg2 ;
-(UINavigationController *)overrideNavigationController;
-(void)setOverrideNavigationController:(UINavigationController *)arg1 ;
-(void)setMoreNavigationController:(UINavigationController *)arg1 ;
@end

