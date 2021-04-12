/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@protocol SXComponentSXInsertableComponent, SXComponentLayout;
@interface SXComponentInsert : NSObject {

	id<SXComponent><SXInsertableComponent> _component;
	id<SXComponentLayout> _componentLayout;

}

@property (nonatomic,readonly) id<SXComponent><SXInsertableComponent> component;              //@synthesize component=_component - In the implementation block
@property (nonatomic,readonly) id<SXComponentLayout> componentLayout;                         //@synthesize componentLayout=_componentLayout - In the implementation block
-(id)description;
-(id<SXComponent><SXInsertableComponent>)component;
-(id<SXComponentLayout>)componentLayout;
-(id)initWithComponent:(id)arg1 componentLayout:(id)arg2 ;
@end

