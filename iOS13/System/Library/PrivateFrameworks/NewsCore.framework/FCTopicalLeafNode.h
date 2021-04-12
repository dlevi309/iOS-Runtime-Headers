/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class FCTopicalNode;

@interface FCTopicalLeafNode : NSObject {

	FCTopicalNode* _node;
	double _score;

}

@property (nonatomic,retain) FCTopicalNode * node;              //@synthesize node=_node - In the implementation block
@property (assign,nonatomic) double score;                      //@synthesize score=_score - In the implementation block
-(double)score;
-(FCTopicalNode *)node;
-(void)setScore:(double)arg1 ;
-(void)setNode:(FCTopicalNode *)arg1 ;
-(id)initWithNode:(id)arg1 score:(double)arg2 ;
@end

