/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) BOOL isCircle; 
@property (assign,nonatomic) unsigned long long materialUsage;              //@synthesize materialUsage=_materialUsage - In the implementation block
@property (assign,setter=_setType:,nonatomic) long long _type;              //@synthesize _type=__type - In the implementation block
+(id)shapeWithRoundedRect:(CGRect)arg1 cornerRadius:(double)arg2 ;
+(id)shapeWithPath:(id)arg1 ;
+(id)beamWithPreferredLength:(double)arg1 axis:(unsigned long long)arg2 ;
+(id)_linkPointerShape;
+(id)shapeWithRoundedRect:(CGRect)arg1 ;
-(long long)_type;
-(CGRect)rect;
-(id)init;
-(CGSize)size;
-(double)effectiveCornerRadius;
-(void)setPath:(UIBezierPath *)arg1 ;
-(UIBezierPath *)path;
-(BOOL)isCircle;
-(void)setRect:(CGRect)arg1 ;
-(double)cornerRadius;
-(id)description;
-(NSString *)cornerCurve;
-(double)beamLength;
-(double)defaultCornerRadius;
-(void)_setType:(long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEmpty;
-(void)setCornerRadius:(double)arg1 ;
-(unsigned long long)materialUsage;
-(void)setDefaultCornerRadius:(double)arg1 ;
-(CGPoint)inherentConstrainedSlip;
-(void)setMaterialUsage:(unsigned long long)arg1 ;
-(void)setBeamLength:(double)arg1 ;
-(void)setInherentConstrainedSlip:(CGPoint)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

