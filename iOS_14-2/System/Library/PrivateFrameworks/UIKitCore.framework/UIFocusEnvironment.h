/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class NSArray, UIView, NSString;


@protocol UIFocusEnvironment <NSObject>
@property (nonatomic,copy,readonly) NSArray * preferredFocusEnvironments; 
@property (nonatomic,__weak,readonly) id<UIFocusEnvironment> parentFocusEnvironment; 
@property (nonatomic,readonly) id<UIFocusItemContainer> focusItemContainer; 
@property (nonatomic,__weak,readonly) UIView * preferredFocusedView; 
@property (nonatomic,copy,readonly) NSString * focusGroupIdentifier; 
@optional
-(UIView *)preferredFocusedView;
-(id)soundIdentifierForFocusUpdateInContext:(id)arg1;
-(NSString *)focusGroupIdentifier;

@required
-(BOOL)shouldUpdateFocusInContext:(id)arg1;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
-(NSArray *)preferredFocusEnvironments;
-(void)setNeedsFocusUpdate;
-(id<UIFocusItemContainer>)focusItemContainer;
-(id<UIFocusEnvironment>)parentFocusEnvironment;
-(void)updateFocusIfNeeded;

@end

