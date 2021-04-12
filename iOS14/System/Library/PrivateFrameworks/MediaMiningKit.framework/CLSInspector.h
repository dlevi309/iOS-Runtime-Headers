/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@class NSArray, NSMutableDictionary;

@interface CLSInspector : NSObject {

	NSArray* _profileClasses;
	NSMutableDictionary* _profileClassesByIdentifier;
	NSArray* _informantClasses;
	NSMutableDictionary* _informantClassesByIdentifier;
	NSMutableDictionary* _informantClassesByFamilyIdentifier;

}
+(id)sharedInspector;
+(void)invalidateSharedTransientCaches;
+(void)invalidateSharedPersistentCaches;
+(void)invalidateSharedPersistentCachesForGeoServiceProviderChange;
+(void)invalidateAllSharedCaches;
-(id)init;
-(Class)profileClassForIdentifier:(id)arg1 ;
-(id)informantIdentifierForHash:(unsigned long long)arg1 ;
-(id)informantClassesForAnyIdentifier:(id)arg1 ;
-(Class)informantClassForIdentifier:(id)arg1 ;
-(id)informantClassesForFamilyIdentifier:(id)arg1 ;
-(void)performInvestigation:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)profileIdentifierForHash:(unsigned long long)arg1 ;
-(void)performInvestigation:(id)arg1 options:(unsigned long long)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)informantIdentifiersForAnyIdentifier:(id)arg1 ;
-(void)performInvestigation:(id)arg1 ;
@end

