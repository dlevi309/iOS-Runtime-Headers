/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <QuartzCore/CAShapeLayer.h>

@interface CKPinnedConversationActivityItemViewShadowLayer : CAShapeLayer {

	long long _shadowType;
	long long _userInterfaceStyle;

}

@property (nonatomic,readonly) long long shadowType;                    //@synthesize shadowType=_shadowType - In the implementation block
@property (assign,nonatomic) long long userInterfaceStyle;              //@synthesize userInterfaceStyle=_userInterfaceStyle - In the implementation block
-(long long)userInterfaceStyle;
-(long long)shadowType;
-(void)_updateShadowProperties;
-(long long)_shadowStyleForShadowType:(long long)arg1 userInterfaceStyle:(long long)arg2 ;
-(double)_opacityForShadowStyle:(long long)arg1 ;
-(double)_radiusForShadowStyle:(long long)arg1 ;
-(CGSize)_offsetForShadowStyle:(long long)arg1 ;
-(id)initWithShadowType:(long long)arg1 ;
-(void)setUserInterfaceStyle:(long long)arg1 ;
@end

