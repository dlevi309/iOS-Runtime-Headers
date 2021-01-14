/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface INObjectCollection : NSObject <NSCopying, NSSecureCoding> {

	BOOL _usesIndexedCollation;
	NSArray* _sections;

}

@property (nonatomic,copy,readonly) NSArray * sections;              //@synthesize sections=_sections - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allItems; 
@property (assign,nonatomic) BOOL usesIndexedCollation;              //@synthesize usesIndexedCollation=_usesIndexedCollation - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithItems:(id)arg1 ;
-(NSArray *)allItems;
-(NSArray *)sections;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_typedObjectCollectionWithCodableAttribute:(id)arg1 ;
-(id)_untypedObjectCollectionWithItemClass:(Class)arg1 codableAttribute:(id)arg2 error:(id*)arg3 ;
-(BOOL)usesIndexedCollation;
-(void)setUsesIndexedCollation:(BOOL)arg1 ;
-(id)initWithSections:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

