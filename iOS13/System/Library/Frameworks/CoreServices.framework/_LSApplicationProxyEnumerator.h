/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/_LSDBEnumerator.h>

@class NSURL;

@interface _LSApplicationProxyEnumerator : _LSDBEnumerator {

	NSURL* _volumeURL;
	unsigned long long _options;
	vector<unsigned int, std::__1::allocator<unsigned int> >* _bundleIdentifiers;
	unsigned _container;

}
-(id)initWithVolumeURL:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)_prepareWithContext:(LSContext*)arg1 error:(id*)arg2 ;
-(BOOL)_getObject:(id*)arg1 atIndex:(unsigned long long)arg2 context:(LSContext*)arg3 ;
-(BOOL)_getContainer:(unsigned*)arg1 context:(LSContext*)arg2 error:(id*)arg3 ;
-(id)_applicationProxyWithContext:(LSContext*)arg1 bundleIdentifier:(unsigned)arg2 ;
-(BOOL)_evaluateBundleNoIO:(unsigned)arg1 data:(const LSBundleData*)arg2 context:(LSContext*)arg3 ;
@end

