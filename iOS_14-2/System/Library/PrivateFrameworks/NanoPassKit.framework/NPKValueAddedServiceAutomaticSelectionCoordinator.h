/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <libobjc.A.dylib/NPKPassesDataSourceObserver.h>

@protocol NPKValueAddedServiceAutomaticSelectionCoordinatorDelegate, NPKPassesDataSource;
@class NSString;

@interface NPKValueAddedServiceAutomaticSelectionCoordinator : NSObject <NPKPassesDataSourceObserver> {

	id<NPKValueAddedServiceAutomaticSelectionCoordinatorDelegate> _delegate;
	id<NPKPassesDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<NPKValueAddedServiceAutomaticSelectionCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<NPKPassesDataSource> dataSource;                                                  //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NPKValueAddedServiceAutomaticSelectionCoordinatorDelegate>)delegate;
-(id<NPKPassesDataSource>)dataSource;
-(void)setDelegate:(id<NPKValueAddedServiceAutomaticSelectionCoordinatorDelegate>)arg1 ;
-(void)setDataSource:(id<NPKPassesDataSource>)arg1 ;
-(void)passesDataSource:(id)arg1 didAddPasses:(id)arg2 ;
-(void)passesDataSourceDidReorderPasses:(id)arg1 ;
-(void)passesDataSource:(id)arg1 didRemovePasses:(id)arg2 ;
-(void)passesDataSource:(id)arg1 didUpdatePasses:(id)arg2 ;
-(void)passesDataSourceDidReloadPasses:(id)arg1 ;
-(void)passesDataSource:(id)arg1 didUpdateSettingsForPass:(id)arg2 ;
-(void)_handleWalletPreferencesChanged:(id)arg1 ;
-(void)_updateAutomaticSelectionPasses;
-(id)initWithDelegate:(id)arg1 passesDataSource:(id)arg2 ;
@end

