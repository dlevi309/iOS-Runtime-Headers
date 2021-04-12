/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface PVTransformAnimation : NSObject <NSSecureCoding, NSCopying> {

	PVTransformAnimationInfo* _liveTransform;
	NSArray* _animationData;
	SCD_Struct_PV29 _presentationTimeRange;

}

@property (nonatomic,readonly) NSArray * animationData;                          //@synthesize animationData=_animationData - In the implementation block
@property (assign,nonatomic) SCD_Struct_PV29 presentationTimeRange;              //@synthesize presentationTimeRange=_presentationTimeRange - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)getTransformInfoFromAnimation:(id)arg1 atTime:(SCD_Struct_PV22)arg2 outInfo:(out PVTransformAnimationInfo*)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(PVTransformAnimationInfo)transformInfoAtTime:(SCD_Struct_PV22)arg1 ;
-(NSArray *)animationData;
-(id)initWithAnimation:(id)arg1 ;
-(SCD_Struct_PV29)presentationTimeRange;
-(void)setPresentationTimeRange:(SCD_Struct_PV29)arg1 ;
-(id)initWithLiveTransform:(PVTransformAnimationInfo*)arg1 ;
-(void)_commonInit:(id)arg1 liveTransform:(PVTransformAnimationInfo*)arg2 presentationTimeRange:(SCD_Struct_PV29)arg3 ;
-(id)initWithAnimation:(id)arg1 simplify:(BOOL)arg2 tolerance:(double)arg3 smoothness:(unsigned)arg4 ;
-(id)animationInfoFromData:(id)arg1 ;
-(id)dataFromAnimationInfo:(id)arg1 ;
-(id)initWithAnimation:(id)arg1 liveTransform:(PVTransformAnimationInfo*)arg2 presentationTimeRange:(SCD_Struct_PV29)arg3 ;
-(PVTransformAnimationInfo)transformInfoAtLocalTime:(SCD_Struct_PV22)arg1 ;
@end

