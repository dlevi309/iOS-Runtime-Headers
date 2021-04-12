/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CHEncodedStrokeIdentifier;

@interface CHSubstroke : NSObject <NSSecureCoding> {

	vector<CGPoint, std::__1::allocator<CGPoint> >* _convexHull;
	CHEncodedStrokeIdentifier* _strokeIdentifier;
	double _startTimestamp;
	double _endTimestamp;
	double _curvature;
	CGRect _bounds;

}

@property (nonatomic,retain,readonly) CHEncodedStrokeIdentifier * strokeIdentifier;              //@synthesize strokeIdentifier=_strokeIdentifier - In the implementation block
@property (nonatomic,readonly) CGRect bounds;                                                    //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,readonly) double startTimestamp;                                            //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (nonatomic,readonly) double endTimestamp;                                              //@synthesize endTimestamp=_endTimestamp - In the implementation block
@property (nonatomic,readonly) double curvature;                                                 //@synthesize curvature=_curvature - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)substrokesForStroke:(id)arg1 ;
-(CGRect)bounds;
-(void)encodeWithCoder:(id)arg1 ;
-(double)startTimestamp;
-(double)endTimestamp;
-(id)initWithCoder:(id)arg1 ;
-(vector<CGPoint, std::__1::allocator<CGPoint> >*)convexHull;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(CHEncodedStrokeIdentifier *)strokeIdentifier;
-(id)initWithStrokeIdentifier:(id)arg1 bounds:(CGRect)arg2 startTimestamp:(double)arg3 endTimestamp:(double)arg4 convexHull:(const vector<CGPoint, std::__1::allocator<CGPoint> >*)arg5 curvature:(double)arg6 ;
-(double)curvature;
-(BOOL)isEqualToSubstroke:(id)arg1 ;
@end

