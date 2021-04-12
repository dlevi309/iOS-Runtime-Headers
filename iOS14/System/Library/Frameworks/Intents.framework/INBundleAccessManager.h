/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/


#import <Intents/Intents-Structs.h>
@class NSMutableDictionary, NSMutableSet;

@interface INBundleAccessManager : NSObject {

	SCD_Struct_IN3 _stats;
	os_unfair_lock_s _lock;
	NSMutableDictionary* _securityScopedURLs;
	NSMutableSet* _accessibleBundleIDs;

}

@property (nonatomic,readonly) NSMutableDictionary * securityScopedURLs;              //@synthesize securityScopedURLs=_securityScopedURLs - In the implementation block
@property (nonatomic,readonly) NSMutableSet * accessibleBundleIDs;                    //@synthesize accessibleBundleIDs=_accessibleBundleIDs - In the implementation block
+(id)sharedManager;
-(id)init;
-(id)_stats;
-(id)grantForBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)grantForBundleIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)_grantForBundleIdentifiers:(id)arg1 error:(id*)arg2 ;
-(NSMutableDictionary *)securityScopedURLs;
-(NSMutableSet *)accessibleBundleIDs;
@end

