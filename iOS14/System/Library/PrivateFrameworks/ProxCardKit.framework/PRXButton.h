/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
*/

#import <ProxCardKit/ProxCardKit-Structs.h>
#import <UIKitCore/UIButton.h>

@interface PRXButton : UIButton {

	long long _proximityButtonType;

}

@property (nonatomic,readonly) long long proximityButtonType;              //@synthesize proximityButtonType=_proximityButtonType - In the implementation block
+(id)buttonWithProximityType:(long long)arg1 usesLegacyStyling:(BOOL)arg2 ;
+(id)buttonWithProximityType:(long long)arg1 ;
-(CGSize)intrinsicContentSize;
-(double)_minimumIntrinsicHeight;
-(void)setHighlighted:(BOOL)arg1 ;
-(long long)proximityButtonType;
@end

