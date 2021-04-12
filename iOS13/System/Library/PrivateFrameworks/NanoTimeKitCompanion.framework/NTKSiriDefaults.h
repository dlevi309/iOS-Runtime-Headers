/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <libobjc.A.dylib/NTKFaceCollectionObserver.h>

@class NTKFaceCollection, NSSet, NSString;

@interface NTKSiriDefaults : NSObject <NTKFaceCollectionObserver> {

	NTKFaceCollection* _faceCollection;
	BOOL _hasMigratedDisabledDataSources;

}

@property (assign,nonatomic) BOOL watchHasMigratedAvailableDataSources; 
@property (nonatomic,retain) NSSet * phoneThirdPartyDataSources; 
@property (nonatomic,retain) NSSet * watchThirdPartyDataSources; 
@property (nonatomic,readonly) BOOL hasMigratedDisabledDataSources;                  //@synthesize hasMigratedDisabledDataSources=_hasMigratedDisabledDataSources - In the implementation block
@property (nonatomic,retain) NSSet * disabledDataSources; 
@property (nonatomic,readonly) BOOL isUpNextFaceCurrentlyActive; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(NSSet *)disabledDataSources;
-(void)faceCollectionDidLoad:(id)arg1 ;
-(void)_fetchNewFaceCollection;
-(void)_activeDeviceDidChange:(id)arg1 ;
-(void)migrateIfNecessary;
-(id)_domainAccesor;
-(void)_synchronizeDefaultsForKeys:(id)arg1 ;
-(void)_thirdPartyDataSourcesDidChange;
-(void)_disabledDataSourcesDidChange;
-(BOOL)isUpNextFaceCurrentlyActive;
-(BOOL)watchHasMigratedAvailableDataSources;
-(void)setWatchHasMigratedAvailableDataSources:(BOOL)arg1 ;
-(NSSet *)phoneThirdPartyDataSources;
-(void)setPhoneThirdPartyDataSources:(NSSet *)arg1 ;
-(NSSet *)watchThirdPartyDataSources;
-(void)setWatchThirdPartyDataSources:(NSSet *)arg1 ;
-(void)setDisabledDataSources:(NSSet *)arg1 ;
-(BOOL)hasMigratedDataSources;
-(BOOL)hasMigratedDisabledDataSources;
@end

