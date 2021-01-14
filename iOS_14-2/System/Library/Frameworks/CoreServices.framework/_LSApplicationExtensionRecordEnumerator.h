/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/_LSRecordEnumerator.h>

@class NSString, LSPropertyList;

@interface _LSApplicationExtensionRecordEnumerator : _LSRecordEnumerator {

	NSString* _extensionPointID;
	unsigned long long _options;
	/*^block*/id _filterBlock;
	LSPropertyList* _propertyList;
	vector<unsigned int, std::__1::allocator<unsigned int> >* _plugins;

}
-(id)initWithExtensionPointIdentifier:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)_getExtensionPointID:(unsigned*)arg1 context:(LSContext*)arg2 error:(id*)arg3 ;
-(BOOL)_prepareWithContext:(LSContext*)arg1 error:(id*)arg2 ;
-(BOOL)_evaluatePluginNoIO:(unsigned)arg1 data:(const LSPluginData*)arg2 extensionPointID:(unsigned)arg3 context:(LSContext*)arg4 ;
-(id)initWithExtensionPointIdentifier:(id)arg1 options:(unsigned long long)arg2 filter:(/*^block*/id)arg3 ;
-(BOOL)_getObject:(id*)arg1 atIndex:(unsigned long long)arg2 context:(LSContext*)arg3 ;
@end

