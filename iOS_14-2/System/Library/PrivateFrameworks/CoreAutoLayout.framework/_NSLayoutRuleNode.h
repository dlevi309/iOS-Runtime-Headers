/*
* Generated on Thursday, January 14, 2021 at 2:22:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
*/


@protocol NSLayoutRule, _NSLayoutRuleNodeParent;
@interface _NSLayoutRuleNode : NSObject {

	id<NSLayoutRule> _representedRule;
	id<_NSLayoutRuleNodeParent> _parentNode;

}

@property (copy) id<NSLayoutRule> representedRule;                      //@synthesize representedRule=_representedRule - In the implementation block
@property (assign) id<_NSLayoutRuleNodeParent> parentNode;              //@synthesize parentNode=_parentNode - In the implementation block
-(id)description;
-(void)setParentNode:(id<_NSLayoutRuleNodeParent>)arg1 ;
-(id<_NSLayoutRuleNodeParent>)parentNode;
-(id)initWithRule:(id)arg1 ;
-(id<NSLayoutRule>)representedRule;
-(void)setRepresentedRule:(id<NSLayoutRule>)arg1 ;
-(void)dealloc;
@end

