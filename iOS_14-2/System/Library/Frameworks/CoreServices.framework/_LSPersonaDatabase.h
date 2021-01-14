/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <libobjc.A.dylib/UMUserPersonaUpdateObserver.h>

@class NSDictionary, NSString;

@interface _LSPersonaDatabase : NSObject <UMUserPersonaUpdateObserver> {

	os_unfair_lock_s _ivarLock;
	os_unfair_lock_s _uncachedCalloutLock;
	BOOL _registered;
	NSDictionary* _cachedBundleIDToPersonasMap;
	NSString* _cachedSystemPersonaIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)getSystemPersonaIdentifier;
-(void)getUncachedBundleIDToPersonasMap:(id*)arg1 systemPersonaIdentifier:(id*)arg2 ;
-(void)getCachedBundleIDToPersonasMap:(id*)arg1 systemPersonaIdentifier:(id*)arg2 ;
-(void)registerWithUserManager;
-(BOOL)personaListContainsSystemPersona:(id)arg1 ;
-(id)initPrivately;
-(void)registerWithUserManagerForAttempt:(unsigned long long)arg1 maxAttempts:(unsigned long long)arg2 ;
-(id)personaIdentifiersForBundleIdentifier:(id)arg1 ;
-(void)personaListDidUpdate;
-(id)getBundleIDToPersonasMap;
@end

