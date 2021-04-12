/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)functionWithName:(id)arg1 ;
-(unsigned long long)functionCount;
-(id)externFunctionNames;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(id)newFunctionWithName:(id)arg1 device:(id)arg2 ;
@end

