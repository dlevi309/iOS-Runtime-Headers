/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/LSPropertyList.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/LSDetachable.h>

@class NSDictionary;

@interface _LSLazyPropertyList : LSPropertyList <NSCopying, NSSecureCoding, LSDetachable>

@property (readonly) NSDictionary * propertyList; 
+(BOOL)supportsSecureCoding;
+(id)lazyPropertyListWithPropertyListURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)lazyPropertyListWithLazyPropertyLists:(id)arg1 ;
+(id)lazyPropertyListWithContext:(LSContext*)arg1 unit:(unsigned)arg2 ;
+(id)lazyPropertyList;
+(id)lazyPropertyListWithPropertyListData:(id)arg1 ;
+(id)lazyPropertyListWithPropertyList:(id)arg1 ;
+(id)lazyPropertyListWithPropertyListURL:(id)arg1 ;
-(id)_expensiveDictionaryRepresentation;
-(void)detach;
-(id)objectForKey:(id)arg1 ofClass:(Class)arg2 ;
-(id)init;
-(id)objectsForKeys:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_getValue:(id*)arg1 forPropertyListKey:(id)arg2 ;
-(id)objectForKey:(id)arg1 ofClass:(Class)arg2 valuesOfClass:(Class)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_getPropertyList:(id*)arg1 ;
-(NSDictionary *)propertyList;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)uncheckedObjectsForKeys:(id)arg1 ;
@end

