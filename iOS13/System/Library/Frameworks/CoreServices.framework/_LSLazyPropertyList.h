/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface _LSLazyPropertyList : NSObject <NSCopying, NSSecureCoding>

@property (readonly) NSDictionary * propertyList; 
+(BOOL)supportsSecureCoding;
+(id)lazyPropertyListWithContext:(LSContext*)arg1 unit:(unsigned)arg2 ;
+(id)lazyPropertyListWithPropertyListData:(id)arg1 ;
+(id)lazyPropertyList;
+(id)lazyPropertyListWithPropertyListURL:(id)arg1 ;
+(id)lazyPropertyListWithLazyPropertyLists:(id)arg1 ;
+(id)lazyPropertyListWithPropertyList:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)propertyList;
-(id)objectForPropertyListKey:(id)arg1 ofClass:(Class)arg2 ;
-(BOOL)_getPropertyList:(id*)arg1 ;
-(BOOL)_getValue:(id*)arg1 forPropertyListKey:(id)arg2 ;
-(id)_filterValueFromPropertyList:(id)arg1 ofClass:(Class)arg2 valuesOfClass:(Class)arg3 ;
-(id)objectsForPropertyListKeys:(id)arg1 ;
-(id)objectForPropertyListKey:(id)arg1 ofClass:(Class)arg2 valuesOfClass:(Class)arg3 ;
@end

