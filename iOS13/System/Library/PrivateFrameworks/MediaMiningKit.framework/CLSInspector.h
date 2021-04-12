/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(void)invalidateAllSharedCaches;
+(void)invalidateSharedPersistentCachesForGeoServiceProviderChange;
+(void)invalidateSharedPersistentCaches;
+(void)invalidateSharedTransientCaches;
-(id)init;
-(Class)informantClassForIdentifier:(id)arg1 ;
-(id)informantClassesForFamilyIdentifier:(id)arg1 ;
-(id)informantClassesForAnyIdentifier:(id)arg1 ;
-(id)informantIdentifiersForAnyIdentifier:(id)arg1 ;
-(id)informantIdentifierForHash:(unsigned long long)arg1 ;
-(Class)profileClassForIdentifier:(id)arg1 ;
-(id)profileIdentifierForHash:(unsigned long long)arg1 ;
-(void)performInvestigation:(id)arg1 ;
-(void)performInvestigation:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(void)performInvestigation:(id)arg1 options:(unsigned long long)arg2 progressBlock:(/*^block*/id)arg3 ;
@end

