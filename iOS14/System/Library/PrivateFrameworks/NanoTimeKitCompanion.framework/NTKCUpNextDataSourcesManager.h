/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol NTKCUpNextDataSourcesManagerIdentifiersDelegate, OS_dispatch_queue;
#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class RERelevanceEngine, NSArray, NSObject;

@interface NTKCUpNextDataSourcesManager : NSObject {

	RERelevanceEngine* _relevanceEngine;
	NSArray* _firstPartyDataSourceEntries;
	NSArray* _thirdPartyDataSourceEntries;
	NSArray* _sportsDataSourceEntries;
	id<NTKCUpNextDataSourcesManagerIdentifiersDelegate> _firstPartyIdentifiersDelegate;
	id<NTKCUpNextDataSourcesManagerIdentifiersDelegate> _thirdPartyIdentifiersDelegate;
	id<NTKCUpNextDataSourcesManagerIdentifiersDelegate> _sportsIdentifiersDelegate;
	NSObject*<OS_dispatch_queue> _fetchQueue;
	SCD_Struct_NT19 _watchVersion;

}

@property (copy) NSArray * firstPartyDataSourceEntries;                                                                             //@synthesize firstPartyDataSourceEntries=_firstPartyDataSourceEntries - In the implementation block
@property (copy) NSArray * sportsDataSourceEntries;                                                                                 //@synthesize sportsDataSourceEntries=_sportsDataSourceEntries - In the implementation block
@property (copy) NSArray * thirdPartyDataSourceEntries;                                                                             //@synthesize thirdPartyDataSourceEntries=_thirdPartyDataSourceEntries - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> fetchQueue;                                                             //@synthesize fetchQueue=_fetchQueue - In the implementation block
@property (nonatomic,readonly) SCD_Struct_NT19 watchVersion;                                                                        //@synthesize watchVersion=_watchVersion - In the implementation block
@property (assign,nonatomic,__weak) id<NTKCUpNextDataSourcesManagerIdentifiersDelegate> firstPartyIdentifiersDelegate;              //@synthesize firstPartyIdentifiersDelegate=_firstPartyIdentifiersDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<NTKCUpNextDataSourcesManagerIdentifiersDelegate> thirdPartyIdentifiersDelegate;              //@synthesize thirdPartyIdentifiersDelegate=_thirdPartyIdentifiersDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<NTKCUpNextDataSourcesManagerIdentifiersDelegate> sportsIdentifiersDelegate;                  //@synthesize sportsIdentifiersDelegate=_sportsIdentifiersDelegate - In the implementation block
-(void)_buildRows;
-(NSObject*<OS_dispatch_queue>)fetchQueue;
-(void)dealloc;
-(void)_appsChangedNotification:(id)arg1 ;
-(void)_dataSourcesChangedNotification:(id)arg1 ;
-(void)fetchIdentifiers;
-(BOOL)_isNanoWeatherAppID:(id)arg1 ;
-(SCD_Struct_NT19)watchVersion;
-(id)_dedupeAndSortFirstPartyDataSourcesFromIdentifiers:(id)arg1 ;
-(void)_phoneDedupeFromIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_preGraceThirdPartyBundleIdentifiers;
-(void)_dedupeAndSortThirdPartyDataSourcesFromIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_firstPartyDataSourceEntries;
-(void)setFirstPartyDataSourceEntries:(NSArray *)arg1 ;
-(id<NTKCUpNextDataSourcesManagerIdentifiersDelegate>)firstPartyIdentifiersDelegate;
-(NSArray *)firstPartyDataSourceEntries;
-(void)setThirdPartyDataSourceEntries:(NSArray *)arg1 ;
-(id<NTKCUpNextDataSourcesManagerIdentifiersDelegate>)thirdPartyIdentifiersDelegate;
-(NSArray *)thirdPartyDataSourceEntries;
-(void)_fetchThirdPartyBundleIdentifiersWithCompletion:(/*^block*/id)arg1 ;
-(void)setSportsDataSourceEntries:(NSArray *)arg1 ;
-(id<NTKCUpNextDataSourcesManagerIdentifiersDelegate>)sportsIdentifiersDelegate;
-(NSArray *)sportsDataSourceEntries;
-(id)initWatchVersion:(SCD_Struct_NT19)arg1 ;
-(void)setFirstPartyIdentifiersDelegate:(id<NTKCUpNextDataSourcesManagerIdentifiersDelegate>)arg1 ;
-(void)setThirdPartyIdentifiersDelegate:(id<NTKCUpNextDataSourcesManagerIdentifiersDelegate>)arg1 ;
-(void)setSportsIdentifiersDelegate:(id<NTKCUpNextDataSourcesManagerIdentifiersDelegate>)arg1 ;
@end

