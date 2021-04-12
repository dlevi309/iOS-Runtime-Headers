/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
*/

#import <Symbolication/Symbolication-Structs.h>
#import <Symbolication/VMUStackLogReaderBase.h>
#import <libobjc.A.dylib/VMUStackLogReader.h>

@class VMUTaskMemoryScanner, VMUVMRegionTracker, NSSet, NSString;

@interface VMUTaskStackLogReader : VMUStackLogReaderBase <VMUStackLogReader> {

	VMUTaskMemoryScanner* _scanner;
	CSTypeRef _symbolicator;
	unsigned long long _msl_payload_version;

}

@property (assign,nonatomic,__weak) VMUTaskMemoryScanner * scanner;              //@synthesize scanner=_scanner - In the implementation block
@property (readonly) unsigned task; 
@property (readonly) BOOL is64bit; 
@property (readonly) BOOL inspectingLiveProcess; 
@property (readonly) BOOL usesLiteMode; 
@property (readonly) BOOL coldestFrameIsNotThreadId; 
@property (readonly) VMUVMRegionTracker * regionTracker; 
@property (nonatomic,retain) NSSet * excludedFrames; 
@property (readonly) unsigned long long nodesInUniquingTable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTask:(unsigned)arg1 ;
-(id)initWithTask:(unsigned)arg1 symbolicator:(CSTypeRef)arg2 ;
-(BOOL)is64bit;
-(VMUTaskMemoryScanner *)scanner;
-(void)setScanner:(VMUTaskMemoryScanner *)arg1 ;
-(id)vmuVMRegionForAddress:(unsigned long long)arg1 ;
-(long long)getFramesForStackID:(unsigned long long)arg1 stackFramesBuffer:(unsigned long long*)arg2 ;
-(long long)getFramesForNode:(unsigned)arg1 inLiteZone:(BOOL)arg2 stackFramesBuffer:(unsigned long long*)arg3 ;
-(VMUVMRegionTracker *)regionTracker;
-(id)binaryImagePathForPCaddress:(unsigned long long)arg1 ;
-(id)functionNameForPCaddress:(unsigned long long)arg1 ;
-(VMURange)functionRangeContainingPCaddress:(unsigned long long)arg1 ;
-(VMURange)binaryImageRangeForPCaddress:(unsigned long long)arg1 ;
-(id)sourceFileNameAndLineNumberForPCaddress:(unsigned long long)arg1 fullPath:(BOOL)arg2 ;
-(int)enumerateRecords:(/*^block*/id)arg1 ;
-(int)enumerateMSLRecordsAndPayloads:(/*^block*/id)arg1 ;
-(long long)getFramesForAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 inLiteZone:(BOOL)arg3 stackFramesBuffer:(unsigned long long*)arg4 ;
-(id)sourcePathForPCaddress:(unsigned long long)arg1 ;
-(id)sourceFileNameForPCaddress:(unsigned long long)arg1 ;
-(unsigned)sourceLineNumberForPCaddress:(unsigned long long)arg1 ;
-(BOOL)inspectingLiveProcess;
-(unsigned long long)liteModeStackIDforAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 ;
-(unsigned long long)liteModeStackIDforVMregionAddress:(unsigned long long)arg1 ;
-(SCD_Struct_VM4)liteMSLPayloadforMallocAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 ;
-(SCD_Struct_VM4)liteMSLPayloadforVMregionAddress:(unsigned long long)arg1 ;
-(unsigned long long)nodesInUniquingTable;
-(void)dealloc;
@end

