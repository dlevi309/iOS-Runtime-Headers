/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXGDiagnosticsSpriteProbe : NSObject {

	BOOL _active;
	/*^block*/id _predicate;
	/*^block*/id _tagDescriptor;
	/*^block*/id _eventHandler;

}

@property (assign,getter=isActive,nonatomic) BOOL active;              //@synthesize active=_active - In the implementation block
@property (nonatomic,copy) id predicate;                               //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy) id tagDescriptor;                           //@synthesize tagDescriptor=_tagDescriptor - In the implementation block
@property (nonatomic,copy) id eventHandler;                            //@synthesize eventHandler=_eventHandler - In the implementation block
+(void)_recordEventIfNeededWithType:(long long)arg1 layout:(id)arg2 oldState:(const SCD_Struct_PX147*)arg3 newState:(const SCD_Struct_PX147*)arg4 userInfo:(id)arg5 ;
+(id)activeSpriteProbes;
+(void)layout:(id)arg1 willRemoveSprites:(SCD_Struct_PX84*)arg2 ;
+(void)layout:(id)arg1 didInsertSprites:(SCD_Struct_PX84*)arg2 ;
+(void)layout:(id)arg1 willChangeSprites:(SCD_Struct_PX84*)arg2 ;
+(void)layout:(id)arg1 didChangeSprites:(SCD_Struct_PX84*)arg2 ;
+(void)willRequestTextureForSpriteWithGeometry:(const SCD_Struct_PX106*)arg1 style:(const SCD_Struct_PX83*)arg2 info:(const SCD_Struct_PX15*)arg3 inLayout:(id)arg4 textureInfo:(id)arg5 ;
+(void)willAdjustSprites:(SCD_Struct_PX84*)arg1 forAnimation:(id)arg2 appearing:(BOOL)arg3 ;
+(void)didAdjustSprites:(SCD_Struct_PX84*)arg1 forAnimation:(id)arg2 appearing:(BOOL)arg3 ;
+(void)shouldUseDoubleSidedAnimationForSprites:(SCD_Struct_PX84*)arg1 indexes:(id)arg2 animation:(id)arg3 ;
+(id)spriteDataStore;
-(id)eventHandler;
-(void)setEventHandler:(id)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(id)predicate;
-(id)init;
-(void)setPredicate:(id)arg1 ;
-(BOOL)isActive;
-(id)tagDescriptor;
-(void)setTagDescriptor:(id)arg1 ;
-(void)_recordEventWithType:(long long)arg1 oldState:(const SCD_Struct_PX147*)arg2 newState:(const SCD_Struct_PX147*)arg3 userInfo:(id)arg4 ;
-(id)descriptionForSpriteState:(const SCD_Struct_PX147*)arg1 ;
-(void)_recordEventIfNeededWithType:(long long)arg1 layout:(id)arg2 oldState:(const SCD_Struct_PX147*)arg3 newState:(const SCD_Struct_PX147*)arg4 userInfo:(id)arg5 ;
@end
