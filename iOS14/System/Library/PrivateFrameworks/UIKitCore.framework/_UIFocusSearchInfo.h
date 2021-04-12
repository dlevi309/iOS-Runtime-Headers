/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@interface _UIFocusSearchInfo : NSObject {

	BOOL _treatFocusableItemAsLeaf;
	BOOL _forceFocusToLeaveContainer;
	/*^block*/id _evaluator;

}

@property (nonatomic,copy) id evaluator;                                   //@synthesize evaluator=_evaluator - In the implementation block
@property (assign,nonatomic) BOOL treatFocusableItemAsLeaf;                //@synthesize treatFocusableItemAsLeaf=_treatFocusableItemAsLeaf - In the implementation block
@property (assign,nonatomic) BOOL forceFocusToLeaveContainer;              //@synthesize forceFocusToLeaveContainer=_forceFocusToLeaveContainer - In the implementation block
+(id)defaultInfo;
-(id)evaluator;
-(BOOL)treatFocusableItemAsLeaf;
-(BOOL)forceFocusToLeaveContainer;
-(BOOL)shouldIncludeFocusItem:(id)arg1 ;
-(void)setForceFocusToLeaveContainer:(BOOL)arg1 ;
-(void)setTreatFocusableItemAsLeaf:(BOOL)arg1 ;
-(void)setEvaluator:(id)arg1 ;
-(id)initWithFocusEvaluator:(/*^block*/id)arg1 ;
@end

