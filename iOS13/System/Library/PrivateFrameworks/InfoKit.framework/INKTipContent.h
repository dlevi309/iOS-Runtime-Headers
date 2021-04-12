/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InfoKit.framework/InfoKit
*/

#import <InfoKit/InfoKit-Structs.h>
#import <InfoKit/INKContent.h>

@class TPSDiscoverabilityTip;

@interface INKTipContent : INKContent {

	TPSDiscoverabilityTip* _tip;

}

@property (nonatomic,readonly) TPSDiscoverabilityTip * tip;              //@synthesize tip=_tip - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classSet;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(TPSDiscoverabilityTip *)tip;
-(id)initWithTip:(id)arg1 dismissalEvents:(id)arg2 customizationID:(long long)arg3 ;
@end

