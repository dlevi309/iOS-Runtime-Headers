/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedDataReset.framework/EmbeddedDataReset
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface DDRResetOptions : NSObject <NSSecureCoding> {

	BOOL _hideProgress;
	BOOL _eraseDataPlan;

}

@property (assign,nonatomic) BOOL hideProgress;               //@synthesize hideProgress=_hideProgress - In the implementation block
@property (assign,nonatomic) BOOL eraseDataPlan;              //@synthesize eraseDataPlan=_eraseDataPlan - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setEraseDataPlan:(BOOL)arg1 ;
-(void)setHideProgress:(BOOL)arg1 ;
-(BOOL)hideProgress;
-(BOOL)eraseDataPlan;
@end

