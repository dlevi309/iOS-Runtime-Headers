/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <libobjc.A.dylib/LSDetachable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSString;

@interface LSPropertyList : NSObject <LSDetachable, NSCopying>

@property (nonatomic,readonly) NSDictionary * _expensiveDictionaryRepresentation; 
@property (readonly) NSString * _applicationIdentifier; 
+(id)new;
+(id)propertyListWithDictionary:(id)arg1 ;
+(id)propertyListWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)propertyListWithData:(id)arg1 ;
-(NSDictionary *)_expensiveDictionaryRepresentation;
-(NSString *)_applicationIdentifier;
-(void)detach;
-(id)objectForKey:(id)arg1 ofClass:(Class)arg2 ;
-(id)init;
-(id)objectsForKeys:(id)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)objectForKey:(id)arg1 ofClass:(Class)arg2 valuesOfClass:(Class)arg3 ;
-(id)_init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

