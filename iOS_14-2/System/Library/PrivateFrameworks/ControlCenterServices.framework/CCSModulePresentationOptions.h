/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)animatePresentation;
-(BOOL)animateDismissal;
-(BOOL)blurBackground;
-(id)initWithBlurBackground:(BOOL)arg1 animatePresentation:(BOOL)arg2 animateDismissal:(BOOL)arg3 ;
@end

