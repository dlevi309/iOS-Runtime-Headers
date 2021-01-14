/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/


#import <Intents/Intents-Structs.h>
@class NSDictionary, NSSet;

@interface INBundleAccessGrant : NSObject {

	long long _acquireCount;
	os_unfair_lock_s _lock;
	NSDictionary* _securityScopedURLs;

}

@property (nonatomic,readonly) NSDictionary * securityScopedURLs;              //@synthesize securityScopedURLs=_securityScopedURLs - In the implementation block
@property (nonatomic,readonly) NSSet * bundleIdentifiers; 
-(void)relinquish;
-(NSDictionary *)securityScopedURLs;
-(id)initWithSecurityScopedURLs:(id)arg1 ;
-(void)acquire;
-(NSSet *)bundleIdentifiers;
-(void)dealloc;
@end

