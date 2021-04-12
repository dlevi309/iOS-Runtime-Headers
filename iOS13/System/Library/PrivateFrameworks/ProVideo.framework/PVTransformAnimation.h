/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface PVTransformAnimation : NSObject <NSSecureCoding> {

	PVTransformAnimationInfo* _liveTransform;
	NSArray* _animationData;
	SCD_Struct_PV27 _presentationTimeRange;

}

@property (nonatomic,readonly) NSArray * animationData;                          //@synthesize animationData=_animationData - In the implementation block
@property (assign,nonatomic) SCD_Struct_PV27 presentationTimeRange;              //@synthesize presentationTimeRange=_presentationTimeRange - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithAnimation:(id)arg1 ;
-(NSArray *)animationData;
-(PVTransformAnimationInfo)transformInfoAtTime:(SCD_Struct_PV20)arg1 ;
-(id)initWithLiveTransform:(PVTransformAnimationInfo*)arg1 ;
-(void)_commonInit:(id)arg1 liveTransform:(PVTransformAnimationInfo*)arg2 ;
-(id)initWithAnimation:(id)arg1 simplify:(BOOL)arg2 tolerance:(double)arg3 smoothness:(unsigned)arg4 ;
-(id)animationInfoFromData:(id)arg1 ;
-(id)dataFromAnimationInfo:(id)arg1 ;
-(PVTransformAnimationInfo)transformInfoAtLocalTime:(SCD_Struct_PV20)arg1 ;
-(SCD_Struct_PV27)presentationTimeRange;
-(void)setPresentationTimeRange:(SCD_Struct_PV27)arg1 ;
@end

