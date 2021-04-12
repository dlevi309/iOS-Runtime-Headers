/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)sortDescriptorWithKey:(id)arg1 ascending:(BOOL)arg2 selector:(SEL)arg3 ;
+(id)sortDescriptorWithKey:(id)arg1 ascending:(BOOL)arg2 ;
+(id)sortDescriptorWithKey:(id)arg1 ascending:(BOOL)arg2 comparator:(/*^block*/id)arg3 ;
+(id)sortDescriptorWithKey:(id)arg1 ;
+(id)_defaultSelectorName;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SEL)selector;
-(NSString *)key;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(long long)compareObject:(id)arg1 toObject:(id)arg2 ;
-(id)initWithKey:(id)arg1 ascending:(BOOL)arg2 selector:(SEL)arg3 ;
-(id)initWithKey:(id)arg1 ascending:(BOOL)arg2 comparator:(/*^block*/id)arg3 ;
-(id)initWithKey:(id)arg1 ascending:(BOOL)arg2 ;
-(BOOL)ascending;
-(id)_selectorName;
-(void)_setSelectorName:(id)arg1 ;
-(void)_disallowEvaluation;
-(id)comparator;
-(BOOL)_isEqualToSortDescriptor:(id)arg1 ;
-(id)initWithKey:(id)arg1 ;
-(void)allowEvaluation;
-(void)_setKey:(id)arg1 ;
-(void)_setAscending:(BOOL)arg1 ;
-(id)reversedSortDescriptor;
@end

