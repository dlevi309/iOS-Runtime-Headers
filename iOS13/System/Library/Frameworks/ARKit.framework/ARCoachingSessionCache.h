/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


@interface ARCoachingSessionCache : NSObject {

	long long _planeCount;
	long long _horizontalPlaneCount;
	long long _verticalPlaneCount;
	BOOL _planeCacheInitialized;

}
-(id)init;
-(void)clear;
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

