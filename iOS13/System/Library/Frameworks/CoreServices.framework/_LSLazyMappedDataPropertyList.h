/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/_LSLazyPropertyList.h>

@class NSData, _LSPlistHint;

@interface _LSLazyMappedDataPropertyList : _LSLazyPropertyList {

	NSData* _plistData;
	_LSPlistHint* _plistHint;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_getPropertyList:(id*)arg1 ;
-(BOOL)_getValue:(id*)arg1 forPropertyListKey:(id)arg2 ;
-(id)initWithPropertyListData:(id)arg1 ;
-(id)_plistHint;
-(id)objectsForPropertyListKeys:(id)arg1 ;
@end

