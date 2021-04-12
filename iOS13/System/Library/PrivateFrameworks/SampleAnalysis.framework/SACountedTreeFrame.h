/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

#import <SampleAnalysis/SACountedTreeNode.h>
#import <libobjc.A.dylib/SAJSONSerialization.h>

@class SAFrame, NSMutableArray, NSString;

@interface SACountedTreeFrame : SACountedTreeNode <SAJSONSerialization> {

	BOOL _isLeafFrame;
	SAFrame* _frame;
	NSMutableArray* _children;

}

@property (readonly) SAFrame * frame;                               //@synthesize frame=_frame - In the implementation block
@property (readonly) BOOL isLeafFrame;                              //@synthesize isLeafFrame=_isLeafFrame - In the implementation block
@property (readonly) NSMutableArray * children;                     //@synthesize children=_children - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)treeFrameWithFrame:(id)arg1 startSampleIndex:(unsigned long long)arg2 sampleCount:(unsigned long long)arg3 isLeafFrame:(BOOL)arg4 ;
+(void)enumerateTree:(id)arg1 block:(/*^block*/id)arg2 ;
-(SAFrame *)frame;
-(NSMutableArray *)children;
-(void)writeJSONDictionaryEntriesToStream:(id)arg1 ;
-(id)initWithFrame:(id)arg1 startSampleIndex:(unsigned long long)arg2 sampleCount:(unsigned long long)arg3 isLeafFrame:(BOOL)arg4 ;
-(BOOL)isLeafFrame;
@end

