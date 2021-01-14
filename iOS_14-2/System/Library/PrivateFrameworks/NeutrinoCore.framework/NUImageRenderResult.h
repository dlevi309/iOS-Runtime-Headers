/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

@class NURegion, NUImageGeometry;


@protocol NUImageRenderResult <NURenderResult>
@property (readonly) NURegion * region; 
@property (readonly) NUImageGeometry * geometry; 
@required
-(NUImageGeometry *)geometry;
-(NURegion *)region;

@end

