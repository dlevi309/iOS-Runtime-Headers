/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/_LSRecordEnumerator.h>

@class NSURL;

@interface _LSApplicationRecordEnumerator : _LSRecordEnumerator {

	NSURL* _volumeURL;
	unsigned long long _options;
	vector<unsigned int, std::__1::allocator<unsigned int> >* _bundleIdentifiersOrUnits;
	unsigned _container;
	unsigned _bundleClass;

}

@property (assign) unsigned bundleClass;              //@synthesize bundleClass=_bundleClass - In the implementation block
-(BOOL)_evaluateBundleNoIO:(unsigned)arg1 data:(const LSBundleData*)arg2 context:(LSContext*)arg3 ;
-(unsigned)bundleClass;
-(void)setBundleClass:(unsigned)arg1 ;
-(id)_applicationRecordWithContext:(LSContext*)arg1 bundleIdentifierOrUnit:(unsigned)arg2 ;
-(BOOL)_prepareWithContext:(LSContext*)arg1 error:(id*)arg2 ;
-(BOOL)_getContainer:(unsigned*)arg1 context:(LSContext*)arg2 error:(id*)arg3 ;
-(BOOL)_getObject:(id*)arg1 atIndex:(unsigned long long)arg2 context:(LSContext*)arg3 ;
-(id)initWithVolumeURL:(id)arg1 options:(unsigned long long)arg2 ;
@end

