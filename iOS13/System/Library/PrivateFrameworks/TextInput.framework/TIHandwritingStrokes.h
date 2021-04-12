/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TIHandwritingStrokes : NSObject <NSCopying, NSSecureCoding> {

	vector<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> >, std::__1::allocator<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > > >* _strokes;
	BOOL _continuePreviousStroke;

}
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)addPoint:(CGPoint)arg1 ;
-(void)endStroke;
-(void)removeAllStrokes;
-(unsigned long long)numberOfStrokes;
-(void)removeStrokeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfPointsInStrokeAtIndex:(unsigned long long)arg1 ;
-(CGPoint)pointAtIndex:(unsigned long long)arg1 inStrokeAtIndex:(unsigned long long)arg2 ;
-(unsigned long long)totalNumberOfPoints;
@end

