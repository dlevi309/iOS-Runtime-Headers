/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKClassKitChangeNotifierDelegate.h>
#import <libobjc.A.dylib/CRKASMRosterProviding.h>

@protocol CRKASMRoster;
@class NSArray, CRKASMRosterProviderConfiguration, CRKASMCertificateIngestor, CRKClassKitChangeNotifier, CRKASMWorldBuildOperation, CRKASMRosterUpdater, NSString;

@interface CRKASMConcreteRosterProvider : NSObject <CRKClassKitChangeNotifierDelegate, CRKASMRosterProviding> {

	BOOL _populated;
	CRKASMRosterProviderConfiguration* _configuration;
	id<CRKASMRoster> _roster;
	NSArray* _locations;
	NSArray* _locationsWithManagePermissions;
	CRKASMCertificateIngestor* _certificateIngestor;
	CRKClassKitChangeNotifier* _classKitChangeNotifier;
	CRKASMWorldBuildOperation* _worldBuildOperation;
	CRKASMRosterUpdater* _rosterUpdater;

}

@property (nonatomic,readonly) CRKASMRosterProviderConfiguration * configuration;               //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) id<CRKASMRoster> roster;                                           //@synthesize roster=_roster - In the implementation block
@property (assign,getter=isPopulated,nonatomic) BOOL populated;                                 //@synthesize populated=_populated - In the implementation block
@property (nonatomic,copy) NSArray * locations;                                                 //@synthesize locations=_locations - In the implementation block
@property (nonatomic,copy) NSArray * locationsWithManagePermissions;                            //@synthesize locationsWithManagePermissions=_locationsWithManagePermissions - In the implementation block
@property (nonatomic,readonly) CRKASMCertificateIngestor * certificateIngestor;                 //@synthesize certificateIngestor=_certificateIngestor - In the implementation block
@property (nonatomic,readonly) CRKClassKitChangeNotifier * classKitChangeNotifier;              //@synthesize classKitChangeNotifier=_classKitChangeNotifier - In the implementation block
@property (nonatomic,retain) CRKASMWorldBuildOperation * worldBuildOperation;                   //@synthesize worldBuildOperation=_worldBuildOperation - In the implementation block
@property (nonatomic,readonly) CRKASMRosterUpdater * rosterUpdater;                             //@synthesize rosterUpdater=_rosterUpdater - In the implementation block
@property (nonatomic,readonly) id<CRKASMUserFetching> userFetcher; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)studentRosterProvider;
+(id)instructorRosterProvider;
-(NSArray *)locations;
-(void)refresh;
-(void)setLocations:(NSArray *)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(id<CRKASMRoster>)roster;
-(CRKASMRosterProviderConfiguration *)configuration;
-(BOOL)isPopulated;
-(void)dealloc;
-(void)createCourseWithProperties:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateCourseWithIdentifier:(id)arg1 properties:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)ingestCertificates:(id)arg1 forTrustedUserIdentifier:(id)arg2 error:(id*)arg3 ;
-(void)removeCourseWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)startNewWorldBuild;
-(CRKASMCertificateIngestor *)certificateIngestor;
-(CRKASMRosterUpdater *)rosterUpdater;
-(CRKASMWorldBuildOperation *)worldBuildOperation;
-(void)setWorldBuildOperation:(CRKASMWorldBuildOperation *)arg1 ;
-(void)worldBuildDidFinish:(id)arg1 ;
-(void)processFinishedWorldBuild:(id)arg1 ;
-(void)setPopulated:(BOOL)arg1 ;
-(void)logDurationOfOperation:(id)arg1 ;
-(void)updateRoster:(id)arg1 ;
-(void)updateManageableLocations:(id)arg1 ;
-(void)setRoster:(id<CRKASMRoster>)arg1 ;
-(NSArray *)locationsWithManagePermissions;
-(void)setLocationsWithManagePermissions:(NSArray *)arg1 ;
-(void)notifierDidObserveClassKitChange:(id)arg1 ;
-(id)studentDirectoryForLocationIDs:(id)arg1 ;
-(id)instructorDirectoryForLocationIDs:(id)arg1 ;
-(id<CRKASMUserFetching>)userFetcher;
-(CRKClassKitChangeNotifier *)classKitChangeNotifier;
@end

