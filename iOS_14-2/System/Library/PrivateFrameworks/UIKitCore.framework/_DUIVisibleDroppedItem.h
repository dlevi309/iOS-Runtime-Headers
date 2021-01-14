/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _DUIImageComponent, _DUIPreview;

@interface _DUIVisibleDroppedItem : NSObject <NSSecureCoding> {

	BOOL _constrainSize;
	BOOL _flipped;
	BOOL _precisionMode;
	unsigned long long _itemIndex;
	_DUIImageComponent* _imageComponent;
	_DUIPreview* _preview;
	double _rotation;
	CGPoint _center;
	CGVector _velocity;
	CGVector _targetVelocity;

}

@property (assign,nonatomic) unsigned long long itemIndex;                     //@synthesize itemIndex=_itemIndex - In the implementation block
@property (nonatomic,retain) _DUIImageComponent * imageComponent;              //@synthesize imageComponent=_imageComponent - In the implementation block
@property (nonatomic,copy) _DUIPreview * preview;                              //@synthesize preview=_preview - In the implementation block
@property (assign,nonatomic) CGPoint center;                                   //@synthesize center=_center - In the implementation block
@property (assign,nonatomic) CGVector velocity;                                //@synthesize velocity=_velocity - In the implementation block
@property (assign,nonatomic) CGVector targetVelocity;                          //@synthesize targetVelocity=_targetVelocity - In the implementation block
@property (assign,nonatomic) BOOL constrainSize;                               //@synthesize constrainSize=_constrainSize - In the implementation block
@property (assign,nonatomic) BOOL flipped;                                     //@synthesize flipped=_flipped - In the implementation block
@property (assign,nonatomic) BOOL precisionMode;                               //@synthesize precisionMode=_precisionMode - In the implementation block
@property (assign,nonatomic) double rotation;                                  //@synthesize rotation=_rotation - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setVelocity:(CGVector)arg1 ;
-(void)setTargetVelocity:(CGVector)arg1 ;
-(_DUIPreview *)preview;
-(BOOL)flipped;
-(void)setRotation:(double)arg1 ;
-(CGPoint)center;
-(CGVector)velocity;
-(id)init;
-(double)rotation;
-(unsigned long long)itemIndex;
-(void)setFlipped:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)constrainSize;
-(void)setConstrainSize:(BOOL)arg1 ;
-(void)setPrecisionMode:(BOOL)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(id)createSnapshotView;
-(void)setPreview:(_DUIPreview *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGVector)targetVelocity;
-(void)setItemIndex:(unsigned long long)arg1 ;
-(void)setImageComponent:(_DUIImageComponent *)arg1 ;
-(BOOL)precisionMode;
-(_DUIImageComponent *)imageComponent;
@end

