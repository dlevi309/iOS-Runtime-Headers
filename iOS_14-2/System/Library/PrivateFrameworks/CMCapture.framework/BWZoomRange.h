/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface BWZoomRange : NSObject <NSCopying> {

	float _lowerBound;
	float _upperBound;
	float _fudgedLowerBound;
	float _fudgedUpperBound;
	unsigned long long _hash;

}

@property (nonatomic,readonly) float lowerBound;                    //@synthesize lowerBound=_lowerBound - In the implementation block
@property (nonatomic,readonly) float upperBound;                    //@synthesize upperBound=_upperBound - In the implementation block
@property (nonatomic,readonly) float fudgedLowerBound;              //@synthesize fudgedLowerBound=_fudgedLowerBound - In the implementation block
@property (nonatomic,readonly) float fudgedUpperBound;              //@synthesize fudgedUpperBound=_fudgedUpperBound - In the implementation block
+(id)zoomRangeWithLower:(float)arg1 upperBound:(float)arg2 ;
+(id)fudgedZoomRangeWithLower:(float)arg1 upperBound:(float)arg2 fudgedLowerBound:(float)arg3 fudgedUpperBound:(float)arg4 ;
-(id)description;
-(float)applyFudgeToZoomFactor:(float)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)lowerBound;
-(float)upperBound;
-(id)initWithLowerBound:(float)arg1 upperBound:(float)arg2 ;
-(id)initWithLowerBound:(float)arg1 upperBound:(float)arg2 fudgedLowerBound:(float)arg3 fudgedUpperBound:(float)arg4 ;
-(float)fudgedLowerBound;
-(float)fudgedUpperBound;
-(BOOL)isEqual:(id)arg1 ;
@end

