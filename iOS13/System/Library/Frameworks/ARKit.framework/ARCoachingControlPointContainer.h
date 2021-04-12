/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


#import <ARKit/ARKit-Structs.h>
@interface ARCoachingControlPointContainer : NSObject {

	vector<ARCoachingControlPoint, std::__1::allocator<ARCoachingControlPoint> >* _controlPoints;

}

@property (nonatomic,readonly) compressed_pair<float *, std::__1::allocator<float> >* controlPoints; 
@property (nonatomic,readonly) unsigned numControlPoints; 
-(compressed_pair<float *, std::__1::allocator<float> >*)controlPoints;
-(unsigned)numControlPoints;
-(id)initWithControlPoints:(compressed_pair<float *, std::__1::allocator<float> >*)arg1 numControlPoints:(int)arg2 ;
-(void)overwriteWithControlPoints:(compressed_pair<float *, std::__1::allocator<float> >*)arg1 numControlPoints:(int)arg2 ;
@end

