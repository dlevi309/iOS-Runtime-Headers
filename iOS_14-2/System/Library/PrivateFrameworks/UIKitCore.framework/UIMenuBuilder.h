/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UIMenuSystem;


@protocol UIMenuBuilder
@property (nonatomic,readonly) UIMenuSystem * system; 
@required
-(void)replaceMenuForIdentifier:(id)arg1 withMenu:(id)arg2;
-(void)insertChildMenu:(id)arg1 atStartOfMenuForIdentifier:(id)arg2;
-(id)menuForIdentifier:(id)arg1;
-(id)actionForIdentifier:(id)arg1;
-(UIMenuSystem *)system;
-(id)commandForAction:(SEL)arg1 propertyList:(id)arg2;
-(void)replaceChildrenOfMenuForIdentifier:(id)arg1 fromChildrenBlock:(/*^block*/id)arg2;
-(void)insertSiblingMenu:(id)arg1 afterMenuForIdentifier:(id)arg2;
-(void)insertSiblingMenu:(id)arg1 beforeMenuForIdentifier:(id)arg2;
-(void)removeMenuForIdentifier:(id)arg1;
-(void)insertChildMenu:(id)arg1 atEndOfMenuForIdentifier:(id)arg2;

@end

