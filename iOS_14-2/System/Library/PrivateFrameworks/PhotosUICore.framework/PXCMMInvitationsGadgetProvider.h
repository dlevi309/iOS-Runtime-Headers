/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXGadgetProvider.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXSectionedDataSourceManagerObserver.h>
#import <libobjc.A.dylib/PXCMMInvitationGadgetDelegate.h>

@protocol PXCMMWorkflowPresenting;
@class PXCMMInvitationsDataSource, PXCMMInvitationsDataSourceManager, NSString;

@interface PXCMMInvitationsGadgetProvider : PXGadgetProvider <PXChangeObserver, PXSectionedDataSourceManagerObserver, PXCMMInvitationGadgetDelegate> {

	PXCMMInvitationsDataSource* _dataSource;
	BOOL _didGenerateGadgets;
	PXCMMInvitationsDataSourceManager* _dataSourceManager;
	id<PXCMMWorkflowPresenting> _workflowPresenter;

}

@property (nonatomic,readonly) PXCMMInvitationsDataSourceManager * dataSourceManager;              //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (nonatomic,readonly) id<PXCMMWorkflowPresenting> workflowPresenter;                      //@synthesize workflowPresenter=_workflowPresenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)generateGadgets;
-(id)init;
-(unsigned long long)estimatedNumberOfGadgets;
-(PXCMMInvitationsDataSourceManager *)dataSourceManager;
-(id)invitationForGadget:(id)arg1 ;
-(id)_newGadgetForObjectID:(id)arg1 ;
-(id)initWithDataSourceManager:(id)arg1 workflowPresenter:(id)arg2 ;
-(void)_setDataSource:(id)arg1 changes:(id)arg2 ;
-(id<PXCMMWorkflowPresenting>)workflowPresenter;
-(id)initWithIdentifier:(id)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

