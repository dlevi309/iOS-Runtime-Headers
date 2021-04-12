/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
*/

#import <Symbolication/Symbolication-Structs.h>
#import <Symbolication/VMUCallTreeNode.h>

@protocol VMUStackLogReader;
@class VMUSampler, NSMutableSet, NSMapTable, NSString, NSArray;

@interface VMUCallTreeRoot : VMUCallTreeNode {

	CSTypeRef _symbolicator;
	id<VMUStackLogReader> _stackLogReader;
	VMUSampler* _sampler;
	unsigned long long _options;
	NSMutableSet* _uniqueNodeNames;
	NSMapTable* _addressToSymbolNameMap;
	NSMapTable* _addressToLeafSymbolNameMap;
	NSMapTable* _threadPortToNameMap;
	NSString* _binaryImagesDescription;
	NSArray* _binaryImages;

}

@property (nonatomic,copy) NSString * binaryImagesDescription;              //@synthesize binaryImagesDescription=_binaryImagesDescription - In the implementation block
-(void)dealloc;
-(NSString *)binaryImagesDescription;
-(void)setBinaryImagesDescription:(NSString *)arg1 ;
-(void)setStackLogReader:(id)arg1 ;
-(id)initWithSymbolicator:(CSTypeRef)arg1 sampler:(id)arg2 options:(unsigned long long)arg3 ;
-(id)addChildWithName:(id)arg1 address:(unsigned long long)arg2 count:(unsigned)arg3 numBytes:(unsigned long long)arg4 toNode:(id)arg5 ;
-(id)addUniqueChildWithName:(id)arg1 address:(unsigned long long)arg2 count:(unsigned)arg3 numBytes:(unsigned long long)arg4 toNode:(id)arg5 isLeafNode:(BOOL)arg6 ;
-(void)addChildCountsIntoNode;
-(id)addBacktrace:(id)arg1 ;
-(id)chargeSystemLibrariesToCallersAndKeepBoundaries:(BOOL)arg1 ;
-(id)addBacktrace:(id)arg1 count:(unsigned)arg2 numBytes:(unsigned long long)arg3 ;
-(void)allBacktracesHaveBeenAdded;
-(id)descriptionStringForAddress:(unsigned long long)arg1 atTime:(unsigned long long)arg2 leafFrame:(BOOL)arg3 startOfRecursion:(BOOL)arg4 ;
-(id)addUniqueChildWithName:(id)arg1 address:(unsigned long long)arg2 count:(unsigned)arg3 numBytes:(unsigned long long)arg4 toNode:(id)arg5 ;
-(id)initWithCallGraphFile:(id)arg1 fileHeader:(id*)arg2 topFunctionsList:(id*)arg3 binaryImagesList:(id*)arg4 ;
@end

