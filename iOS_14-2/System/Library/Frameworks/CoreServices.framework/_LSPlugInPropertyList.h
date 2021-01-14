/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/_LSLazyPropertyList.h>

@class _LSLazyPropertyList, NSDictionary;

@interface _LSPlugInPropertyList : _LSLazyPropertyList {

	_LSLazyPropertyList* _infoPlist;
	_LSLazyPropertyList* _sdkPlist;
	NSDictionary* _mergedPlist;
	os_unfair_lock_s _mergeLock;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithInfoPlist:(id)arg1 SDKPlist:(id)arg2 ;
-(BOOL)_getValue:(id*)arg1 forPropertyListKey:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_getPropertyList:(id*)arg1 ;
@end

