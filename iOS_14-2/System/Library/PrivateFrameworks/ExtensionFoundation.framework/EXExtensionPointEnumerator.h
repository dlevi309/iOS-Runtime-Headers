/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExtensionFoundation.framework/ExtensionFoundation
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSDictionary, NSEnumerator, _EXExtensionPoint;

@interface EXExtensionPointEnumerator : NSEnumerator {

	NSDictionary* _extensionPoints;
	NSEnumerator* _extensionPointsKeyEnumerator;
	NSDictionary* _currentExtensionPointDict;
	_EXExtensionPoint* _currentExtensionPoint;

}

@property (readonly) NSDictionary * extensionPoints;                           //@synthesize extensionPoints=_extensionPoints - In the implementation block
@property (readonly) NSEnumerator * extensionPointsKeyEnumerator;              //@synthesize extensionPointsKeyEnumerator=_extensionPointsKeyEnumerator - In the implementation block
@property (readonly) NSDictionary * currentExtensionPointDict;                 //@synthesize currentExtensionPointDict=_currentExtensionPointDict - In the implementation block
@property (readonly) _EXExtensionPoint * currentExtensionPoint;                //@synthesize currentExtensionPoint=_currentExtensionPoint - In the implementation block
+(void)enumerateExtensionPointsInDirectoryAtURL:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)nextObject;
-(id)initWithCacheURLs:(id)arg1 ;
-(id)translateXPCCacheDictionary:(id)arg1 ;
-(NSDictionary *)extensionPoints;
-(NSEnumerator *)extensionPointsKeyEnumerator;
-(NSDictionary *)currentExtensionPointDict;
-(_EXExtensionPoint *)currentExtensionPoint;
@end

