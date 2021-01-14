/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class FCTopicalNode;

@interface FCTopicalLeafNode : NSObject {

	FCTopicalNode* _node;
	double _score;

}

@property (nonatomic,retain) FCTopicalNode * node;              //@synthesize node=_node - In the implementation block
@property (assign,nonatomic) double score;                      //@synthesize score=_score - In the implementation block
-(id)initWithNode:(id)arg1 score:(double)arg2 ;
-(FCTopicalNode *)node;
-(double)score;
-(void)setScore:(double)arg1 ;
-(void)setNode:(FCTopicalNode *)arg1 ;
@end

