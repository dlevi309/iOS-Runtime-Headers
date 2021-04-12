/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UIMenuSystem;


@protocol UIMenuBuilder
@property (nonatomic,readonly) UIMenuSystem * system; 
@required
-(UIMenuSystem *)system;
-(id)menuForIdentifier:(id)arg1;
-(void)replaceMenuForIdentifier:(id)arg1 withMenu:(id)arg2;
-(id)actionForIdentifier:(id)arg1;
-(id)commandForAction:(SEL)arg1 propertyList:(id)arg2;
-(void)replaceChildrenOfMenuForIdentifier:(id)arg1 fromChildrenBlock:(/*^block*/id)arg2;
-(void)insertSiblingMenu:(id)arg1 beforeMenuForIdentifier:(id)arg2;
-(void)insertSiblingMenu:(id)arg1 afterMenuForIdentifier:(id)arg2;
-(void)insertChildMenu:(id)arg1 atStartOfMenuForIdentifier:(id)arg2;
-(void)insertChildMenu:(id)arg1 atEndOfMenuForIdentifier:(id)arg2;
-(void)removeMenuForIdentifier:(id)arg1;

@end

