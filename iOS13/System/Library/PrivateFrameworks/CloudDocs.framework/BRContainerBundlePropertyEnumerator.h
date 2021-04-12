/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSDictionary, NSEnumerator, NSString;

@interface BRContainerBundlePropertyEnumerator : NSEnumerator {

	NSDictionary* _plist;
	NSEnumerator* _enumerator;
	NSString* _propertyKey;
	Class _valueClass;

}
-(id)nextObject;
-(id)initWithContainerPlist:(id)arg1 propertyKey:(id)arg2 valuesOfClass:(Class)arg3 ;
@end

