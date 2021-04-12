/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)shouldIncludeFocusItem:(id)arg1 ;
-(void)setForceFocusToLeaveContainer:(BOOL)arg1 ;
-(void)setTreatFocusableItemAsLeaf:(BOOL)arg1 ;
-(id)initWithFocusEvaluator:(/*^block*/id)arg1 ;
-(BOOL)forceFocusToLeaveContainer;
-(void)setEvaluator:(id)arg1 ;
@end

