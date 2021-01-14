/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedDataReset.framework/EmbeddedDataReset
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface DDRResetOptions : NSObject <NSSecureCoding> {

	BOOL _hideProgress;
	BOOL _eraseDataPlan;
	BOOL _disallowProximitySetup;

}

@property (assign,nonatomic) BOOL hideProgress;                        //@synthesize hideProgress=_hideProgress - In the implementation block
@property (assign,nonatomic) BOOL eraseDataPlan;                       //@synthesize eraseDataPlan=_eraseDataPlan - In the implementation block
@property (assign,nonatomic) BOOL disallowProximitySetup;              //@synthesize disallowProximitySetup=_disallowProximitySetup - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)hideProgress;
-(id)initWithCoder:(id)arg1 ;
-(void)setEraseDataPlan:(BOOL)arg1 ;
-(void)setHideProgress:(BOOL)arg1 ;
-(BOOL)eraseDataPlan;
-(BOOL)disallowProximitySetup;
-(void)setDisallowProximitySetup:(BOOL)arg1 ;
@end

