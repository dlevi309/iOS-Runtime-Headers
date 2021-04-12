/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/


#import <KnowledgeGraphKit/KnowledgeGraphKit-Structs.h>
@class NSIndexSet, NSArray;

@interface KGElementIdentifierSet : NSObject {

	Bitmap* _bitmap;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,copy,readonly) NSIndexSet * indexSet; 
@property (nonatomic,copy,readonly) NSArray * indexArray; 
@property (nonatomic,readonly) unsigned long long firstElement; 
-(id)init;
-(id)mutableCopy;
-(unsigned long long)count;
-(id)initWithIndexSet:(id)arg1 ;
-(const Bitmap*)bitmap;
-(id)copy;
-(NSIndexSet *)indexSet;
-(unsigned long long)firstElement;
-(unsigned long long)hash;
-(BOOL)containsIdentifier:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithElementIdentifier:(unsigned long long)arg1 ;
-(NSArray *)indexArray;
-(id)initWithIndexArray:(id)arg1 ;
-(id)initWithBitmap:(const Bitmap*)arg1 ;
-(Bitmap*)mutableBitmap;
-(unsigned long long)elementAtOffset:(unsigned long long)arg1 ;
-(unsigned long long)randomElement;
-(id)extractRangeByIndex:(NSRange)arg1 ;
-(id)identifierSetByAddingIdentifier:(unsigned long long)arg1 ;
-(id)identifierSetByRemovingIdentifier:(unsigned long long)arg1 ;
-(id)identifierSetByFormingUnion:(id)arg1 ;
-(id)identifierSetByIntersectingIdentifierSet:(id)arg1 ;
-(id)identifierSetBySubtractingIdentifierSet:(id)arg1 ;
-(void)enumerateIdentifiersWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isEqualToElementIdentifierSet:(id)arg1 ;
@end

