/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CHSubstroke;

@interface CHSubstrokePlacement : NSObject <NSCopying, NSSecureCoding> {

	CHSubstroke* _substroke;
	long long _originalWritingDirectionIndex;
	CGVector _writingOrientation;
	CGVector _strokeDeviation;
	CGPoint _coalescedCenter;

}

@property (nonatomic,retain,readonly) CHSubstroke * substroke;                     //@synthesize substroke=_substroke - In the implementation block
@property (assign,nonatomic) CGVector writingOrientation;                          //@synthesize writingOrientation=_writingOrientation - In the implementation block
@property (assign,nonatomic) CGVector strokeDeviation;                             //@synthesize strokeDeviation=_strokeDeviation - In the implementation block
@property (assign,nonatomic) long long originalWritingDirectionIndex;              //@synthesize originalWritingDirectionIndex=_originalWritingDirectionIndex - In the implementation block
@property (assign,nonatomic) CGPoint coalescedCenter;                              //@synthesize coalescedCenter=_coalescedCenter - In the implementation block
@property (nonatomic,readonly) CGRect rotatedBounds; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGAffineTransform)orientationTransform;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(CGRect)rotatedBounds;
-(CHSubstroke *)substroke;
-(CGRect)orientedBounds;
-(CGVector)writingOrientation;
-(id)initWithSubstroke:(id)arg1 ;
-(void)setWritingOrientation:(CGVector)arg1 ;
-(CGVector)strokeDeviation;
-(void)setStrokeDeviation:(CGVector)arg1 ;
-(long long)originalWritingDirectionIndex;
-(void)setOriginalWritingDirectionIndex:(long long)arg1 ;
-(CGPoint)coalescedCenter;
-(void)setCoalescedCenter:(CGPoint)arg1 ;
@end

