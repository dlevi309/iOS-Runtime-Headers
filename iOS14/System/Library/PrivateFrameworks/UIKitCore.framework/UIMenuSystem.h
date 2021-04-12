/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class _UIMenuBuilder, NSArray, UIMenu;

@interface UIMenuSystem : NSObject {

	_UIMenuBuilder* _defaultBuilder;
	_UIMenuBuilder* _automaticallyRebuildingBuilder;
	/*^block*/id _adaptBuilderToResponderPre;
	/*^block*/id _adaptBuilderToResponderPost;
	BOOL _shouldAutomaticallyRebuild;

}

@property (nonatomic,readonly) BOOL shouldAutomaticallyRebuild;              //@synthesize shouldAutomaticallyRebuild=_shouldAutomaticallyRebuild - In the implementation block
@property (nonatomic,readonly) NSArray * _keyCommands; 
@property (nonatomic,readonly) UIMenu * _rootMenu; 
+(id)mainSystem;
+(id)contextSystem;
-(void)_automaticallyRebuildIfNeeded;
-(void)setNeedsRebuild;
-(id)_newBuilderFromResponderChain:(id)arg1 atLocation:(CGPoint)arg2 inCoordinateSpace:(id)arg3 ;
-(id)initWithDefaultBuilder:(id)arg1 shouldAutomaticallyRebuild:(BOOL)arg2 adaptBuilderToResponderPre:(/*^block*/id)arg3 adaptBuilderToResponderPost:(/*^block*/id)arg4 ;
-(NSArray *)_keyCommands;
-(UIMenu *)_rootMenu;
-(void)setNeedsRevalidate;
-(BOOL)shouldAutomaticallyRebuild;
@end

