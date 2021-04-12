/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IntentsUICardKitProviderSupport.framework/IntentsUICardKitProviderSupport
*/

@class NSArray, NSDictionary;


@protocol INUICKPViewControllerAllocating <NSObject>
@property (assign,nonatomic) BOOL requiresUserConsent; 
@property (nonatomic,copy,readonly) NSArray * allocatedViewControllers; 
@property (nonatomic,copy,readonly) NSDictionary * viewControllersByInitialInterfaceSection; 
@property (nonatomic,copy,readonly) NSArray * redundantInterfaceSections; 
@property (assign,nonatomic,__weak) id<INUICKPViewControllerAllocatingDelegate> delegate; 
@optional
-(id<INUICKPViewControllerAllocatingDelegate>)delegate;
-(void)setDelegate:(id)arg1;

@required
-(BOOL)requiresUserConsent;
-(void)setRequiresUserConsent:(BOOL)arg1;
-(NSArray *)redundantInterfaceSections;
-(void)performAllocationsFromInteraction:(id)arg1 initialInterfaceSections:(id)arg2 completion:(/*^block*/id)arg3;
-(NSArray *)allocatedViewControllers;
-(NSDictionary *)viewControllersByInitialInterfaceSection;

@end

