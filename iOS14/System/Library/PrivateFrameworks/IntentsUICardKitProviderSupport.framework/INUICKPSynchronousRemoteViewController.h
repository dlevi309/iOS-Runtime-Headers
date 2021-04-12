/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IntentsUICardKitProviderSupport.framework/IntentsUICardKitProviderSupport
*/

#import <IntentsUICardKitProviderSupport/IntentsUICardKitProviderSupport-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/INUICKPSynchronousRemoteViewDelegate.h>
#import <libobjc.A.dylib/CRKCardSectionViewControlling.h>
#import <libobjc.A.dylib/INUIRemoteViewControllerDelegate.h>

@protocol CRKCardSectionViewControllingDelegate, INUICKPInterfaceSectionOrganizing, INUICKPSynchronousRemoteViewControllerDelegate;
@class INUIRemoteViewController, NSSet, NSString;

@interface INUICKPSynchronousRemoteViewController : UIViewController <INUICKPSynchronousRemoteViewDelegate, CRKCardSectionViewControlling, INUIRemoteViewControllerDelegate> {

	id<CRKCardSectionViewControllingDelegate> cardSectionViewControllingDelegate;
	INUIRemoteViewController* _remoteViewController;
	id<INUICKPInterfaceSectionOrganizing> _interfaceSectionOrganizer;
	id<INUICKPSynchronousRemoteViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<INUICKPSynchronousRemoteViewControllerDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) INUIRemoteViewController * remoteViewController;                                                  //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (assign,nonatomic,__weak) id<INUICKPInterfaceSectionOrganizing> interfaceSectionOrganizer;                           //@synthesize interfaceSectionOrganizer=_interfaceSectionOrganizer - In the implementation block
@property (nonatomic,copy,readonly) NSSet * cachedRepresentedParameters; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CRKCardSectionViewControllingDelegate> cardSectionViewControllingDelegate; 
+(void)requestInstanceWithInfo:(id)arg1 configuration:(id)arg2 synchronousRemoteViewControllerDelegate:(id)arg3 reply:(/*^block*/id)arg4 ;
-(INUIRemoteViewController *)remoteViewController;
-(id<INUICKPSynchronousRemoteViewControllerDelegate>)delegate;
-(void)setDelegate:(id<INUICKPSynchronousRemoteViewControllerDelegate>)arg1 ;
-(id)_interaction;
-(CGSize)preferredContentSize;
-(void)setRemoteViewController:(INUIRemoteViewController *)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)loadView;
-(void)remoteViewControllerServiceDidTerminate:(id)arg1 ;
-(id)minimumSizesBySystemVersionForRemoteViewController:(id)arg1 ;
-(id)maximumSizesBySystemVersionForRemoteViewController:(id)arg1 ;
-(id)interfaceSectionsForRemoteViewController:(id)arg1 ;
-(void)setCardSectionViewControllingDelegate:(id<CRKCardSectionViewControllingDelegate>)arg1 ;
-(id<CRKCardSectionViewControllingDelegate>)cardSectionViewControllingDelegate;
-(NSSet *)cachedRepresentedParameters;
-(id)_minimumSizesBySystemVersion;
-(id<INUICKPInterfaceSectionOrganizing>)interfaceSectionOrganizer;
-(CGSize)cachedSizeForSynchronousRemoteView:(id)arg1 ;
-(void)setInterfaceSectionOrganizer:(id<INUICKPInterfaceSectionOrganizing>)arg1 ;
@end

