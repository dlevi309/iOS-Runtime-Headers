/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLKDevice;

@interface NTKLayoutRule : NSObject <NSCopying> {

	BOOL _clipsToReferenceFrame;
	CLKDevice* _device;
	long long _horizontalLayout;
	long long _verticalLayout;
	CGRect _referenceFrame;
	CGAffineTransform _transform;

}

@property (nonatomic,readonly) CLKDevice * device;                     //@synthesize device=_device - In the implementation block
@property (assign,nonatomic) CGRect referenceFrame;                    //@synthesize referenceFrame=_referenceFrame - In the implementation block
@property (assign,nonatomic) long long horizontalLayout;               //@synthesize horizontalLayout=_horizontalLayout - In the implementation block
@property (assign,nonatomic) long long verticalLayout;                 //@synthesize verticalLayout=_verticalLayout - In the implementation block
@property (assign,nonatomic) BOOL clipsToReferenceFrame;               //@synthesize clipsToReferenceFrame=_clipsToReferenceFrame - In the implementation block
@property (assign,nonatomic) CGAffineTransform transform;              //@synthesize transform=_transform - In the implementation block
@property (nonatomic,readonly) CGSize maximumSize; 
+(id)layoutRuleForDevice:(id)arg1 withReferenceFrame:(CGRect)arg2 horizontalLayout:(long long)arg3 verticalLayout:(long long)arg4 ;
+(id)layoutRuleForDevice:(id)arg1 withReferenceFrame:(CGRect)arg2 horizontalLayout:(long long)arg3 verticalLayout:(long long)arg4 clip:(BOOL)arg5 transform:(CGAffineTransform)arg6 ;
-(void)validate;
-(CGSize)maximumSize;
-(void)setHorizontalLayout:(long long)arg1 ;
-(CGRect)referenceFrame;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(CLKDevice *)device;
-(CGAffineTransform)transform;
-(id)description;
-(void)setReferenceFrame:(CGRect)arg1 ;
-(long long)verticalLayout;
-(unsigned long long)hash;
-(long long)horizontalLayout;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVerticalLayout:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initForDevice:(id)arg1 ;
-(CGRect)calculateLayoutFrameForBoundsSize:(CGSize)arg1 ;
-(id)layoutRuleByConvertingToCoordinateSpaceWithFrame:(CGRect)arg1 ;
-(void)setClipsToReferenceFrame:(BOOL)arg1 ;
-(BOOL)clipsToReferenceFrame;
-(double)calculateLayoutFrameWidthForBoundsSize:(CGSize)arg1 ;
-(double)calculateLayoutFrameHeightForBoundsSize:(CGSize)arg1 ;
-(double)calculateLayoutFrameXOriginForBoundsSize:(CGSize)arg1 ;
-(double)calculateLayoutFrameYOriginForBoundsSize:(CGSize)arg1 ;
@end

