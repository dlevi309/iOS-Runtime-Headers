/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


@protocol OS_dispatch_data;
#import <Metal/Metal-Structs.h>
@class NSObject;

@interface MTLDebugInstrumentationData : NSObject {

	NSObject*<OS_dispatch_data> _dataMap;
	const MTLSerializedDebugInstrumentationData* _data;
	vector<const __CFString *, std::__1::allocator<const __CFString *> >* _strings;
	vector<MTLDebugLocation *, std::__1::allocator<MTLDebugLocation *> >* _debugLocations;
	vector<MTLDebugSubProgram *, std::__1::allocator<MTLDebugSubProgram *> >* _debugSubPrograms;

}

@property (nonatomic,readonly) BOOL hasBacktrackingFailures; 
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)debugSubProgramForID:(unsigned)arg1 ;
-(id)debugLocationForID:(unsigned)arg1 ;
-(id)stringForID:(unsigned)arg1 ;
-(BOOL)hasBacktrackingFailures;
@end

