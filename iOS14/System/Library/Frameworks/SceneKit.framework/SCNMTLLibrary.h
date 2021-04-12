/*
* Generated on Thursday, January 14, 2021 at 2:27:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


@protocol MTLLibrary;
@class NSURL, SCNMTLLibraryManager;

@interface SCNMTLLibrary : NSObject {

	NSURL* _libraryURL;
	SCNMTLLibraryManager* _manager;
	id<MTLLibrary> _library;

}

@property (nonatomic,readonly) id<MTLLibrary> library;              //@synthesize library=_library - In the implementation block
-(id<MTLLibrary>)library;
-(void)_load;
-(void)dealloc;
-(id)initWithPath:(id)arg1 manager:(id)arg2 ;
@end

