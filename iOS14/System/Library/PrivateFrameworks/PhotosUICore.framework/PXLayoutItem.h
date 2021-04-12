/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXLayoutItemInput.h>

@class NSString;

@interface PXLayoutItem : NSObject <PXLayoutItemInput> {

	double _weight;
	CGSize _size;
	CGPoint _positionOffset;
	CGRect _preferredCropRect;
	CGRect _acceptableCropRect;
	CGAffineTransform _transform;

}

@property (assign,nonatomic) CGSize size;                              //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double weight;                            //@synthesize weight=_weight - In the implementation block
@property (assign,nonatomic) CGAffineTransform transform;              //@synthesize transform=_transform - In the implementation block
@property (assign,nonatomic) CGPoint positionOffset;                   //@synthesize positionOffset=_positionOffset - In the implementation block
@property (assign,nonatomic) CGRect preferredCropRect;                 //@synthesize preferredCropRect=_preferredCropRect - In the implementation block
@property (assign,nonatomic) CGRect acceptableCropRect;                //@synthesize acceptableCropRect=_acceptableCropRect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)weightUsingCriterion:(long long)arg1 ;
-(CGPoint)positionOffset;
-(CGRect)preferredCropRect;
-(id)init;
-(void)setWeight:(double)arg1 ;
-(CGSize)size;
-(void)setAcceptableCropRect:(CGRect)arg1 ;
-(void)setPreferredCropRect:(CGRect)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(double)weight;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)transform;
-(void)setPositionOffset:(CGPoint)arg1 ;
-(CGRect)acceptableCropRect;
-(id)initWithSize:(CGSize)arg1 weight:(double)arg2 ;
@end

