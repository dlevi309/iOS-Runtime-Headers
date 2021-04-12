/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


#import <AssistantServices/AssistantServices-Structs.h>
@class NSMutableDictionary;

@interface AFBundleResourceManager : NSObject {

	os_unfair_lock_s _lock;
	NSMutableDictionary* _resourceURLProvidersByIdentifier;

}
+(id)sharedManager;
-(id)init;
-(id)resourceForSoundID:(long long)arg1 ;
-(id)URLForResource:(id)arg1 ;
-(id)URLForSoundID:(long long)arg1 ;
@end

