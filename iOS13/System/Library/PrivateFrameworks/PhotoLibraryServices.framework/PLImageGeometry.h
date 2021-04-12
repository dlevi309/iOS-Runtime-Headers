/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PLImageGeometry : NSObject <NSCopying> {

	long long _inputOrientation;
	long long _userOrientation;
	CGRect _inputRect;

}

@property (nonatomic,readonly) CGRect inputRect;                                     //@synthesize inputRect=_inputRect - In the implementation block
@property (nonatomic,readonly) CGRect outputRect; 
@property (nonatomic,readonly) long long inputOrientation;                           //@synthesize inputOrientation=_inputOrientation - In the implementation block
@property (assign,nonatomic) long long userOrientation;                              //@synthesize userOrientation=_userOrientation - In the implementation block
@property (assign,nonatomic) long long appliedOrientation; 
@property (nonatomic,readonly) CGAffineTransform appliedTransform; 
@property (getter=isSizeInverted,nonatomic,readonly) BOOL sizeInverted; 
@property (getter=isMirrored,nonatomic,readonly) BOOL mirrored; 
+(id)geometryWithInputSize:(CGSize)arg1 initialOrientation:(long long)arg2 ;
+(id)geometryWithOutputSize:(CGSize)arg1 appliedOrientation:(long long)arg2 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)inputOrientation;
-(CGRect)inputRect;
-(BOOL)isMirrored;
-(id)initWithInputSize:(CGSize)arg1 inputOrientation:(long long)arg2 ;
-(long long)appliedOrientation;
-(void)setAppliedOrientation:(long long)arg1 ;
-(CGRect)outputRect;
-(CGAffineTransform)appliedTransform;
-(BOOL)isSizeInverted;
-(void)flipVertically;
-(void)flipHorizontally;
-(void)rotateClockwise;
-(void)rotateCounterClockwise;
-(void)applyOrientation:(long long)arg1 ;
-(CGRect)inputRectForOutputRect:(CGRect)arg1 ;
-(CGRect)outputRectForInputRect:(CGRect)arg1 ;
-(CGRect)denormalizeRect:(CGRect)arg1 basis:(long long)arg2 ;
-(CGRect)normalizeRect:(CGRect)arg1 basis:(long long)arg2 ;
-(CGRect)_basisRect:(long long)arg1 ;
-(CGAffineTransform)transformToOrientation:(long long)arg1 ;
-(CGAffineTransform)transformFromOrientation:(long long)arg1 ;
-(CGAffineTransform)_transformFromOrientation:(long long)arg1 toOrientation:(long long)arg2 ;
-(long long)userOrientation;
-(void)setUserOrientation:(long long)arg1 ;
@end

