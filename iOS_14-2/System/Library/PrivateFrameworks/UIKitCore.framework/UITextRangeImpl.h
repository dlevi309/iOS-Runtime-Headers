/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)end;
-(void)adjustAffinityOfPosition:(id)arg1 isStart:(BOOL)arg2 ;
-(id)start;
-(void)setAffinity:(long long)arg1 ;
-(long long)affinity;
-(id)description;
-(DOMRange *)domRange;
-(BOOL)isEmpty;
-(void)setDomRange:(DOMRange *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

