/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/


#import <CarKit/CarKit-Structs.h>
@interface CARScreenViewArea : NSObject {

	BOOL _displaysTransitionControl;
	BOOL _supportsFocusTransfer;
	unsigned long long _statusBarEdge;
	CGRect _visibleFrame;
	CGRect _safeFrame;
	CGRect _unadjustedSafeFrame;

}

@property (assign,nonatomic) BOOL displaysTransitionControl;                //@synthesize displaysTransitionControl=_displaysTransitionControl - In the implementation block
@property (assign,nonatomic) unsigned long long statusBarEdge;              //@synthesize statusBarEdge=_statusBarEdge - In the implementation block
@property (assign,nonatomic) CGRect unadjustedSafeFrame;                    //@synthesize unadjustedSafeFrame=_unadjustedSafeFrame - In the implementation block
@property (assign,nonatomic) BOOL supportsFocusTransfer;                    //@synthesize supportsFocusTransfer=_supportsFocusTransfer - In the implementation block
@property (nonatomic,readonly) CGRect visibleFrame;                         //@synthesize visibleFrame=_visibleFrame - In the implementation block
@property (nonatomic,readonly) CGRect safeFrame;                            //@synthesize safeFrame=_safeFrame - In the implementation block
+(NSEdgeInsets)insetsForOEMUIWithDisplaySize:(CGSize)arg1 originalFrame:(CGRect)arg2 ;
-(CGRect)visibleFrame;
-(CGRect)safeFrame;
-(unsigned long long)statusBarEdge;
-(id)initWithPropertySupplier:(/*^block*/id)arg1 additionalInsets:(NSEdgeInsets)arg2 scale:(double)arg3 viewAreaDictionary:(id)arg4 displayPixelSize:(CGSize)arg5 wantsCornerMasks:(BOOL)arg6 ;
-(BOOL)displaysTransitionControl;
-(BOOL)supportsFocusTransfer;
-(BOOL)isEqualToViewArea:(id)arg1 ;
-(id)initWithPropertySupplier:(/*^block*/id)arg1 ;
-(id)initWithPropertySupplier:(/*^block*/id)arg1 additionalInsets:(NSEdgeInsets)arg2 ;
-(void)setDisplaysTransitionControl:(BOOL)arg1 ;
-(void)setStatusBarEdge:(unsigned long long)arg1 ;
-(CGRect)unadjustedSafeFrame;
-(void)setUnadjustedSafeFrame:(CGRect)arg1 ;
-(void)setSupportsFocusTransfer:(BOOL)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
@end

