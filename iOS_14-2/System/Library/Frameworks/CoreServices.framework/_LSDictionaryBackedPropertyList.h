/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/_LSLazyPropertyList.h>

@class NSDictionary;

@interface _LSDictionaryBackedPropertyList : _LSLazyPropertyList {

	NSDictionary* _plist;

}
+(BOOL)supportsSecureCoding;
-(id)initWithPropertyList:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_getValue:(id*)arg1 forPropertyListKey:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_getPropertyList:(id*)arg1 ;
@end

