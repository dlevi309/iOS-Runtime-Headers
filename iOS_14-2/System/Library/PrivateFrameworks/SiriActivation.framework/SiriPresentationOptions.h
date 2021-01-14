/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/

#import <SiriActivation/SiriActivation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SiriPresentationOptions : NSObject <NSCopying, NSSecureCoding> {

	BOOL _wakeScreen;
	BOOL _hideOtherWindowsDuringAppearance;
	long long _rotationStyle;

}

@property (assign,nonatomic) BOOL wakeScreen;                                    //@synthesize wakeScreen=_wakeScreen - In the implementation block
@property (assign,nonatomic) BOOL hideOtherWindowsDuringAppearance;              //@synthesize hideOtherWindowsDuringAppearance=_hideOtherWindowsDuringAppearance - In the implementation block
@property (assign,nonatomic) long long rotationStyle;                            //@synthesize rotationStyle=_rotationStyle - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setWakeScreen:(BOOL)arg1 ;
-(void)setRotationStyle:(long long)arg1 ;
-(BOOL)wakeScreen;
-(BOOL)hideOtherWindowsDuringAppearance;
-(long long)rotationStyle;
-(void)setHideOtherWindowsDuringAppearance:(BOOL)arg1 ;
@end

