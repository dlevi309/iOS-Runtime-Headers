/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <libobjc.A.dylib/PXPreferencesObserver.h>
#import <libobjc.A.dylib/PXSidebarDataSectionEnablement.h>

@class NSMapTable, PHPhotoLibrary, NSString;

@interface PUSidebarDataSectionEnablementController : NSObject <PXPreferencesObserver, PXSidebarDataSectionEnablement> {

	BOOL _registeredAsPrefObserver;
	NSMapTable* _sectionManagerByItemTypeForAccountStoreChange;
	NSMapTable* _sectionManagersByItemTypeForDefaultsChange;
	PHPhotoLibrary* _photoLibrary;

}

@property (nonatomic,readonly) NSMapTable * sectionManagerByItemTypeForAccountStoreChange;              //@synthesize sectionManagerByItemTypeForAccountStoreChange=_sectionManagerByItemTypeForAccountStoreChange - In the implementation block
@property (nonatomic,readonly) NSMapTable * sectionManagersByItemTypeForDefaultsChange;                 //@synthesize sectionManagersByItemTypeForDefaultsChange=_sectionManagersByItemTypeForDefaultsChange - In the implementation block
@property (nonatomic,__weak,readonly) PHPhotoLibrary * photoLibrary;                                    //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (assign,nonatomic) BOOL registeredAsPrefObserver;                                             //@synthesize registeredAsPrefObserver=_registeredAsPrefObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)preferencesDidChange;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(PHPhotoLibrary *)photoLibrary;
-(void)_accountStoreDidChange:(id)arg1 ;
-(void)_observeAccountsStoreForManager:(id)arg1 enablementItem:(long long)arg2 ;
-(void)configureEnablementOfSectionManager:(id)arg1 enablementItem:(long long)arg2 ;
-(void)_configureEnablementOfSectionManager:(id)arg1 enablementItem:(long long)arg2 setupObservation:(BOOL)arg3 ;
-(void)_observeDefaultsForManager:(id)arg1 enablementItem:(long long)arg2 ;
-(BOOL)registeredAsPrefObserver;
-(NSMapTable *)sectionManagerByItemTypeForAccountStoreChange;
-(NSMapTable *)sectionManagersByItemTypeForDefaultsChange;
-(void)setRegisteredAsPrefObserver:(BOOL)arg1 ;
-(void)dealloc;
@end

