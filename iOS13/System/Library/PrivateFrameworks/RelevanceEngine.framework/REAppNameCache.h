/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

