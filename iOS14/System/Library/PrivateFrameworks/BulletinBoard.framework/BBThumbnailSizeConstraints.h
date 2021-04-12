/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface BBThumbnailSizeConstraints : NSObject <NSSecureCoding> {

	float _fixedWidth;
	float _fixedHeight;
	float _fixedDimension;
	float _minAspectRatio;
	float _maxAspectRatio;
	float _thumbnailScale;
	long long _constraintType;

}

@property (assign,nonatomic) long long constraintType;              //@synthesize constraintType=_constraintType - In the implementation block
@property (assign,nonatomic) float fixedWidth;                      //@synthesize fixedWidth=_fixedWidth - In the implementation block
@property (assign,nonatomic) float fixedHeight;                     //@synthesize fixedHeight=_fixedHeight - In the implementation block
@property (assign,nonatomic) float fixedDimension;                  //@synthesize fixedDimension=_fixedDimension - In the implementation block
@property (assign,nonatomic) float minAspectRatio;                  //@synthesize minAspectRatio=_minAspectRatio - In the implementation block
@property (assign,nonatomic) float maxAspectRatio;                  //@synthesize maxAspectRatio=_maxAspectRatio - In the implementation block
@property (assign,nonatomic) float thumbnailScale;                  //@synthesize thumbnailScale=_thumbnailScale - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(float)fixedHeight;
-(float)maxAspectRatio;
-(void)setMaxAspectRatio:(float)arg1 ;
-(void)setFixedHeight:(float)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)areReasonable;
-(void)setConstraintType:(long long)arg1 ;
-(void)setFixedWidth:(float)arg1 ;
-(void)setFixedDimension:(float)arg1 ;
-(void)setThumbnailScale:(float)arg1 ;
-(long long)constraintType;
-(float)fixedWidth;
-(float)fixedDimension;
-(float)thumbnailScale;
-(CGSize)sizeFromAspectRatio:(double)arg1 ;
-(float)minAspectRatio;
-(void)setMinAspectRatio:(float)arg1 ;
@end

