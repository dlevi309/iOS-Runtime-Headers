/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit
*/

#import <NeutrinoKit/NeutrinoKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NUViewport : NSObject <NSCopying> {

	double _backingScaleFactor;
	CGSize _size;
	CGPoint _position;
	CGPoint _anchorPoint;

}

@property (nonatomic,readonly) CGSize size;                            //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) double backingScaleFactor;              //@synthesize backingScaleFactor=_backingScaleFactor - In the implementation block
@property (nonatomic,readonly) CGSize backingSize; 
@property (assign,nonatomic) CGPoint position;                         //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) CGPoint backingPosition; 
@property (assign,nonatomic) CGPoint anchorPoint;                      //@synthesize anchorPoint=_anchorPoint - In the implementation block
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)size;
-(CGPoint)position;
-(void)setPosition:(CGPoint)arg1 ;
-(id)initWithSize:(CGSize)arg1 ;
-(CGPoint)anchorPoint;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(CGSize)backingSize;
-(double)backingScaleFactor;
-(id)initWithSize:(CGSize)arg1 backingScaleFactor:(double)arg2 ;
-(CGPoint)backingPosition;
@end

