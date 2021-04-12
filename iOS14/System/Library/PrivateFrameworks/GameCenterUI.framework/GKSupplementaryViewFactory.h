/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/


@interface GKSupplementaryViewFactory : NSObject {

	id _target;
	Class _reusableViewClass;
	SEL _configurator;
	SEL _selector;

}

@property (assign,nonatomic,__weak) id target;                     //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL selector;                         //@synthesize selector=_selector - In the implementation block
@property (nonatomic,retain) Class reusableViewClass;              //@synthesize reusableViewClass=_reusableViewClass - In the implementation block
@property (nonatomic,readonly) SEL configurator;                   //@synthesize configurator=_configurator - In the implementation block
+(id)factoryForClass:(Class)arg1 target:(id)arg2 configurator:(SEL)arg3 userData:(id)arg4 ;
+(id)factoryForClass:(Class)arg1 target:(id)arg2 configurator:(SEL)arg3 ;
-(void)setTarget:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(SEL)selector;
-(SEL)configurator;
-(void)setSelector:(SEL)arg1 ;
-(Class)reusableViewClass;
-(id)target;
-(void)setReusableViewClass:(Class)arg1 ;
-(id)initWithClass:(Class)arg1 target:(id)arg2 configurator:(SEL)arg3 userData:(id)arg4 ;
@end

