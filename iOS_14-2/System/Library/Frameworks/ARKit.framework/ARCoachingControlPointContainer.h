/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


#import <ARKit/ARKit-Structs.h>
@interface ARCoachingControlPointContainer : NSObject {

	vector<ARCoachingControlPoint, std::__1::allocator<ARCoachingControlPoint> >* _controlPoints;

}

@property (nonatomic,readonly) SCD_Struct_AR11* controlPoints; 
@property (nonatomic,readonly) unsigned numControlPoints; 
-(SCD_Struct_AR11*)controlPoints;
-(unsigned)numControlPoints;
-(id)initWithControlPoints:(SCD_Struct_AR11*)arg1 numControlPoints:(int)arg2 ;
-(void)overwriteWithControlPoints:(SCD_Struct_AR11*)arg1 numControlPoints:(int)arg2 ;
@end

