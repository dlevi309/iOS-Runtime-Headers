/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class _UIMenuBuilder, NSArray, UIMenu;

@interface UIMenuSystem : NSObject {

	_UIMenuBuilder* _defaultBuilder;
	_UIMenuBuilder* _automaticallyRebuildingBuilder;
	BOOL _shouldAutomaticallyRebuild;

}

@property (nonatomic,readonly) BOOL shouldAutomaticallyRebuild;              //@synthesize shouldAutomaticallyRebuild=_shouldAutomaticallyRebuild - In the implementation block
@property (nonatomic,readonly) NSArray * _keyCommands; 
@property (nonatomic,readonly) UIMenu * _rootMenu; 
+(id)mainSystem;
+(id)contextSystem;
-(NSArray *)_keyCommands;
-(id)initWithDefaultBuilder:(id)arg1 shouldAutomaticallyRebuild:(BOOL)arg2 ;
-(void)_automaticallyRebuildIfNeeded;
-(id)_newBuilderFromResponderChain:(id)arg1 ;
-(UIMenu *)_rootMenu;
-(void)setNeedsRebuild;
-(void)setNeedsRevalidate;
-(BOOL)shouldAutomaticallyRebuild;
@end

