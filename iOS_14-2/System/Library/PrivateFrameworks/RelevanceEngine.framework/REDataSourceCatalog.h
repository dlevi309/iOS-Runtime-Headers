/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@protocol OS_dispatch_queue;
#import <RelevanceEngine/RelevanceEngine-Structs.h>
@class REDataSourceManager, NSCache, NSMutableDictionary, NSObject, REAppIconCache, REAppNameCache, NSSet;

@interface REDataSourceCatalog : NSObject {

	REDataSourceManager* _dataSourceManager;
	NSCache* _iconCache;
	NSMutableDictionary* _localizedNameCache;
	NSObject*<OS_dispatch_queue> _queue;
	REAppIconCache* _appIconCache;
	REAppNameCache* _appNameCache;

}

@property (nonatomic,readonly) NSSet * dataSourceIdentifiers; 
@property (nonatomic,readonly) NSSet * unrestrictedDataSourceIdentifiers; 
-(id)initWithDataSourceManager:(id)arg1 ;
-(void)dealloc;
-(void)enumerateDataSources:(/*^block*/id)arg1 ;
-(id)applicationIdentifierForDataSourceWithIdentifier:(id)arg1 ;
-(BOOL)wantsApplicationPrewarmForDataSourceWithIdentifier:(id)arg1 ;
-(NSSet *)dataSourceIdentifiers;
-(BOOL)requiresLocationInUseAssertonForDataSourceWithIdentifier:(id)arg1 ;
-(NSSet *)unrestrictedDataSourceIdentifiers;
-(SCD_Struct_RE2)minimumSupportedSystemVersionForDataSourceWithIdentifier:(id)arg1 ;
-(id)localizedNameForDataSourceWithIdentifier:(id)arg1 ;
-(id)localizedNameForApplicationWithIdentifier:(id)arg1 ;
-(BOOL)imageForDataSourceWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)imageForApplicationWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_applicationsStatesDidChange;
-(void)donatedAppIdentifiersWithCompletion:(/*^block*/id)arg1 ;
-(id)localAndRemoteAppIdentifiersForDataSourceIdentifiers:(id)arg1 ;
@end

