/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExtensionFoundation.framework/ExtensionFoundation
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSArray, NSEnumerator;

@interface EXOSExtensionEnumerator : NSEnumerator {

	NSArray* _extensionPaths;
	NSEnumerator* _extensionPathsEnumerator;

}

@property (readonly) NSArray * extensionPaths;                             //@synthesize extensionPaths=_extensionPaths - In the implementation block
@property (readonly) NSEnumerator * extensionPathsEnumerator;              //@synthesize extensionPathsEnumerator=_extensionPathsEnumerator - In the implementation block
+(void)enumerateExtensionsInDirectoryAtURL:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)nextObject;
-(NSArray *)extensionPaths;
-(id)initWithCacheURLs:(id)arg1 ;
-(NSEnumerator *)extensionPathsEnumerator;
@end

