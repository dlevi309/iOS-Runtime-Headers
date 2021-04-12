/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <libobjc.A.dylib/FPSpotlightCollectorDelegate.h>

@class NSSet, NSMutableDictionary, NSArray;

@interface FPSpotlightCollectorManager : NSObject <FPSpotlightCollectorDelegate> {

	BOOL _areMountQueriesEnabled;
	id _providerDomainChangesToken;
	NSSet* _currentMountPoints;
	NSMutableDictionary* _collectorByDescriptor;

}

@property (retain) id providerDomainChangesToken;                            //@synthesize providerDomainChangesToken=_providerDomainChangesToken - In the implementation block
@property (retain) NSSet * currentMountPoints;                               //@synthesize currentMountPoints=_currentMountPoints - In the implementation block
@property (readonly) NSSet * effectiveCurrentMountPoints; 
@property (retain) NSMutableDictionary * collectorByDescriptor;              //@synthesize collectorByDescriptor=_collectorByDescriptor - In the implementation block
@property (assign) BOOL areMountQueriesEnabled;                              //@synthesize areMountQueriesEnabled=_areMountQueriesEnabled - In the implementation block
@property (nonatomic,readonly) NSArray * collectors; 
+(id)sharedInstance;
+(id)_mountPointsFromProviderDomains:(id)arg1 ;
-(id)init;
-(void)suspendCollectors;
-(void)resumeCollectors;
-(void)enableMountPointQueries;
-(void)disableMountPointQueries;
-(void)collectorDidFinish:(id)arg1 ;
-(id)mountPointsForCollector:(id)arg1 ;
-(void)registerDataSource:(id)arg1 ;
-(void)unregisterDataSource:(id)arg1 ;
-(id)_recursiveDescription;
-(void)_observeFileProviderDomains;
-(BOOL)areMountQueriesEnabled;
-(NSSet *)currentMountPoints;
-(id)providerDomainChangesToken;
-(void)setProviderDomainChangesToken:(id)arg1 ;
-(NSArray *)collectors;
-(void)setAreMountQueriesEnabled:(BOOL)arg1 ;
-(NSSet *)effectiveCurrentMountPoints;
-(void)setCurrentMountPoints:(NSSet *)arg1 ;
-(NSMutableDictionary *)collectorByDescriptor;
-(void)setCollectorByDescriptor:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
@end

