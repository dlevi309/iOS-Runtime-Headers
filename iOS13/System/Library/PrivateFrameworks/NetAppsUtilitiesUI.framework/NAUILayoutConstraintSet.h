/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI
*/


@class UIView, NSArray;

@interface NAUILayoutConstraintSet : NSObject {

	UIView* _owningView;
	/*^block*/id _builder;
	NSArray* _constraints;

}

@property (nonatomic,copy) NSArray * constraints;                        //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,__weak,readonly) UIView * owningView;               //@synthesize owningView=_owningView - In the implementation block
@property (nonatomic,copy,readonly) id builder;                          //@synthesize builder=_builder - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active; 
-(void)invalidate;
-(NSArray *)constraints;
-(BOOL)isActive;
-(id)builder;
-(UIView *)owningView;
-(void)activateIfNeeded;
-(void)setConstraints:(NSArray *)arg1 ;
-(id)initWithOwningView:(id)arg1 constraintBuilder:(/*^block*/id)arg2 ;
-(void)updateConstraintConstants;
@end

