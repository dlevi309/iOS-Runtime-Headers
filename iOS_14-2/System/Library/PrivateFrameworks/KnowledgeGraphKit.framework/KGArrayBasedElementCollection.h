/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/

#import <KnowledgeGraphKit/KGElementCollection.h>

@class NSArray;

@interface KGArrayBasedElementCollection : KGElementCollection {

	NSArray* _elements;

}

@property (readonly) NSArray * elements;              //@synthesize elements=_elements - In the implementation block
-(NSArray *)elements;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)count;
-(id)lastObject;
-(id)firstObject;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)allObjects;
-(id)initWithElements:(id)arg1 ;
@end

