/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>
#import <libobjc.A.dylib/PXSearchDataSourceSectionProvider.h>

@protocol PXSearchDataSourceSectionProviderChangeObserver;
@class NSArray, NSString;

@interface PXSearchIndexStatusSectionProvider : NSObject <PXSettingsKeyObserver, PXSearchDataSourceSectionProvider> {

	BOOL _showsIndexingFooter;
	id<PXSearchDataSourceSectionProviderChangeObserver> changeObserver;

}

@property (assign,nonatomic) BOOL showsIndexingFooter;                                                               //@synthesize showsIndexingFooter=_showsIndexingFooter - In the implementation block
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
-(void)registerClassesForSupplementaryViewReuseIdentifiers:(/*^block*/id)arg1 ;
-(id)supplementaryViewReuseIdentifierForKind:(id)arg1 indexPath:(id)arg2 ;
-(BOOL)showsIndexingFooter;
-(void)configureSupplementaryView:(id)arg1 kind:(id)arg2 indexPath:(id)arg3 ;
-(void)registerClassesForCellReuseIdentifiers:(/*^block*/id)arg1 ;
-(id)cellReuseIdentifierForItemIdentifier:(id)arg1 ;
-(void)configureCell:(id)arg1 forItemIdentifier:(id)arg2 ;
-(void)searchIndexStatusDidChange:(id)arg1 ;
-(void)setShowsIndexingFooter:(BOOL)arg1 ;
-(id<PXSearchDataSourceSectionProviderChangeObserver>)changeObserver;
-(unsigned long long)type;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)setChangeObserver:(id<PXSearchDataSourceSectionProviderChangeObserver>)arg1 ;
-(id)layoutForSectionIdentifier:(id)arg1 environment:(id)arg2 collectionViewLayoutMargins:(UIEdgeInsets)arg3 ;
-(void)dealloc;
@end

