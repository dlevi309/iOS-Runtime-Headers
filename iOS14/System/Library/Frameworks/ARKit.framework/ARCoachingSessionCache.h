/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


@interface ARCoachingSessionCache : NSObject {

	long long _planeCount;
	long long _horizontalPlaneCount;
	long long _verticalPlaneCount;
	BOOL _planeCacheInitialized;

}
-(void)clear;
-(id)init;
-(void)updatePlaneCache:(id)arg1 ;
-(void)removeFromPlaneCache:(id)arg1 ;
-(void)initializePlaneCache:(id)arg1 ;
-(void)anchorsAdded:(id)arg1 ;
-(void)anchorsRemoved:(id)arg1 ;
-(void)sessionChanged;
-(BOOL)hasAnyPlane:(id)arg1 ;
-(BOOL)hasHorizontalPlane:(id)arg1 ;
-(BOOL)hasVerticalPlane:(id)arg1 ;
@end

