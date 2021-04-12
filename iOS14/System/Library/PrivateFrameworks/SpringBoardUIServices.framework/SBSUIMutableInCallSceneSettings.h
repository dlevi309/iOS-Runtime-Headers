/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIMutableApplicationSceneSettings.h>

@interface SBSUIMutableInCallSceneSettings : UIMutableApplicationSceneSettings {

	long long _inCallPresentationMode;

}

@property (assign,nonatomic) long long inCallPresentationMode;                                                   //@synthesize inCallPresentationMode=_inCallPresentationMode - In the implementation block
@property (assign,getter=isAttachedToWindowedAccessory,nonatomic) BOOL attachedToWindowedAccessory; 
@property (assign,nonatomic) CGRect windowedAccessoryCutoutFrameInScreen; 
-(long long)inCallPresentationMode;
-(BOOL)isAttachedToWindowedAccessory;
-(CGRect)windowedAccessoryCutoutFrameInScreen;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(void)setInCallPresentationMode:(long long)arg1 ;
-(void)setAttachedToWindowedAccessory:(BOOL)arg1 ;
-(void)setWindowedAccessoryCutoutFrameInScreen:(CGRect)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

