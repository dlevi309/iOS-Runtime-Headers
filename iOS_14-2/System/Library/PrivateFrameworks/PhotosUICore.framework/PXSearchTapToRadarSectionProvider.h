/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>
#import <libobjc.A.dylib/PXSearchDataSourceSectionProvider.h>

@protocol PXSearchDataSourceSectionProviderChangeObserver, PXSearchTapToRadarSectionProviderDelegate;
@class NSString, NSArray;

@interface PXSearchTapToRadarSectionProvider : NSObject <PXSettingsKeyObserver, PXSearchDataSourceSectionProvider> {

	BOOL _shouldDisplayRadarDescriptionLabel;
	id<PXSearchDataSourceSectionProviderChangeObserver> changeObserver;
	id<PXSearchTapToRadarSectionProviderDelegate> _delegate;

}

@property (assign,nonatomic) BOOL shouldDisplayRadarDescriptionLabel;                                                //@synthesize shouldDisplayRadarDescriptionLabel=_shouldDisplayRadarDescriptionLabel - In the implementation block
@property (assign,nonatomic,__weak) id<PXSearchTapToRadarSectionProviderDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long type; 
@property (assign,nonatomic,__weak) id<PXSearchDataSourceSectionProviderChangeObserver> changeObserver; 
@property (nonatomic,copy,readonly) NSArray * sectionIdentifiers; 
-(NSArray *)sectionIdentifiers;
-(id)itemIdentifiersInSectionWithIdentifier:(id)arg1 ;
-(id)init;
-(id<PXSearchTapToRadarSectionProviderDelegate>)delegate;
-(void)setShouldDisplayRadarDescriptionLabel:(BOOL)arg1 ;
-(BOOL)shouldDisplayRadarDescriptionLabel;
-(void)registerClassesForSupplementaryViewReuseIdentifiers:(/*^block*/id)arg1 ;
-(id)supplementaryViewReuseIdentifierForKind:(id)arg1 indexPath:(id)arg2 ;
-(void)configureSupplementaryView:(id)arg1 kind:(id)arg2 indexPath:(id)arg3 ;
-(void)registerClassesForCellReuseIdentifiers:(/*^block*/id)arg1 ;
-(id)cellReuseIdentifierForItemIdentifier:(id)arg1 ;
-(void)configureCell:(id)arg1 forItemIdentifier:(id)arg2 ;
-(id<PXSearchDataSourceSectionProviderChangeObserver>)changeObserver;
-(void)setDelegate:(id<PXSearchTapToRadarSectionProviderDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(unsigned long long)type;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)setChangeObserver:(id<PXSearchDataSourceSectionProviderChangeObserver>)arg1 ;
-(id)layoutForSectionIdentifier:(id)arg1 environment:(id)arg2 collectionViewLayoutMargins:(UIEdgeInsets)arg3 ;
-(void)dealloc;
@end

