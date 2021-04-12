/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@interface NSKnownKeysMappingStrategy : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration>

@property (nonatomic,readonly) unsigned long long length; 
@property (nonatomic,readonly) id* keys; 
+(id)alloc;
+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)initForKeys:(id)arg1 ;
-(id*)keys;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PF4*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)length;
-(unsigned long long)fastIndexForKnownKey:(id)arg1 ;
-(id)initForKeys:(id*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)indexForKey:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

