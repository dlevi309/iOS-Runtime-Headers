/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)performSelector:(SEL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)count;
-(id)parent;
-(void)removeObjectAtIndex:(unsigned)arg1 ;
-(void)setParent:(id)arg1 ;
-(void)remove:(id)arg1 ;
-(int)depth;
-(unsigned long long)indexOf:(id)arg1 ;
-(void)remove;
-(id)children;
-(id)firstChild;
-(id)nextSibling;
-(void)removeAll;
-(id)page;
-(void)setPage:(id)arg1 ;
-(void)setDocument:(id)arg1 ;
-(id)lastChild;
-(id)document;
-(id)previousSibling;
-(void)addChildren:(id)arg1 ;
-(id)childAtIndex:(unsigned)arg1 ;
-(long long)zOrder;
-(id)copyAndSplitChildrenAtIndex:(unsigned)arg1 ;
-(void)recomputeZOrder;
-(void)add:(id)arg1 ;
-(void)updateZOrder:(long long)arg1 ;
-(void)add:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)addChildrenOf:(id)arg1 ;
-(id)newTakeChildren;
-(id)newTakeChildrenAmong:(id)arg1 ;
-(void)accept:(id)arg1 ;
-(void)disposeDescendants;
-(id)copyWithoutChildren;
-(id)ancestorOfClass:(Class)arg1 ;
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
-(void)removeLastChild;
-(void)promoteChildren;
-(void)childrenOfClass:(Class)arg1 into:(id)arg2 ;
-(id)childrenOfClass:(Class)arg1 ;
-(id)childrenNotOfClass:(Class)arg1 ;
-(void)map:(SEL)arg1 target:(id)arg2 childrenOfClass:(Class)arg3 last:(BOOL)arg4 ;
-(void)map:(SEL)arg1 target:(id)arg2 childrenOfClass:(Class)arg3 ;
-(void)mapSafely:(SEL)arg1 target:(id)arg2 childrenOfClass:(Class)arg3 ;
-(void)map:(SEL)arg1 target:(id)arg2 ;
-(void)map:(SEL)arg1 target:(id)arg2 last:(BOOL)arg3 ;
-(id)descendantsOfClass:(Class)arg1 ;
-(id)shallowDescendantsOfClass:(Class)arg1 ;
@end

