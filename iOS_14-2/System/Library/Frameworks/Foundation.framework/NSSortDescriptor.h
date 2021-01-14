/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NSSortDescriptor : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _sortDescriptorFlags;
	NSString* _key;
	SEL _selector;
	id _selectorOrBlock;

}

@property (copy,readonly) NSString * key; 
@property (readonly) BOOL ascending; 
@property (readonly) SEL selector; 
@property (readonly) id comparator; 
@property (retain,readonly) id reversedSortDescriptor; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)_defaultSelectorName;
+(id)sortDescriptorWithKey:(id)arg1 ascending:(BOOL)arg2 ;
+(id)sortDescriptorWithKey:(id)arg1 ascending:(BOOL)arg2 selector:(SEL)arg3 ;
+(id)sortDescriptorWithKey:(id)arg1 ;
+(id)sortDescriptorWithKey:(id)arg1 ascending:(BOOL)arg2 comparator:(/*^block*/id)arg3 ;
-(SEL)selector;
-(void)_setKey:(id)arg1 ;
-(id)initWithKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)allowEvaluation;
-(id)initWithKey:(id)arg1 ascending:(BOOL)arg2 selector:(SEL)arg3 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)reversedSortDescriptor;
-(id)comparator;
-(id)_selectorName;
-(id)description;
-(void)_setSelectorName:(id)arg1 ;
-(BOOL)_isEqualToSortDescriptor:(id)arg1 ;
-(void)_setAscending:(BOOL)arg1 ;
-(BOOL)ascending;
-(id)initWithKey:(id)arg1 ascending:(BOOL)arg2 ;
-(void)_disallowEvaluation;
-(long long)compareObject:(id)arg1 toObject:(id)arg2 ;
-(NSString *)key;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithKey:(id)arg1 ascending:(BOOL)arg2 comparator:(/*^block*/id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

