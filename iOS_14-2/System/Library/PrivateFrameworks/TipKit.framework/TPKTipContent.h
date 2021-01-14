/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipKit.framework/TipKit
*/

#import <TipKit/TipKit-Structs.h>
#import <TipKit/TPKContent.h>

@class TPSDiscoverabilityTip;

@interface TPKTipContent : TPKContent {

	TPSDiscoverabilityTip* _tip;

}

@property (nonatomic,readonly) TPSDiscoverabilityTip * tip;              //@synthesize tip=_tip - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classSet;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(TPSDiscoverabilityTip *)tip;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithTip:(id)arg1 dismissalEvents:(id)arg2 customizationID:(long long)arg3 ;
@end

