/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGAnimationDelegate.h>

@class NSDictionary, PXCuratedLibraryLayout, NSString;

@interface PXCuratedLibraryLayoutAnimationHelper : NSObject <PXGAnimationDelegate> {

	BOOL _wantsPresentationAdjustment;
	BOOL _wantsAnimationWithSpriteTransfer;
	NSDictionary* _userData;
	PXCuratedLibraryLayout* _layout;

}

@property (nonatomic,retain) NSDictionary * userData;                              //@synthesize userData=_userData - In the implementation block
@property (__weak,readonly) PXCuratedLibraryLayout * layout;                       //@synthesize layout=_layout - In the implementation block
@property (nonatomic,readonly) long long animationCurve; 
@property (nonatomic,readonly) double animationDuration; 
@property (nonatomic,readonly) BOOL wantsDoubleSidedAnimations; 
@property (nonatomic,readonly) BOOL wantsPresentationAdjustment;                   //@synthesize wantsPresentationAdjustment=_wantsPresentationAdjustment - In the implementation block
@property (nonatomic,readonly) BOOL wantsAnimationWithSpriteTransfer;              //@synthesize wantsAnimationWithSpriteTransfer=_wantsAnimationWithSpriteTransfer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createAnimationIfNeededForLayout:(id)arg1 context:(long long)arg2 userData:(id)arg3 ;
+(id)createTransitionIfNeededForLayout:(id)arg1 context:(long long)arg2 ;
-(id)initWithLayout:(id)arg1 ;
-(double)animationDuration;
-(id)init;
-(void)animation:(id)arg1 adjustGeometries:(inout SCD_Struct_PX11*)arg2 styles:(inout SCD_Struct_PX14*)arg3 infos:(inout SCD_Struct_PX15*)arg4 forSpriteAppearingIntoRootIndexRange:(PXGSpriteIndexRange)arg5 ;
-(BOOL)wantsDoubleSidedAnimations;
-(NSDictionary *)userData;
-(BOOL)wantsPresentationAdjustment;
-(BOOL)wantsAnimationWithSpriteTransfer;
-(long long)animationCurve;
-(void)setUserData:(NSDictionary *)arg1 ;
-(void)animation:(id)arg1 adjustGeometries:(inout SCD_Struct_PX11*)arg2 styles:(inout SCD_Struct_PX14*)arg3 infos:(inout SCD_Struct_PX15*)arg4 forSpriteDisappearingFromRootIndexRange:(PXGSpriteIndexRange)arg5 ;
-(void)animation:(id)arg1 prepareWithRootLayout:(id)arg2 viewportShift:(CGPoint)arg3 ;
-(PXCuratedLibraryLayout *)layout;
@end

