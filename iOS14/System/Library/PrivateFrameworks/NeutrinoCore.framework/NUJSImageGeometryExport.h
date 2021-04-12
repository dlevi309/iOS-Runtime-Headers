/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGRect)extent;
-(NUJSScale *)scale;
-(CGSize)scaledSize;
-(long long)orientation;

@end

