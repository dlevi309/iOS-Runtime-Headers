/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSMutableDictionary;

@interface TSUExtendedAttributeCollection : NSObject {

	NSMutableDictionary* _attributes;

}
+(BOOL)removeExtraExtendedAttributesAtPath:(id)arg1 forIntent:(unsigned)arg2 options:(int)arg3 error:(id*)arg4 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithAttributes:(id)arg1 ;
-(id)allAttributes;
-(id)initWithPath:(id)arg1 options:(int)arg2 error:(id*)arg3 ;
-(id)initWithPath:(id)arg1 forRemoval:(BOOL)arg2 options:(int)arg3 error:(id*)arg4 ;
-(BOOL)setAttributeCollectionToPath:(id)arg1 intent:(unsigned)arg2 options:(int)arg3 forRemoval:(BOOL)arg4 error:(id*)arg5 ;
-(BOOL)setAttributeCollectionToPath:(id)arg1 intent:(unsigned)arg2 options:(int)arg3 error:(id*)arg4 ;
-(id)extendedAttributeForName:(id)arg1 ;
-(void)setExtendedAttributeValue:(id)arg1 forName:(id)arg2 ;
@end

