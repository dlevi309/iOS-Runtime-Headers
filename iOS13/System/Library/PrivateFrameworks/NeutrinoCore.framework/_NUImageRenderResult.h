/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/_NURenderResult.h>
#import <libobjc.A.dylib/NUImageRenderResult.h>

@class NURegion, NUImageGeometry, NSString;

@interface _NUImageRenderResult : _NURenderResult <NUImageRenderResult> {

	NURegion* _region;
	NUImageGeometry* _geometry;

}

@property (retain) NURegion * region;                                //@synthesize region=_region - In the implementation block
@property (retain) NUImageGeometry * geometry;                       //@synthesize geometry=_geometry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<NURenderStatistics> statistics; 
-(NURegion *)region;
-(void)setRegion:(NURegion *)arg1 ;
-(NUImageGeometry *)geometry;
-(void)setGeometry:(NUImageGeometry *)arg1 ;
@end

