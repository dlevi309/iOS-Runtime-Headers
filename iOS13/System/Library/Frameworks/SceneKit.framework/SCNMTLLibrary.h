/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)_load;
-(id<MTLLibrary>)library;
-(id)initWithPath:(id)arg1 manager:(id)arg2 ;
@end

