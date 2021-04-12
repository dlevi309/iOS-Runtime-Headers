/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)score;
-(NSString *)symbol;
-(unsigned long long)endNode;
-(unsigned long long)edgeIndex;
-(id)initWithSymbol:(id)arg1 index:(unsigned long long)arg2 score:(double)arg3 startNode:(unsigned long long)arg4 endNode:(unsigned long long)arg5 ;
-(unsigned long long)startNode;
@end

