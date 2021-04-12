/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NUImageGeometry *)geometry;
-(CGSize)size;
-(CGRect)extent;
-(NUJSScale *)scale;
-(CGSize)scaledSize;
-(long long)orientation;
-(id)initWithRepresentedObject:(id)arg1 context:(id)arg2 ;
-(id)initWithGeometry:(id)arg1 context:(id)arg2 ;
@end

