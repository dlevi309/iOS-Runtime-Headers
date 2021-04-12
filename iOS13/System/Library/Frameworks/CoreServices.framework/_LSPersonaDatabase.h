/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <libobjc.A.dylib/UMUserPersonaUpdateObserver.h>

@class NSDictionary, NSString;

@interface _LSPersonaDatabase : NSObject <UMUserPersonaUpdateObserver> {

	os_unfair_lock_s _lock;
	BOOL _registered;
	NSDictionary* _cachedBundleIDToPersonasMap;
	NSString* _cachedSystemPersonaIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)registerWithUserManagerForAttempt:(unsigned long long)arg1 maxAttempts:(unsigned long long)arg2 ;
-(void)registerWithUserManager;
-(id)initPrivately;
-(void)getUncachedBundleIDToPersonasMap:(id*)arg1 systemPersonaIdentifier:(id*)arg2 ;
-(void)getCachedBundleIDToPersonasMap:(id*)arg1 systemPersonaIdentifier:(id*)arg2 ;
-(id)getBundleIDToPersonasMap;
-(id)getSystemPersonaIdentifier;
-(void)personaListDidUpdate;
-(id)personaIdentifiersForBundleIdentifier:(id)arg1 ;
-(BOOL)personaListContainsSystemPersona:(id)arg1 ;
@end

