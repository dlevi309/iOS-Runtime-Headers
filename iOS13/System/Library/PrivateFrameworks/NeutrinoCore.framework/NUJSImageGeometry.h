/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUJSProxy.h>
#import <libobjc.A.dylib/NUJSImageGeometryExport.h>

@class NUJSScale, NUImageGeometry;

@interface NUJSImageGeometry : NUJSProxy <NUJSImageGeometryExport>

@property (readonly) NUImageGeometry * geometry; 
@property (readonly) CGRect extent; 
@property (readonly) CGSize size; 
@property (readonly) CGSize scaledSize; 
@property (readonly) NUJSScale * scale; 
@property (readonly) long long orientation; 
-(CGSize)size;
-(NUJSScale *)scale;
-(long long)orientation;
-(CGRect)extent;
-(CGSize)scaledSize;
-(NUImageGeometry *)geometry;
-(id)initWithRepresentedObject:(id)arg1 context:(id)arg2 ;
-(id)initWithGeometry:(id)arg1 context:(id)arg2 ;
@end

