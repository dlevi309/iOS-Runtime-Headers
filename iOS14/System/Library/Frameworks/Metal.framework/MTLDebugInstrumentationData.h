/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


@protocol OS_dispatch_data;
#import <Metal/Metal-Structs.h>
@class NSObject, NSData;

@interface MTLDebugInstrumentationData : NSObject {

	NSObject*<OS_dispatch_data> _dataMap;
	const MTLSerializedDebugInstrumentationData* _data;
	vector<const __CFString *, std::__1::allocator<const __CFString *> >* _strings;
	vector<MTLDebugLocation *, std::__1::allocator<MTLDebugLocation *> >* _debugLocations;
	vector<MTLDebugSubProgram *, std::__1::allocator<MTLDebugSubProgram *> >* _debugSubPrograms;
	NSData* _globalConstantsData;
	NSObject*<OS_dispatch_data> _userReflectionData;

}

@property (nonatomic,readonly) BOOL hasGlobalConstantsInstrumentationFailures; 
@property (nonatomic,readonly) BOOL hasArgumentBufferInstrumentationFailures; 
@property (nonatomic,readonly) BOOL hasArgumentLimitsInstrumentationFailures; 
@property (nonatomic,readonly) unsigned threadgroupArgumentOffset; 
@property (nonatomic,readonly) unsigned activeThreadgroupMask; 
@property (nonatomic,readonly) unsigned long long bufferAccessMask; 
-(id)initWithData:(id)arg1 ;
-(id)debugSubProgramForID:(unsigned)arg1 ;
-(id)debugLocationForID:(unsigned)arg1 ;
-(id)stringForID:(unsigned)arg1 ;
-(id)globalConstantsData;
-(id)userReflectionData;
-(BOOL)hasGlobalConstantsInstrumentationFailures;
-(BOOL)hasArgumentBufferInstrumentationFailures;
-(BOOL)hasArgumentLimitsInstrumentationFailures;
-(unsigned)threadgroupArgumentOffset;
-(unsigned)activeThreadgroupMask;
-(unsigned long long)bufferAccessMask;
-(void)dealloc;
@end

