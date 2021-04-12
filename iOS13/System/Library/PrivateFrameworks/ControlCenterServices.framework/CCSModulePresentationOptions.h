/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterServices.framework/ControlCenterServices
*/

#import <ControlCenterServices/ControlCenterServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CCSModulePresentationOptions : NSObject <NSCopying, NSSecureCoding> {

	BOOL _animatePresentation;
	BOOL _animateDismissal;
	BOOL _blurBackground;

}

@property (nonatomic,readonly) BOOL animateDismissal;                 //@synthesize animateDismissal=_animateDismissal - In the implementation block
@property (nonatomic,readonly) BOOL animatePresentation;              //@synthesize animatePresentation=_animatePresentation - In the implementation block
@property (nonatomic,readonly) BOOL blurBackground;                   //@synthesize blurBackground=_blurBackground - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultOptions;
+(id)defaultExpandedOptions;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithBlurBackground:(BOOL)arg1 animatePresentation:(BOOL)arg2 animateDismissal:(BOOL)arg3 ;
-(BOOL)blurBackground;
-(BOOL)animatePresentation;
-(BOOL)animateDismissal;
@end

