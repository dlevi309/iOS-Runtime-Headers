/*
* Generated on Monday, March 1, 2021 at 2:30:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class DOMNode;

@interface UIWebOverflowScrollInfo : NSObject {

	BOOL _isUserScroll;
	DOMNode* _node;
	CGPoint _offset;

}

@property (nonatomic,retain) DOMNode * node;                 //@synthesize node=_node - In the implementation block
@property (assign,nonatomic) CGPoint offset;                 //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) BOOL isUserScroll;              //@synthesize isUserScroll=_isUserScroll - In the implementation block
-(void)dealloc;
-(DOMNode *)node;
-(void)setOffset:(CGPoint)arg1 ;
-(CGPoint)offset;
-(void)setNode:(DOMNode *)arg1 ;
-(id)initWithNode:(id)arg1 offset:(CGPoint)arg2 isUserScroll:(BOOL)arg3 ;
-(BOOL)coalesceScrollForNode:(id)arg1 offset:(CGPoint)arg2 isUserScroll:(BOOL)arg3 ;
-(BOOL)isUserScroll;
-(void)setIsUserScroll:(BOOL)arg1 ;
@end

