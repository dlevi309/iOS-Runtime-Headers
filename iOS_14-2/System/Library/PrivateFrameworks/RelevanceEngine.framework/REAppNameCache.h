/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RESingleton.h>

@class NSMutableDictionary, NSLock;

@interface REAppNameCache : RESingleton {

	NSMutableDictionary* _nameCache;
	NSLock* _lock;

}
-(id)_init;
-(id)localizedNameForApplicationWithIdentifier:(id)arg1 ;
@end

