/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
*/

@class VMUVMRegionTracker, NSSet;


@protocol VMUStackLogReader <NSObject>
@property (readonly) unsigned task; 
@property (readonly) BOOL is64bit; 
@property (readonly) BOOL inspectingLiveProcess; 
@property (readonly) BOOL usesLiteMode; 
@property (readonly) BOOL coldestFrameIsNotThreadId; 
@property (readonly) VMUVMRegionTracker * regionTracker; 
@property (nonatomic,retain) NSSet * excludedFrames; 
@property (readonly) unsigned long long nodesInUniquingTable; 
@optional
-(unsigned long long)stackIDForNode:(unsigned)arg1;
-(unsigned long long)liteModeStackIDforAddress:(unsigned long long)arg1 size:(unsigned long long)arg2;
-(unsigned long long)liteModeStackIDforVMregionAddress:(unsigned long long)arg1;
-(SCD_Struct_VM4*)liteMSLPayloadforMallocAddress:(unsigned long long)arg1 size:(unsigned long long)arg2;
-(SCD_Struct_VM4*)liteMSLPayloadforVMregionAddress:(unsigned long long)arg1;
-(void)streamFullStackLogsToBlock:(/*^block*/id)arg1;
-(unsigned long long)nodesInUniquingTable;

@required
-(unsigned)task;
-(BOOL)is64bit;
-(id)vmuVMRegionForAddress:(unsigned long long)arg1;
-(long long)getFramesForStackID:(unsigned long long)arg1 stackFramesBuffer:(unsigned long long*)arg2;
-(long long)getFramesForNode:(unsigned)arg1 inLiteZone:(BOOL)arg2 stackFramesBuffer:(unsigned long long*)arg3;
-(id)symbolicatedBacktraceForFrames:(unsigned long long*)arg1 frameCount:(long long)arg2 options:(unsigned long long)arg3;
-(BOOL)coldestFrameIsNotThreadId;
-(id)binaryImagePathForPCaddress:(unsigned long long)arg1;
-(id)functionNameForPCaddress:(unsigned long long)arg1;
-(VMURange*)functionRangeContainingPCaddress:(unsigned long long)arg1;
-(VMURange*)binaryImageRangeForPCaddress:(unsigned long long)arg1;
-(id)sourceFileNameAndLineNumberForPCaddress:(unsigned long long)arg1 fullPath:(BOOL)arg2;
-(int)enumerateRecords:(/*^block*/id)arg1;
-(int)enumerateMSLRecordsAndPayloads:(/*^block*/id)arg1;
-(long long)getFramesForAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 inLiteZone:(BOOL)arg3 stackFramesBuffer:(unsigned long long*)arg4;
-(id)sourcePathForPCaddress:(unsigned long long)arg1;
-(id)sourceFileNameForPCaddress:(unsigned long long)arg1;
-(unsigned)sourceLineNumberForPCaddress:(unsigned long long)arg1;
-(id)symbolicatedBacktraceForNode:(unsigned)arg1 nodeDetails:(/*function pointer*/void*)arg2 isLiteZone:(BOOL)arg3 options:(unsigned long long)arg4;
-(id)symbolicatedBacktraceForStackID:(unsigned long long)arg1 options:(unsigned long long)arg2;
-(BOOL)inspectingLiveProcess;
-(BOOL)usesLiteMode;
-(VMUVMRegionTracker *)regionTracker;
-(NSSet *)excludedFrames;
-(void)setExcludedFrames:(id)arg1;

@end

