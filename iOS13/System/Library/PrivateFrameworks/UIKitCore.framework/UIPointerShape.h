/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIBezierPath, NSString;

@interface UIPointerShape : NSObject <NSCopying> {

	UIBezierPath* _path;
	double _cornerRadius;
	double _defaultCornerRadius;
	double _beamLength;
	unsigned long long _materialUsage;
	long long __type;
	CGPoint _inherentConstrainedSlip;
	CGRect _rect;

}

@property (nonatomic,copy) UIBezierPath * path;                             //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) CGRect rect;                                   //@synthesize rect=_rect - In the implementation block
@property (assign,nonatomic) double cornerRadius;                           //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) double defaultCornerRadius;                    //@synthesize defaultCornerRadius=_defaultCornerRadius - In the implementation block
@property (assign,nonatomic) CGPoint inherentConstrainedSlip;               //@synthesize inherentConstrainedSlip=_inherentConstrainedSlip - In the implementation block
@property (assign,nonatomic) double beamLength;                             //@synthesize beamLength=_beamLength - In the implementation block
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double effectiveCornerRadius; 
@property (nonatomic,readonly) NSString * cornerCurve; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (assign,nonatomic) unsigned long long materialUsage;              //@synthesize materialUsage=_materialUsage - In the implementation block
@property (assign,setter=_setType:,nonatomic) long long _type;              //@synthesize _type=__type - In the implementation block
+(id)shapeWithRoundedRect:(CGRect)arg1 ;
+(id)shapeWithRoundedRect:(CGRect)arg1 cornerRadius:(double)arg2 ;
+(id)shapeWithPath:(id)arg1 ;
+(id)beamWithPreferredLength:(double)arg1 axis:(unsigned long long)arg2 ;
+(id)_linkPointerShape;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(long long)_type;
-(CGSize)size;
-(UIBezierPath *)path;
-(void)setPath:(UIBezierPath *)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(NSString *)cornerCurve;
-(CGRect)rect;
-(double)beamLength;
-(double)effectiveCornerRadius;
-(void)setDefaultCornerRadius:(double)arg1 ;
-(CGPoint)inherentConstrainedSlip;
-(unsigned long long)materialUsage;
-(void)setMaterialUsage:(unsigned long long)arg1 ;
-(void)setInherentConstrainedSlip:(CGPoint)arg1 ;
-(void)_setType:(long long)arg1 ;
-(void)setRect:(CGRect)arg1 ;
-(void)setBeamLength:(double)arg1 ;
-(double)defaultCornerRadius;
@end

