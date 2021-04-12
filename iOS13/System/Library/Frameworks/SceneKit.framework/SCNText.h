/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)string;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setString:(id)arg1 ;
-(SCD_Struct_SC159*)params;
-(long long)primitiveType;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(void)setAlignmentMode:(NSString *)arg1 ;
-(double)flatness;
-(void)setFlatness:(double)arg1 ;
-(BOOL)isWrapped;
-(void)setWrapped:(BOOL)arg1 ;
-(NSString *)truncationMode;
-(void)setTruncationMode:(NSString *)arg1 ;
-(NSString *)alignmentMode;
-(void)setPrimitiveType:(long long)arg1 ;
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

