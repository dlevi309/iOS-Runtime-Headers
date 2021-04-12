/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

@class NUJSImageGeometry, NUJSImageProperties, NUJSVideoProperties;


@protocol NUJSRenderNodeExport <JSExport>
@property (readonly) NUJSImageGeometry * geometry; 
@property (readonly) NUJSImageProperties * imageProperties; 
@property (readonly) NUJSVideoProperties * videoProperties; 
@required
-(NUJSImageProperties *)imageProperties;
-(NUJSImageGeometry *)geometry;
-(NUJSVideoProperties *)videoProperties;

@end

