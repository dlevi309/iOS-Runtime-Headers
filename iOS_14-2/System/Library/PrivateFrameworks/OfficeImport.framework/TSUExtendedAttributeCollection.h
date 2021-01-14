/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSMutableDictionary;

@interface TSUExtendedAttributeCollection : NSObject {

	NSMutableDictionary* _attributes;

}
+(BOOL)removeExtraExtendedAttributesAtPath:(id)arg1 forIntent:(unsigned)arg2 options:(int)arg3 error:(id*)arg4 ;
-(id)init;
-(id)initWithAttributes:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)allAttributes;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithPath:(id)arg1 options:(int)arg2 error:(id*)arg3 ;
-(id)initWithPath:(id)arg1 forRemoval:(BOOL)arg2 options:(int)arg3 error:(id*)arg4 ;
-(BOOL)setAttributeCollectionToPath:(id)arg1 intent:(unsigned)arg2 options:(int)arg3 forRemoval:(BOOL)arg4 error:(id*)arg5 ;
-(BOOL)setAttributeCollectionToPath:(id)arg1 intent:(unsigned)arg2 options:(int)arg3 error:(id*)arg4 ;
-(id)extendedAttributeForName:(id)arg1 ;
-(void)setExtendedAttributeValue:(id)arg1 forName:(id)arg2 ;
@end

