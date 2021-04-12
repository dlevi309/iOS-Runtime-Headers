/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _KDNode : NSObject <NSSecureCoding> {

	BOOL _isLeaf;
	float _splitValue;
	unsigned long long _splitDimension;
	unsigned long long _splitIndex;
	unsigned long long _startingIndex;
	unsigned long long _count;
	_KDNode* _leftChild;
	_KDNode* _rightChild;
	KDBoundingBox* _boundingBox;

}

@property (assign,nonatomic) unsigned long long splitDimension;              //@synthesize splitDimension=_splitDimension - In the implementation block
@property (assign,nonatomic) unsigned long long splitIndex;                  //@synthesize splitIndex=_splitIndex - In the implementation block
@property (assign,nonatomic) float splitValue;                               //@synthesize splitValue=_splitValue - In the implementation block
@property (assign,nonatomic) unsigned long long startingIndex;               //@synthesize startingIndex=_startingIndex - In the implementation block
@property (assign,nonatomic) unsigned long long count;                       //@synthesize count=_count - In the implementation block
@property (nonatomic,retain) _KDNode * leftChild;                            //@synthesize leftChild=_leftChild - In the implementation block
@property (nonatomic,retain) _KDNode * rightChild;                           //@synthesize rightChild=_rightChild - In the implementation block
@property (assign,nonatomic) KDBoundingBox boundingBox;                      //@synthesize boundingBox=_boundingBox - In the implementation block
@property (assign,nonatomic) BOOL isLeaf;                                    //@synthesize isLeaf=_isLeaf - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setCount:(unsigned long long)arg1 ;
-(KDBoundingBox)boundingBox;
-(void)findMin:(float*)arg1 andMax:(float*)arg2 alongDimension:(unsigned long long)arg3 data:(const float*)arg4 indices:(const unsigned long long*)arg5 numDimensions:(unsigned long long)arg6 ;
-(void)partitionDataPoints:(const float*)arg1 indices:(unsigned long long*)arg2 numDimensions:(unsigned long long)arg3 ;
-(void)assignSplitsForData:(const float*)arg1 indices:(unsigned long long*)arg2 numDimensions:(unsigned long long)arg3 ;
-(void)print;
-(unsigned long long)splitDimension;
-(void)setSplitDimension:(unsigned long long)arg1 ;
-(unsigned long long)splitIndex;
-(void)setSplitIndex:(unsigned long long)arg1 ;
-(float)splitValue;
-(void)setSplitValue:(float)arg1 ;
-(unsigned long long)startingIndex;
-(void)setStartingIndex:(unsigned long long)arg1 ;
-(_KDNode *)leftChild;
-(void)setLeftChild:(_KDNode *)arg1 ;
-(_KDNode *)rightChild;
-(void)setRightChild:(_KDNode *)arg1 ;
-(void)setBoundingBox:(KDBoundingBox)arg1 ;
-(BOOL)isLeaf;
-(void)setIsLeaf:(BOOL)arg1 ;
@end

