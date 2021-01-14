/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXPeopleFlowController.h>

@protocol PXPeopleBootstrapFlowDelegate, PXPeopleSuggestionManagerDataSource;
@class PXPeopleBootstrapContext, NSArray, NSString;

@interface PXPeopleBootstrapFlowController : NSObject <PXPeopleFlowController> {

	id<PXPeopleBootstrapFlowDelegate> _bootstrapDelegate;
	id<PXPeopleSuggestionManagerDataSource> _bootstrapDataSource;
	PXPeopleBootstrapContext* _context;
	unsigned long long _namingResultType;
	NSArray* _viewControllers;
	unsigned long long _viewControllerIndex;

}

@property (nonatomic,copy) NSArray * viewControllers;                                                             //@synthesize viewControllers=_viewControllers - In the implementation block
@property (assign,nonatomic) unsigned long long viewControllerIndex;                                              //@synthesize viewControllerIndex=_viewControllerIndex - In the implementation block
@property (nonatomic,retain) id<PXPeopleBootstrapFlowDelegate> bootstrapDelegate;                                 //@synthesize bootstrapDelegate=_bootstrapDelegate - In the implementation block
@property (nonatomic,retain) id<PXPeopleSuggestionManagerDataSource> bootstrapDataSource;                         //@synthesize bootstrapDataSource=_bootstrapDataSource - In the implementation block
@property (nonatomic,readonly) PXPeopleBootstrapContext * context;                                                //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) BOOL shouldPresentNaming; 
@property (nonatomic,readonly) BOOL shouldPresentPostNaming; 
@property (assign,nonatomic) unsigned long long namingResultType;                                                 //@synthesize namingResultType=_namingResultType - In the implementation block
@property (nonatomic,readonly) BOOL hasNextViewController; 
@property (nonatomic,readonly) UIViewController*<PXPeopleFlowViewController> nextViewController; 
@property (nonatomic,readonly) BOOL hasPreviousViewController; 
@property (nonatomic,readonly) UIViewController*<PXPeopleFlowViewController> previousViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setViewControllers:(NSArray *)arg1 ;
-(id)init;
-(NSArray *)viewControllers;
-(id)initWithContext:(id)arg1 ;
-(BOOL)hasNextViewController;
-(void)cancel:(id)arg1 ;
-(UIViewController*<PXPeopleFlowViewController>)nextViewController;
-(BOOL)hasPreviousViewController;
-(void)commonInitWithContext:(id)arg1 ;
-(id)initEmptyFlowWithContext:(id)arg1 ;
-(BOOL)shouldPresentNaming;
-(BOOL)shouldPresentPostNaming;
-(id<PXPeopleBootstrapFlowDelegate>)bootstrapDelegate;
-(void)setBootstrapDelegate:(id<PXPeopleBootstrapFlowDelegate>)arg1 ;
-(id<PXPeopleSuggestionManagerDataSource>)bootstrapDataSource;
-(unsigned long long)namingResultType;
-(void)setBootstrapDataSource:(id<PXPeopleSuggestionManagerDataSource>)arg1 ;
-(void)setNamingResultType:(unsigned long long)arg1 ;
-(unsigned long long)viewControllerIndex;
-(void)setViewControllerIndex:(unsigned long long)arg1 ;
-(PXPeopleBootstrapContext *)context;
-(void)done:(id)arg1 ;
-(UIViewController*<PXPeopleFlowViewController>)previousViewController;
-(void)computeViewControllersForBootstrapFlow;
-(void)recomputeViewControllersForChangeInKeyPath:(id)arg1 ;
-(void)dealloc;
@end

