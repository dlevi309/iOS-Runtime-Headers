/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AXMDisplay : NSObject <NSCopying> {

	BOOL _supportsDeepColor;
	NSString* _name;
	double _scale;
	double _orientation;
	long long _physicalOrientation;
	long long _backingType;
	CGSize _size;
	CGRect _referenceBounds;

}

@property (assign,nonatomic) long long backingType;                      //@synthesize backingType=_backingType - In the implementation block
@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) double scale;                               //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) CGSize size;                                //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double orientation;                         //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) long long physicalOrientation;              //@synthesize physicalOrientation=_physicalOrientation - In the implementation block
@property (assign,nonatomic) CGRect referenceBounds;                     //@synthesize referenceBounds=_referenceBounds - In the implementation block
@property (assign,nonatomic) BOOL supportsDeepColor;                     //@synthesize supportsDeepColor=_supportsDeepColor - In the implementation block
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(CGSize)size;
-(double)scale;
-(double)orientation;
-(void)setOrientation:(double)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)setScale:(double)arg1 ;
-(CGRect)referenceBounds;
-(CGRect)convertRectToDisplay:(CGRect)arg1 ;
-(BOOL)supportsDeepColor;
-(long long)physicalOrientation;
-(id)_initWithBackingType:(long long)arg1 ;
-(void)setPhysicalOrientation:(long long)arg1 ;
-(void)setReferenceBounds:(CGRect)arg1 ;
-(void)setSupportsDeepColor:(BOOL)arg1 ;
-(CGPoint)convertPointToDisplay:(CGPoint)arg1 ;
-(long long)backingType;
-(void)setBackingType:(long long)arg1 ;
@end

