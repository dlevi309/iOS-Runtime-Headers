/*
* Generated on Monday, March 1, 2021 at 2:35:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


@class NSString;

@interface CRLatticeEdge : NSObject {

	NSString* _symbol;
	unsigned long long _edgeIndex;
	double _score;
	unsigned long long _startNode;
	unsigned long long _endNode;

}

@property (nonatomic,readonly) NSString * symbol;               //@synthesize symbol=_symbol - In the implementation block
@property (readonly) unsigned long long edgeIndex;              //@synthesize edgeIndex=_edgeIndex - In the implementation block
@property (readonly) double score;                              //@synthesize score=_score - In the implementation block
@property (readonly) unsigned long long startNode;              //@synthesize startNode=_startNode - In the implementation block
@property (readonly) unsigned long long endNode;                //@synthesize endNode=_endNode - In the implementation block
-(NSString *)symbol;
-(double)score;
-(unsigned long long)startNode;
-(unsigned long long)endNode;
-(unsigned long long)edgeIndex;
-(id)initWithSymbol:(id)arg1 index:(unsigned long long)arg2 score:(double)arg3 startNode:(unsigned long long)arg4 endNode:(unsigned long long)arg5 ;
@end

