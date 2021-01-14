/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IntentsUICardKitProviderSupport.framework/IntentsUICardKitProviderSupport
*/

#import <libobjc.A.dylib/INUICKPInterfaceSectionOrganizing.h>
#import <libobjc.A.dylib/INUICKPSynchronousRemoteViewControllerDelegate.h>
#import <libobjc.A.dylib/INUICKPViewControllerAllocating.h>

@protocol INUICKPViewControllerAllocatingDelegate;
@class NSArray, NSDictionary, NSMutableArray, INInteraction, NSMutableSet, NSMutableDictionary, NSString;

@interface INUICKPSynchronousRemoteViewControllerAllocator : NSObject <INUICKPInterfaceSectionOrganizing, INUICKPSynchronousRemoteViewControllerDelegate, INUICKPViewControllerAllocating> {

	Class _synchronousRemoteViewControllerClass;
	BOOL _requiresUserConsent;
	id<INUICKPViewControllerAllocatingDelegate> delegate;
	NSMutableArray* _mutableSynchronousRemoteViewControllers;
	INInteraction* _interaction;
	NSMutableArray* _finalInterfaceSections;
	NSMutableSet* _handledParameters;
	NSMutableDictionary* _mutableSynchronousRemoteViewControllersByInitialInterfaceSection;
	NSMutableArray* _mutableRedundantInterfaceSections;

}

@property (nonatomic,readonly) NSMutableArray * mutableSynchronousRemoteViewControllers;                                            //@synthesize mutableSynchronousRemoteViewControllers=_mutableSynchronousRemoteViewControllers - In the implementation block
@property (nonatomic,retain) INInteraction * interaction;                                                                           //@synthesize interaction=_interaction - In the implementation block
@property (nonatomic,readonly) NSMutableArray * finalInterfaceSections;                                                             //@synthesize finalInterfaceSections=_finalInterfaceSections - In the implementation block
@property (nonatomic,readonly) NSMutableSet * handledParameters;                                                                    //@synthesize handledParameters=_handledParameters - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * mutableSynchronousRemoteViewControllersByInitialInterfaceSection;              //@synthesize mutableSynchronousRemoteViewControllersByInitialInterfaceSection=_mutableSynchronousRemoteViewControllersByInitialInterfaceSection - In the implementation block
@property (nonatomic,readonly) NSMutableArray * mutableRedundantInterfaceSections;                                                  //@synthesize mutableRedundantInterfaceSections=_mutableRedundantInterfaceSections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL requiresUserConsent;                                                                              //@synthesize requiresUserConsent=_requiresUserConsent - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allocatedViewControllers; 
@property (nonatomic,copy,readonly) NSDictionary * viewControllersByInitialInterfaceSection; 
@property (nonatomic,copy,readonly) NSArray * redundantInterfaceSections; 
@property (assign,nonatomic,__weak) id<INUICKPViewControllerAllocatingDelegate> delegate; 
-(id)init;
-(id<INUICKPViewControllerAllocatingDelegate>)delegate;
-(void)setDelegate:(id<INUICKPViewControllerAllocatingDelegate>)arg1 ;
-(INInteraction *)interaction;
-(void)setInteraction:(INInteraction *)arg1 ;
-(BOOL)requiresUserConsent;
-(void)setRequiresUserConsent:(BOOL)arg1 ;
-(double)boundingWidthForSynchronousRemoteViewController:(id)arg1 ;
-(id)organizedInterfaceSections;
-(NSArray *)redundantInterfaceSections;
-(void)setSynchronousRemoteViewControllerClass:(Class)arg1 ;
-(void)performAllocationsFromInteraction:(id)arg1 initialInterfaceSections:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSArray *)allocatedViewControllers;
-(NSDictionary *)viewControllersByInitialInterfaceSection;
-(void)_beginRecursivelyConnectingForInterfaceSectionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_recursivelyConnectForInterfaceSectionQueue:(id)arg1 recursionDepth:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)_unhandledParametersForInterfaceSection:(id)arg1 ;
-(NSMutableArray *)mutableSynchronousRemoteViewControllers;
-(NSMutableSet *)handledParameters;
-(NSMutableArray *)finalInterfaceSections;
-(NSMutableDictionary *)mutableSynchronousRemoteViewControllersByInitialInterfaceSection;
-(NSMutableArray *)mutableRedundantInterfaceSections;
@end

