/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
*/

#import <PhotosUICore/PXObservable.h>

@protocol AEPackageTransportDelegate;
@class NSMutableArray, NSMutableDictionary;

@interface AEPackageTransport : PXObservable {

	id<AEPackageTransportDelegate> _delegate;
	NSMutableArray* __stagedIdentifiersInOrder;
	NSMutableDictionary* __stagedPackagesByIdentifier;

}

@property (nonatomic,readonly) NSMutableArray * _stagedIdentifiersInOrder;                     //@synthesize _stagedIdentifiersInOrder=__stagedIdentifiersInOrder - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _stagedPackagesByIdentifier;              //@synthesize _stagedPackagesByIdentifier=__stagedPackagesByIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<AEPackageTransportDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<AEPackageTransportDelegate>)delegate;
-(void)setDelegate:(id<AEPackageTransportDelegate>)arg1 ;
-(void)reportError:(id)arg1 ;
-(void)performChanges:(/*^block*/id)arg1 ;
-(id)mutableChangeObject;
-(void)_addPackageToStaging:(id)arg1 ;
-(void)_removePackageFromStagingWithIdentifier:(id)arg1 ;
-(void)commitPackage:(id)arg1 ;
-(void)stagePackage:(id)arg1 ;
-(void)stagePackages:(id)arg1 ;
-(void)stagePackages:(id)arg1 andNotify:(BOOL)arg2 ;
-(void)unstagePackageWithIdentifier:(id)arg1 ;
-(void)unstagePackageWithIdentifier:(id)arg1 andNotify:(BOOL)arg2 ;
-(void)unstagePackagesWithIdentifiers:(id)arg1 ;
-(id)orderedStagedIdentifiers;
-(id)stagedPackageForIdentifier:(id)arg1 ;
-(id)stagedPackages;
-(NSMutableArray *)_stagedIdentifiersInOrder;
-(NSMutableDictionary *)_stagedPackagesByIdentifier;
-(id)packagesWithLivePhotoContent;
@end

