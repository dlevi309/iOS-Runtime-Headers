/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
*/


#import <Symbolication/Symbolication-Structs.h>
@class NSString;

@interface VMUCallTreeNode : NSObject {

	VMUCallTreeNode* _parent;
	NSString* _name;
	unsigned long long _address;
	unsigned long long _numBytes;
	unsigned _count;
	unsigned _numChildren;
	void* _children;

}
+(id)rootForSamples:(id)arg1 symbolicator:(CSTypeRef)arg2 sampler:(id)arg3 options:(unsigned long long)arg4 ;
+(id)nodeWithName:(id)arg1 address:(unsigned long long)arg2 count:(unsigned)arg3 numBytes:(unsigned long long)arg4 ;
+(id)rootForSamples:(id)arg1 symbolicator:(CSTypeRef)arg2 ;
+(id)makeFakeRootForNode:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)name;
-(unsigned)count;
-(void)addChild:(id)arg1 ;
-(id)parent;
-(long long)compare:(id)arg1 ;
-(unsigned long long)numBytes;
-(unsigned long long)address;
-(void)setChildren:(id)arg1 ;
-(id)childAtIndex:(unsigned)arg1 ;
-(id)sortedChildren;
-(unsigned)numChildren;
-(long long)comparePuttingRetainCycleNodesAtTop:(id)arg1 ;
-(unsigned)sumOfChildCounts;
-(void)printCallTreeToFile:(_sFILE*)arg1 options:(unsigned long long)arg2 ;
-(BOOL)isPseudo;
-(id)pseudoNodeTopOfStackChild;
-(id)sortedChildrenWithPseudoNode;
-(id)largestTopOfStackPath;
-(id)initWithName:(id)arg1 address:(unsigned long long)arg2 count:(unsigned)arg3 numBytes:(unsigned long long)arg4 ;
-(id)browserName;
-(void)getBrowserName:(id)arg1 ;
-(id)findOrAddChildWithName:(id)arg1 address:(unsigned long long)arg2 nodeSearchType:(int)arg3 isLeafNode:(BOOL)arg4 ;
-(long long)compareSizeAndCount:(id)arg1 ;
-(void)parseNameIntoSymbol:(id*)arg1 library:(id*)arg2 loadAddress:(unsigned long long*)arg3 offset:(unsigned long long*)arg4 address:(unsigned long long*)arg5 suffix:(id*)arg6 ;
-(id)pseudoName;
-(id)sortedChildrenWithPseudoNode:(id)arg1 withCompare:(SEL)arg2 ;
-(BOOL)symbolNameIsUnknown;
-(id)nameWithoutOffset;
-(long long)comparePuttingMainThreadFirst:(id)arg1 ;
-(BOOL)isMallocBlockContentNode;
-(void)_printCallTreeToFile:(_sFILE*)arg1 cumulativeOutput:(id)arg2 indentString:(id)arg3 branchPointCount:(unsigned)arg4 topFunctions:(id)arg5 options:(unsigned long long)arg6 ;
-(void)countFunctionOccurrencesInTree:(id)arg1 ;
-(id)fullOutputWithThreshold:(unsigned)arg1 showPseudoNodes:(BOOL)arg2 ;
-(BOOL)callTreeHasBranches;
-(id)stringFromCallTreeWithOptions:(unsigned long long)arg1 ;
-(id)stringFromCallTreeIndentIfNoBranches:(BOOL)arg1 showPseudoNodes:(BOOL)arg2 ;
-(void)printCallTreeToFile:(_sFILE*)arg1 ;
-(id)filterOutSymbols:(id)arg1 required:(id)arg2 ;
-(id)chargeLibrariesInSet:(id)arg1 toCaller:(id)arg2 parentLibrary:(id)arg3 ;
-(id)pruneCount:(unsigned)arg1 ;
-(id)pruneMallocSize:(unsigned long long)arg1 ;
-(id)allChildren;
-(id)nameWithStringsForSymbol:(id)arg1 library:(id)arg2 loadAddress:(id)arg3 offset:(id)arg4 address:(id)arg5 suffix:(id)arg6 ;
-(id)findOrAddChildWithName:(id)arg1 address:(unsigned long long)arg2 ;
-(id)fullOutputWithThreshold:(unsigned)arg1 ;
-(id)stringFromCallTreeIndentIfNoBranches:(BOOL)arg1 ;
-(void)printCallTree;
-(id)invertedNode;
-(id)filterOutSymbols:(id)arg1 ;
-(id)chargeLibrariesToCallers:(id)arg1 keepBoundaries:(BOOL)arg2 ;
-(id)chargeSystemLibrariesToCallersAndKeepBoundaries:(BOOL)arg1 ;
@end

