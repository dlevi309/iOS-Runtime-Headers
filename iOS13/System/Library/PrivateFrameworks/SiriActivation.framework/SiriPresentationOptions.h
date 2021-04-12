/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/

#import <SiriActivation/SiriActivation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SiriPresentationOptions : NSObject <NSCopying, NSSecureCoding> {

	BOOL _wakeScreen;
	BOOL _hideOtherWindowsDuringAppearance;

}

@property (assign,nonatomic) BOOL wakeScreen;                                    //@synthesize wakeScreen=_wakeScreen - In the implementation block
@property (assign,nonatomic) BOOL hideOtherWindowsDuringAppearance;              //@synthesize hideOtherWindowsDuringAppearance=_hideOtherWindowsDuringAppearance - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)hideOtherWindowsDuringAppearance;
-(void)setHideOtherWindowsDuringAppearance:(BOOL)arg1 ;
-(BOOL)wakeScreen;
-(void)setWakeScreen:(BOOL)arg1 ;
@end

