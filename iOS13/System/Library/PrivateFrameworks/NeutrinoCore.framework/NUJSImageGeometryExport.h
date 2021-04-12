/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

@class NUJSScale;


@protocol NUJSImageGeometryExport <JSExport>
@property (readonly) CGRect extent; 
@property (readonly) CGSize size; 
@property (readonly) CGSize scaledSize; 
@property (readonly) NUJSScale * scale; 
@property (readonly) long long orientation; 
@required
-(CGSize)size;
-(NUJSScale *)scale;
-(long long)orientation;
-(CGRect)extent;
-(CGSize)scaledSize;

@end

