/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setFixedHeight:(float)arg1 ;
-(float)fixedHeight;
-(BOOL)areReasonable;
-(CGSize)sizeFromAspectRatio:(double)arg1 ;
-(void)setConstraintType:(long long)arg1 ;
-(void)setFixedWidth:(float)arg1 ;
-(void)setFixedDimension:(float)arg1 ;
-(void)setMinAspectRatio:(float)arg1 ;
-(void)setMaxAspectRatio:(float)arg1 ;
-(void)setThumbnailScale:(float)arg1 ;
-(long long)constraintType;
-(float)fixedWidth;
-(float)fixedDimension;
-(float)minAspectRatio;
-(float)maxAspectRatio;
-(float)thumbnailScale;
@end

