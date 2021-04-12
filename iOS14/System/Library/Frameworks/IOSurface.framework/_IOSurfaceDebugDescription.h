/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/IOSurface.framework/IOSurface
*/

#import <IOSurface/IOSurface-Structs.h>
#import <IOSurface/IOSurfaceDebugDescription.h>

@class NSString;

@interface _IOSurfaceDebugDescription : IOSurfaceDebugDescription {

	SCD_Struct_IO3 _basicInfo;
	SCD_Struct_IO4 _layoutInfo;
	NSString* _name;

}

@property (readonly) unsigned long long virtualAddress; 
@property (readonly) unsigned long long allocationSize; 
@property (readonly) unsigned surfaceID; 
@property (readonly) unsigned pixelFormat; 
@property (readonly) unsigned width; 
@property (readonly) unsigned height; 
@property (readonly) NSString * name; 
@property (readonly) unsigned long long traceID; 
-(unsigned)width;
-(unsigned long long)virtualAddress;
-(unsigned)pixelFormat;
-(unsigned)surfaceID;
-(unsigned)height;
-(unsigned long long)allocationSize;
-(NSString *)name;
-(id)description;
-(unsigned long long)traceID;
-(void)dealloc;
-(id)initWithBasicInfo:(const SCD_Struct_IO3*)arg1 layoutInfo:(const SCD_Struct_IO4*)arg2 name:(id)arg3 ;
@end

