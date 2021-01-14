/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
*/

#import <BannerKit/BannerKit-Structs.h>
#import <BaseBoard/BSAction.h>

@class NSUUID;

@interface BNSizeTransitionAction : BSAction

@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier; 
@property (nonatomic,readonly) long long sizeTransitionActionState; 
@property (nonatomic,readonly) CGSize targetSize; 
-(CGSize)targetSize;
-(NSUUID *)uniqueIdentifier;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)initWithTargetSize:(CGSize)arg1 ;
-(long long)sizeTransitionActionState;
-(id)transitionCompleteAction;
-(id)_initWithUniqueIdentifier:(id)arg1 state:(long long)arg2 targetSize:(CGSize)arg3 ;
@end

