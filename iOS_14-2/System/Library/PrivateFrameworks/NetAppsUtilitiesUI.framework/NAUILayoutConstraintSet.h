/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)constraints;
-(void)setConstraints:(NSArray *)arg1 ;
-(BOOL)isActive;
-(UIView *)owningView;
-(void)invalidate;
-(id)builder;
-(void)activateIfNeeded;
-(id)initWithOwningView:(id)arg1 constraintBuilder:(/*^block*/id)arg2 ;
-(void)updateConstraintConstants;
@end

