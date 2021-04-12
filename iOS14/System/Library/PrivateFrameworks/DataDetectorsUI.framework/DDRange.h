/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(DOMNode *)node;
-(long long)endOffset;
-(void)setNode:(DOMNode *)arg1 ;
-(void)setStartOffset:(long long)arg1 ;
-(id)description;
-(void)setEndOffset:(long long)arg1 ;
-(id)initWithDOMRange:(id)arg1 ;
-(long long)startOffset;
-(void)dealloc;
@end

