/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


#import <ARKit/ARKit-Structs.h>
@interface ARCoachingSplineGroup : NSObject {

	vector<ARCoachingControlPoint, std::__1::allocator<ARCoachingControlPoint> >* _controlPoints;
	vector<ARCoachingPatchData, std::__1::allocator<ARCoachingPatchData> >* _patchData;
	vector<unsigned short, std::__1::allocator<unsigned short> >* _indices;

}

@property (nonatomic,readonly) SCD_Struct_AR11* controlPoints; 
@property (nonatomic,readonly) unsigned numControlPoints; 
@property (nonatomic,readonly) SCD_Struct_AR10* patchData; 
@property (nonatomic,readonly) unsigned patchDataLength; 
@property (nonatomic,readonly) unsigned short* indices; 
@property (nonatomic,readonly) unsigned numIndices; 
-(unsigned short*)indices;
-(SCD_Struct_AR11*)controlPoints;
-(unsigned)patchDataLength;
-(unsigned)numControlPoints;
-(unsigned)numIndices;
-(SCD_Struct_AR10*)patchData;
-(id)initWithSplines:(id)arg1 ;
@end

