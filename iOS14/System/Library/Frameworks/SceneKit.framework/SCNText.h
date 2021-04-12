/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNGeometry.h>

@class UIBezierPath, UIFont, NSString;

@interface SCNText : SCNGeometry {

	float _flatness;
	float _chamferRadius;
	float _extrusionDepth;
	float _discretizedStraightLineMaxLength;
	UIBezierPath* _chamferProfile;
	long long _primitiveType;
	id _string;
	UIFont* _font;
	BOOL _wrapped;
	int _alignmentMode;
	int _truncationMode;
	BOOL _useCustomContainerFrame;
	CGRect _customContainerFrame;
	BOOL __wantsSeparateGeometryElements;

}

@property (assign,nonatomic) double extrusionDepth; 
@property (nonatomic,copy) id string; 
@property (nonatomic,retain) UIFont * font; 
@property (assign,getter=isWrapped,nonatomic) BOOL wrapped; 
@property (assign,nonatomic) CGRect containerFrame; 
@property (nonatomic,copy) NSString * truncationMode; 
@property (nonatomic,copy) NSString * alignmentMode; 
@property (assign,nonatomic) double chamferRadius; 
@property (nonatomic,copy) UIBezierPath * chamferProfile; 
@property (assign,nonatomic) double flatness; 
+(BOOL)supportsSecureCoding;
+(id)text;
+(id)textWithString:(id)arg1 extrusionDepth:(double)arg2 ;
-(id)init;
-(void)setFont:(UIFont *)arg1 ;
-(long long)primitiveType;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAlignmentMode:(NSString *)arg1 ;
-(double)flatness;
-(void)setWrapped:(BOOL)arg1 ;
-(id)description;
-(id)copy;
-(NSString *)alignmentMode;
-(BOOL)isWrapped;
-(id)initWithCoder:(id)arg1 ;
-(void)setPrimitiveType:(long long)arg1 ;
-(id)string;
-(void)setString:(id)arg1 ;
-(void)setFlatness:(double)arg1 ;
-(void)setTruncationMode:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)truncationMode;
-(void)dealloc;
-(UIFont *)font;
-(SCD_Struct_SC159*)params;
-(BOOL)getBoundingBoxMin:(SCNVector3*)arg1 max:(SCNVector3*)arg2 ;
-(id)presentationGeometry;
-(BOOL)getBoundingSphereCenter:(SCNVector3*)arg1 radius:(double*)arg2 ;
-(_C3DGeometry*)__createCFObject;
-(void)_syncObjCModel:(_C3DTextGeometry*)arg1 ;
-(void)setChamferRadius:(double)arg1 ;
-(double)chamferRadius;
-(double)extrusionDepth;
-(void)setExtrusionDepth:(double)arg1 ;
-(UIBezierPath *)chamferProfile;
-(void)setChamferProfile:(UIBezierPath *)arg1 ;
-(CGRect)containerFrame;
-(void)setContainerFrame:(CGRect)arg1 ;
-(id)patchFont:(id)arg1 ;
-(id)initPresentationTextGeometryWithTextGeometryRef:(_C3DTextGeometry*)arg1 ;
-(id)initWithTextGeometryRef:(_C3DTextGeometry*)arg1 ;
-(void)_customEncodingOfSCNText:(id)arg1 ;
-(void)_customDecodingOfSCNText:(id)arg1 ;
-(void)setDiscretizedStraightLineMaxLength:(double)arg1 ;
-(void)set_wantsSeparateGeometryElements:(BOOL)arg1 ;
-(id)copyAnimationPathForKeyPath:(id)arg1 animation:(id)arg2 ;
-(BOOL)_wantsSeparateGeometryElements;
-(double)discretizedStraightLineMaxLength;
@end

