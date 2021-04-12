/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/_LSLazyPropertyList.h>

@class _LSLazyPropertyList, NSDictionary;

@interface _LSLazyPlugInPropertyList : _LSLazyPropertyList {

	_LSLazyPropertyList* _infoPlist;
	_LSLazyPropertyList* _sdkPlist;
	NSDictionary* _mergedPlist;
	os_unfair_lock_s _mergeLock;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithInfoPlist:(id)arg1 SDKPlist:(id)arg2 ;
-(BOOL)_getPropertyList:(id*)arg1 ;
-(BOOL)_getValue:(id*)arg1 forPropertyListKey:(id)arg2 ;
@end

