/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@protocol NSLayoutRule, _NSLayoutRuleNodeParent;
@interface _NSLayoutRuleNode : NSObject {

	id<NSLayoutRule> _representedRule;
	id<_NSLayoutRuleNodeParent> _parentNode;

}

@property (copy) id<NSLayoutRule> representedRule;                      //@synthesize representedRule=_representedRule - In the implementation block
@property (assign) id<_NSLayoutRuleNodeParent> parentNode;              //@synthesize parentNode=_parentNode - In the implementation block
-(void)dealloc;
-(id)description;
-(id)initWithRule:(id)arg1 ;
-(id<NSLayoutRule>)representedRule;
-(void)setRepresentedRule:(id<NSLayoutRule>)arg1 ;
-(id<_NSLayoutRuleNodeParent>)parentNode;
-(void)setParentNode:(id<_NSLayoutRuleNodeParent>)arg1 ;
@end

