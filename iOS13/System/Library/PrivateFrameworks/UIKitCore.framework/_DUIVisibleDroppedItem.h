/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setFlipped:(BOOL)arg1 ;
-(CGPoint)center;
-(void)setCenter:(CGPoint)arg1 ;
-(double)rotation;
-(void)setRotation:(double)arg1 ;
-(CGVector)velocity;
-(void)setVelocity:(CGVector)arg1 ;
-(_DUIPreview *)preview;
-(void)setPreview:(_DUIPreview *)arg1 ;
-(BOOL)constrainSize;
-(void)setConstrainSize:(BOOL)arg1 ;
-(BOOL)precisionMode;
-(void)setPrecisionMode:(BOOL)arg1 ;
-(_DUIImageComponent *)imageComponent;
-(id)createSnapshotView;
-(unsigned long long)itemIndex;
-(void)setItemIndex:(unsigned long long)arg1 ;
-(void)setImageComponent:(_DUIImageComponent *)arg1 ;
-(CGVector)targetVelocity;
-(void)setTargetVelocity:(CGVector)arg1 ;
-(BOOL)flipped;
@end

