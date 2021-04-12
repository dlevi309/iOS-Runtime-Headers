/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(unsigned)width;
-(unsigned)height;
-(unsigned)pixelFormat;
-(unsigned long long)allocationSize;
-(id)initWithBasicInfo:(const SCD_Struct_IO3*)arg1 layoutInfo:(const SCD_Struct_IO4*)arg2 name:(id)arg3 ;
-(unsigned long long)virtualAddress;
-(unsigned)surfaceID;
@end

