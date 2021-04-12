/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class NSArray, JFXTextEffectTransforms;

@interface JFXTextEffectFrame : NSObject {

	BOOL _forcePosterFrame;
	int _effectOrigin;
	int _origin;
	NSArray* _hitAreaPoints;
	CGPathRef _hitAreaPath;
	CGPathRef _expandedHitAreaPath;
	JFXTextEffectTransforms* _transforms;
	NSArray* _textFrames;
	CGSize _effectSize;
	CGSize _relativeToSize;
	SCD_Struct_JF3 _time;
	CGRect _objectBounds;
	PVCGPointQuad _cornerPoints;
	SCD_Struct_JF14 _transform;

}

@property (assign,nonatomic) SCD_Struct_JF3 time;                               //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) BOOL forcePosterFrame;                             //@synthesize forcePosterFrame=_forcePosterFrame - In the implementation block
@property (assign,nonatomic) int effectOrigin;                                  //@synthesize effectOrigin=_effectOrigin - In the implementation block
@property (assign,nonatomic) CGSize effectSize;                                 //@synthesize effectSize=_effectSize - In the implementation block
@property (assign,nonatomic) int origin;                                        //@synthesize origin=_origin - In the implementation block
@property (assign,nonatomic) CGSize relativeToSize;                             //@synthesize relativeToSize=_relativeToSize - In the implementation block
@property (assign,nonatomic) PVCGPointQuad cornerPoints;                        //@synthesize cornerPoints=_cornerPoints - In the implementation block
@property (assign,nonatomic) CGRect objectBounds;                               //@synthesize objectBounds=_objectBounds - In the implementation block
@property (nonatomic,retain) NSArray * hitAreaPoints;                           //@synthesize hitAreaPoints=_hitAreaPoints - In the implementation block
@property (assign,nonatomic) CGPathRef hitAreaPath;                             //@synthesize hitAreaPath=_hitAreaPath - In the implementation block
@property (assign,nonatomic) CGPathRef expandedHitAreaPath;                     //@synthesize expandedHitAreaPath=_expandedHitAreaPath - In the implementation block
@property (assign,nonatomic) SCD_Struct_JF14 transform;                         //@synthesize transform=_transform - In the implementation block
@property (nonatomic,retain) JFXTextEffectTransforms * transforms;              //@synthesize transforms=_transforms - In the implementation block
@property (nonatomic,retain) NSArray * textFrames;                              //@synthesize textFrames=_textFrames - In the implementation block
@property (nonatomic,readonly) CGPoint center; 
@property (nonatomic,readonly) CGRect viewSpaceObjectBounds; 
+(id)frameWithEffect:(id)arg1 relativeToSize:(CGSize)arg2 origin:(int)arg3 time:(SCD_Struct_JF3)arg4 forcePosterFrame:(BOOL)arg5 includeDropShadow:(BOOL)arg6 includeTextFrames:(BOOL)arg7 ;
-(void)setOrigin:(int)arg1 ;
-(SCD_Struct_JF3)time;
-(void)setTime:(SCD_Struct_JF3)arg1 ;
-(int)origin;
-(CGPoint)center;
-(JFXTextEffectTransforms *)transforms;
-(void)setTransform:(SCD_Struct_JF14)arg1 ;
-(SCD_Struct_JF14)transform;
-(id)description;
-(CGRect)objectBounds;
-(void)dealloc;
-(void)setTransforms:(JFXTextEffectTransforms *)arg1 ;
-(id)initWithEffect:(id)arg1 relativeToSize:(CGSize)arg2 origin:(int)arg3 time:(SCD_Struct_JF3)arg4 forcePosterFrame:(BOOL)arg5 includeDropShadow:(BOOL)arg6 includeTextFrames:(BOOL)arg7 ;
-(void)setHitAreaPoints:(NSArray *)arg1 ;
-(void)setHitAreaPath:(CGPathRef)arg1 ;
-(void)setExpandedHitAreaPath:(CGPathRef)arg1 ;
-(NSArray *)textFrames;
-(CGRect)viewSpaceObjectBounds;
-(PVCGPointQuad)cornerPoints;
-(CGSize)effectSize;
-(void)setCornerPoints:(PVCGPointQuad)arg1 ;
-(void)setObjectBounds:(CGRect)arg1 ;
-(CGSize)relativeToSize;
-(BOOL)forcePosterFrame;
-(int)effectOrigin;
-(NSArray *)hitAreaPoints;
-(void)setForcePosterFrame:(BOOL)arg1 ;
-(void)setEffectOrigin:(int)arg1 ;
-(void)setEffectSize:(CGSize)arg1 ;
-(void)setRelativeToSize:(CGSize)arg1 ;
-(CGPathRef)hitAreaPath;
-(CGPathRef)expandedHitAreaPath;
-(void)setTextFrames:(NSArray *)arg1 ;
@end

