/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/


@protocol OS_dispatch_data, MTLLibrary;
@class NSObject;

@interface CIKernelLibrary : NSObject {

	NSObject*<OS_dispatch_data> _data;
	id<MTLLibrary> _library;

}

@property (readonly) unsigned long long functionCount; 
+(id)libraryWithData:(id)arg1 error:(id*)arg2 ;
+(id)internalLibraryWithName:(id)arg1 device:(id)arg2 ;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(id)newFunctionWithName:(id)arg1 device:(id)arg2 ;
-(id)externFunctionNames;
-(id)functionWithName:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)functionCount;
@end

