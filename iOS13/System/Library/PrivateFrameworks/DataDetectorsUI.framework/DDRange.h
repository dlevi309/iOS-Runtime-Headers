/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
*/


@class DOMNode;

@interface DDRange : NSObject {

	DOMNode* _node;
	long long _startOffset;
	long long _endOffset;

}

@property (nonatomic,retain) DOMNode * node;                     //@synthesize node=_node - In the implementation block
@property (assign,nonatomic) long long startOffset;              //@synthesize startOffset=_startOffset - In the implementation block
@property (assign,nonatomic) long long endOffset;                //@synthesize endOffset=_endOffset - In the implementation block
+(id)rangeWithDOMRange:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(DOMNode *)node;
-(void)setNode:(DOMNode *)arg1 ;
-(long long)startOffset;
-(long long)endOffset;
-(id)initWithDOMRange:(id)arg1 ;
-(void)setStartOffset:(long long)arg1 ;
-(void)setEndOffset:(long long)arg1 ;
@end

