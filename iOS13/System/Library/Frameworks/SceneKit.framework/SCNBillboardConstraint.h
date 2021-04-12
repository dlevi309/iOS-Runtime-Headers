/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNConstraint.h>

@interface SCNBillboardConstraint : SCNConstraint {

	unsigned long long _freeAxes;
	BOOL _preserveScale;

}

@property (assign,nonatomic) unsigned long long freeAxes;              //@synthesize freeAxes=_freeAxes - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)billboardConstraint;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPreserveScale:(BOOL)arg1 ;
-(void)setFreeAxes:(unsigned long long)arg1 ;
-(unsigned long long)freeAxes;
-(BOOL)preserveScale;
@end

