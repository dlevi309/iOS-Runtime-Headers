/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/_LSLazyPropertyList.h>

@class NSArray;

@interface _LSCompoundLazyPropertyList : _LSLazyPropertyList {

	NSArray* _plists;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_getPropertyList:(id*)arg1 ;
-(BOOL)_getValue:(id*)arg1 forPropertyListKey:(id)arg2 ;
-(id)initWithLazyPropertyLists:(id)arg1 ;
@end

