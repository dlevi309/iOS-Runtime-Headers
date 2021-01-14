/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CPCopying.h>

@class NSMutableArray, CPDocument, CPPage;

@interface CPObject : NSObject <NSCopying, CPCopying> {

	CPObject* parent;
	NSMutableArray* children;
	CPDocument* document;
	CPPage* page;
	long long zOrder;

}
-(void)remove:(id)arg1 ;
-(void)remove;
-(id)children;
-(void)performSelector:(SEL)arg1 ;
-(void)setPage:(id)arg1 ;
-(void)addChildren:(id)arg1 ;
-(id)page;
-(id)parent;
-(long long)zOrder;
-(unsigned long long)indexOf:(id)arg1 ;
-(id)init;
-(id)childAtIndex:(unsigned)arg1 ;
-(void)setDocument:(id)arg1 ;
-(id)nextSibling;
-(id)previousSibling;
-(unsigned)count;
-(void)setParent:(id)arg1 ;
-(void)removeObjectAtIndex:(unsigned)arg1 ;
-(id)lastChild;
-(id)firstChild;
-(id)document;
-(int)depth;
-(void)accept:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)removeAll;
-(void)add:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)childrenOfClass:(Class)arg1 ;
-(id)ancestorOfClass:(Class)arg1 ;
-(void)removeLastChild;
-(id)copyAndSplitChildrenAtIndex:(unsigned)arg1 ;
-(void)recomputeZOrder;
-(void)updateZOrder:(long long)arg1 ;
-(void)add:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)addChildrenOf:(id)arg1 ;
-(id)newTakeChildren;
-(id)newTakeChildrenAmong:(id)arg1 ;
-(void)disposeDescendants;
-(id)copyWithoutChildren;
-(void)commonMapFuncCall:(SEL)arg1 target:(id)arg2 childrenOfClass:(Class)arg3 ofCount:(int)arg4 ;
-(id)descendantsOfClass:(Class)arg1 deep:(BOOL)arg2 ;
-(void)descendantsOfClass:(Class)arg1 to:(id)arg2 ;
-(id)descendantsOfClass:(Class)arg1 omitTraversing:(Class)arg2 ;
-(id)firstDescendantOfClass:(Class)arg1 ;
-(id)lastDescendantOfClass:(Class)arg1 ;
-(unsigned)countOfFirstDescendantsOfClass:(Class)arg1 ;
-(void)setZOrder:(long long)arg1 ;
-(void)clearCachedInfo;
-(id)firstDescendantsOfClass:(Class)arg1 ;
-(id)initSuper;
-(unsigned)countOfClass:(Class)arg1 ;
-(id)lastSibling;
-(id)firstSibling;
-(void)removeFirstChild;
-(void)promoteChildren;
-(void)childrenOfClass:(Class)arg1 into:(id)arg2 ;
-(id)childrenNotOfClass:(Class)arg1 ;
-(void)map:(SEL)arg1 target:(id)arg2 childrenOfClass:(Class)arg3 last:(BOOL)arg4 ;
-(void)map:(SEL)arg1 target:(id)arg2 childrenOfClass:(Class)arg3 ;
-(void)mapSafely:(SEL)arg1 target:(id)arg2 childrenOfClass:(Class)arg3 ;
-(void)map:(SEL)arg1 target:(id)arg2 ;
-(void)map:(SEL)arg1 target:(id)arg2 last:(BOOL)arg3 ;
-(id)descendantsOfClass:(Class)arg1 ;
-(id)shallowDescendantsOfClass:(Class)arg1 ;
@end

