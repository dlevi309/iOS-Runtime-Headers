/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@class TSDImageProvider;

@interface TSDImageRepSizingState : NSObject {

	CGSize mDesiredSize;
	TSDImageProvider* mProvider;
	CGPathRef mMaskPath;
	BOOL mIncludesAdjustments;
	BOOL mWideGamutCanvas;
	int mStatus;
	CGImageRef mSizedImage;
	long long mSizedImageOrientation;

}

@property (assign,nonatomic) CGSize desiredSize; 
@property (nonatomic,readonly) BOOL wideGamut; 
@property (nonatomic,retain) TSDImageProvider * provider; 
@property (assign,nonatomic) int status; 
@property (assign,nonatomic) CGImageRef sizedImage; 
@property (nonatomic,readonly) BOOL sizedImageHasMask; 
@property (assign,nonatomic) long long sizedImageOrientation; 
@property (nonatomic,readonly) CGPathRef maskPath; 
@property (assign,nonatomic) BOOL sizedImageIncludesAdjustments; 
-(void)dealloc;
-(int)status;
-(void)setProvider:(TSDImageProvider *)arg1 ;
-(void)setStatus:(int)arg1 ;
-(TSDImageProvider *)provider;
-(CGPathRef)maskPath;
-(CGSize)desiredSize;
-(void)setDesiredSize:(CGSize)arg1 ;
-(id)initWithDesiredSize:(CGSize)arg1 provider:(id)arg2 maskPath:(CGPathRef)arg3 wideGamutCanvas:(BOOL)arg4 ;
-(void)setSizedImageIncludesAdjustments:(BOOL)arg1 ;
-(void)generateSizedImage;
-(CGImageRef)sizedImage;
-(long long)sizedImageOrientation;
-(BOOL)sizedImageHasMask;
-(BOOL)sizedImageIncludesAdjustments;
-(void)setSizedImage:(CGImageRef)arg1 ;
-(BOOL)wideGamut;
-(void)setSizedImageOrientation:(long long)arg1 ;
@end

