/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@interface _PXContextMenuConfigurationState : NSObject {

	BOOL _isContextMenuInteractionActive;
	BOOL _actionsAllowedForContextMenuInteraction;
	BOOL _isPreviewCommitting;
	unsigned long long _activationMode;

}

@property (assign,nonatomic) BOOL isContextMenuInteractionActive;                       //@synthesize isContextMenuInteractionActive=_isContextMenuInteractionActive - In the implementation block
@property (assign,nonatomic) BOOL actionsAllowedForContextMenuInteraction;              //@synthesize actionsAllowedForContextMenuInteraction=_actionsAllowedForContextMenuInteraction - In the implementation block
@property (assign,nonatomic) BOOL isPreviewCommitting;                                  //@synthesize isPreviewCommitting=_isPreviewCommitting - In the implementation block
@property (assign,nonatomic) unsigned long long activationMode;                         //@synthesize activationMode=_activationMode - In the implementation block
-(unsigned long long)activationMode;
-(BOOL)isContextMenuInteractionActive;
-(BOOL)actionsAllowedForContextMenuInteraction;
-(void)setActionsAllowedForContextMenuInteraction:(BOOL)arg1 ;
-(BOOL)isPreviewCommitting;
-(void)setIsPreviewCommitting:(BOOL)arg1 ;
-(void)setActivationMode:(unsigned long long)arg1 ;
-(void)setIsContextMenuInteractionActive:(BOOL)arg1 ;
@end

