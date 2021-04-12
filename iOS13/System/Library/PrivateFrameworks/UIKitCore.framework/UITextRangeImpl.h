/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UITextRange.h>

@class DOMRange;

@interface UITextRangeImpl : UITextRange {

	DOMRange* _domRange;
	long long _affinityIfCollapsed;

}

@property (nonatomic,retain) DOMRange * domRange;              //@synthesize domRange=_domRange - In the implementation block
@property (assign,nonatomic) long long affinity;               //@synthesize affinityIfCollapsed=_affinityIfCollapsed - In the implementation block
+(id)wrapDOMRange:(id)arg1 withAffinity:(long long)arg2 ;
+(id)wrapDOMRange:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(BOOL)isEmpty;
-(id)start;
-(id)end;
-(long long)affinity;
-(void)setDomRange:(DOMRange *)arg1 ;
-(void)setAffinity:(long long)arg1 ;
-(DOMRange *)domRange;
-(void)adjustAffinityOfPosition:(id)arg1 isStart:(BOOL)arg2 ;
@end

